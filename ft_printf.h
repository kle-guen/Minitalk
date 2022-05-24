/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:34:17 by kle-guen          #+#    #+#             */
/*   Updated: 2022/05/24 15:23:06 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_base(unsigned long long n, char *base);
int	ft_lennb(long long n);
int	ft_lennb_uns(unsigned int n);
int	ft_putnbr_uns(unsigned int n);
int	ft_strlen(const char *s);
int	ft_put_adress(void *ptr);

#endif
