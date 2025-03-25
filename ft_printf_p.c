/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:40:58 by mstawski          #+#    #+#             */
/*   Updated: 2025/02/28 11:45:51 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_p(size_t address)
{
	int	count;

	if (!address)
		return (ft_printf_s("(nil)"));
	count = ft_printf_s("0x");
	count += ft_printf_low_x(address);
	return (count);
}
