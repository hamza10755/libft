/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamzabillah <hamzabillah@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:29:41 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/06 00:28:40 by hamzabillah      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	if (!s || !f)
	{
		return ;
	}
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
