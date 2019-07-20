/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 22:30:15 by bsouilla          #+#    #+#             */
/*   Updated: 2019/07/19 00:05:20 by bsouilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
#include <unistd.h>

typedef int t_bool;

# define EVEN(x) ((x % 2) ? TRUE : FALSE)
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG "I have an  number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
