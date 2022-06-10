#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_putchar(int c);
int ft_putstr(char *str);
int ft_printf_convert(va_list ap, const char str);
int ft_printf(const char *str, ...);
void    ft_putchar_origin(char n);
int ft_ilen_ex(unsigned int c);
int ft_ilen(int c);
void    ft_putnbr_uex(unsigned int n);
int ft_putnbr_u(unsigned int c);
void	ft_putnbr_ex(int n);
int ft_putnbr(int c);
int ft_ptrlen(unsigned long long c);
void ft_putptr_ex(unsigned long long n);
int ft_putptr(unsigned long long c);

#endif