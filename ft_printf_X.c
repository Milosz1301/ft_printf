/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:43:38 by mstawski          #+#    #+#             */
/*   Updated: 2025/02/28 13:03:05 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_up_x(unsigned int num)
{
	char	*hex_num;
	int		temp;
	int		digits;
	int		print;

	digits = ft_printf_cxd(num);
	print = digits;
	hex_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!hex_num)
		return (ft_printf_s("(nil)"));
	hex_num[digits] = '\0';
	while (digits)
	{
		temp = num % 16;
		if (temp < 10)
			hex_num[--digits] = temp + '0';
		else
			hex_num[--digits] = temp + 55;
		num /= 16;
	}
	ft_putstr_fd(hex_num, 1);
	free(hex_num);
	return (print);
}
