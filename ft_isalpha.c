/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:08:25 by hbelaih           #+#    #+#             */
/*   Updated: 2024/08/26 16:02:55 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	else
	{
		return (0);
	}
}
/*
   int main()
   {
   printf("%d", ft_isalpha(97));
   }*/
