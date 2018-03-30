/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:32:04 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/27 14:34:20 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	**a;
	int		i;

	a = ft_strsplit(0, '*');
	if (a == 0)
	{
		printf("null!\n");
		return (0);
	}
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	system("leaks a.out");
	return (0);
}
