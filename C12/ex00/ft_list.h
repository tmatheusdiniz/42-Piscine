/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:35:29 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/09 15:52:19 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct  	s_list
{
	void			*data;
    struct s_list   *next;
}   				t_list;

t_list  *ft_create_elem(void *data);

#endif
