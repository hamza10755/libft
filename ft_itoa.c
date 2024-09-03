/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:38:23 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/03 12:46:58 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_num_length(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	fill_number(char *str, int n, int len)
{
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = get_num_length(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	fill_number(result, n, len);
	return (result);
}
