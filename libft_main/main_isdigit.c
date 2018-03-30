/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:01:05 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/21 18:07:57 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	int a;

	a = '9' + 1;
	printf("my:       %i\n", ft_isdigit(a));
	printf("original: %i\n", isdigit(a));
}
