/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lgint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:18:05 by hvaillie          #+#    #+#             */
/*   Updated: 2017/11/15 15:18:09 by hvaillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_lgint(int n)
{
	size_t		i;
	long long	nl;

	i = 1;
	nl = n;
	if (n < 0)
	{
		i++;
		nl = -nl;
	}
	while (nl / 10 > 0)
	{
		i++;
		nl = nl / 10;
	}
	return (i);
}
