/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:37:00 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/22 15:37:02 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char	*a;

	a = 0;
	printf("my:       %s\n", ft_strdup(a));
	printf("original: %s\n", strdup(a));
}