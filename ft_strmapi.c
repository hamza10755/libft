/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamzabillah <hamzabillah@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:01:39 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/06 00:25:06 by hamzabillah      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*t;
	int	i;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	t = (char *)malloc (ft_strlen(s) + 1);
	if (!t)
	{
		return (NULL);
	}
	while (s[i])
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[i] = '\0';
	return (t);

}
