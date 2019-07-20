/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:17:54 by bsouilla          #+#    #+#             */
/*   Updated: 2019/07/20 15:51:57 by bsouilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	char **cpy;
	int i;
	int j;

	cpy = malloc(sizeof(char) * ft_strlen(*av));
	while (av[j])
	{
		cpy[j] = av[j];
		j++;
	}
	cpy[j] = 0;
	while (av[i])
	{
		t_stock_str.size = ft_strlen(ac);
		t_stock_str.str = av[i];
		t_stock_str.copy = cpy[i];
		i++;
	}
}
