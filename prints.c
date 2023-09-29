/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:09:30 by fseles            #+#    #+#             */
/*   Updated: 2023/09/28 15:09:32 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

long	prints(va_list lista)
{
	char	*string;
	long	string_length;

	string = va_arg(lista, char *);
	ft_putstr_fd(string, 1);
	string_length = ft_strlen(string);
	return (string_length);
}
