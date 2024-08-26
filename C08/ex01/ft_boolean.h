/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:00:12 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/18 16:22:36 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

typedef int t_bool;

#define EVEN(nbr) (nbr % 2 == 0)

#define FALSE 0
#define TRUE 1

#define EVEN_MSG " I HAVE AN EVEN NUMBER OF ARGUMENTS \n"
#define ODD_MSG  " I HAVE AN ODD NUMBER OF ARGUMENTS \n"

#define SUCCESS 0

#endif