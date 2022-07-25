/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svillalv <svillalv@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:59:01 by svillalv          #+#    #+#             */
/*   Updated: 2022/07/21 17:20:42 by svillalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_check_format(const char c, va_list args);
int	ft_printchar(const char c);
int	ft_print_hex(unsigned int num, char c);
int	ft_print_ptr(unsigned long long ptr);
int	ft_printchar(const char c);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
int	ft_printpercent(void);
int	ft_print_unsigned(unsigned int num);
#endif