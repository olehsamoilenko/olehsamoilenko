/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:00:27 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/21 18:00:28 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countdigits(int n)
{
	int count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}