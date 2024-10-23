/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:36:18 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/04 19:35:21 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_issep(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i ++;
	}
	return (0);
}

int	ft_strlen(char *ptr, char *sep)
{
	int i;
	
	i = 0;
	while (ptr[i] && !ft_issep(ptr[i], sep))
		i ++;
	return (i);
}

int		ft_count_words(char *str, char *sep)
{
	int count;
	int	i;
	int aux;
	i = 0;
	count = 0;
	aux = 0;
	while (str[i] != '\0')
	{
		if (ft_issep(str[i], sep))
		{
			if (aux)
			{
				aux = 0;
			}
		}
		else
		{
			if (!aux)
			{
				aux = 1;
				count++;
			}
		}
		i++;
	}
	return (count);
}

char	*word_injection(char *ptr, char *sep)
{
	char *word;
	int i;

	i = ft_strlen(ptr, sep);
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	i = 0;
	while (ptr[i] && !ft_issep(ptr[i], sep))
	{
		word[i] = ptr[i];
		i ++;
	}
	word[i] = '\0';
	return (word);
}

char    **ft_split(char *str, char *charset)
{
	int i;
	int j;
	char **matrix;

	j = 0;
	i = ft_count_words(str, charset);
	matrix = (char **)malloc(sizeof(char *) * (i + 1));
	if (!matrix || !str || !charset)
		return (0);
	i = 0;
	while (str[i])
	{
		if (!ft_issep(str[i], charset))
		{
			matrix[j] = word_injection(&str[i], charset);

			while (str[i] && !ft_issep(str[i], charset))
				i ++;
			j ++;
		}
		else
			i ++;
	}
	matrix[j] = NULL;
	return (matrix);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	int j;

	j = 0;
	char **matrix;
	if(argc == 3)
	{
		matrix = ft_split(argv[1], argv[2]);
		while (matrix[j])
		{
			i = 0;
			if (matrix[j][i])
			{
				printf("result: %s", matrix[j]);
				printf("\n");
			}
			free(matrix[j]);
			j ++;
		} 
		free (matrix);
	}
	else
		printf("forbidden more than 2 arguments");
	return (0);
}
*/