/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaillie <hvaillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:37:26 by hvaillie          #+#    #+#             */
/*   Updated: 2017/12/01 18:12:28 by hvaillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strchrx(const char *s, int c)
{
	char	cc;
	int		i;

	cc = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			break ;
		i++;
	}
	if (s[i] == cc)
		return (i);
	return (-1);
}
