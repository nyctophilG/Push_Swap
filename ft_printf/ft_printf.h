/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:21:06 by gosahin           #+#    #+#             */
/*   Updated: 2024/12/12 11:41:50 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *a, ...);
int	ft_printf_c(char c);
int	ft_base(unsigned long d, char s, char *base);
int	ft_printf_s(char *c);
int	ft_printf_d(int s);
int	ft_printf_u(unsigned int d);
int	ft_printf_p(unsigned long d);

#endif
