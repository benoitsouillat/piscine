/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:42:38 by bsouilla          #+#    #+#             */
/*   Updated: 2019/07/20 15:51:15 by bsouilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H
#include <stdlib.h>
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}				t_stock_str;

#endif
