/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamzabillah <hamzabillah@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:02:36 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/06 00:53:05 by hamzabillah      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dst && !src)
		return (dst);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst < src)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		s += n;
		d += n;
		while (n--)
			*--d = *--s;
	}
	return (dst);
}
