/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:33:21 by mstawski          #+#    #+#             */
/*   Updated: 2025/02/28 14:44:26 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_s(char *string)
{
	if (!string)
		return (ft_printf_s("(null)"));
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}
