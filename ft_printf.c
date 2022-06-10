
#include "ft_printf.h"

int ft_printf_convert(va_list ap, const char str)
{
    int pf_len;

    pf_len = 0;
    if (str == 'c')
        pf_len += ft_putchar(va_arg(ap, int));
    if (str == 's')
        pf_len += ft_putstr(va_arg(ap, char *));
    if (str == 'p')
        pf_len += ft_putptr(va_arg(ap, unsigned long long));
    if (str == 'd' || str == 'i')
        pf_len += ft_putnbr(va_arg(ap, int));
    if (str == 'u')
        pf_len += ft_putnbr_u(va_arg(ap, unsigned int));
    // if (str == 'x' || str == 'X')
    //     pf_len += ft_putnbr_hex(va_arg(ap, unsigned int));
    // if (str == '%')
    //     pf_len += ft_putchar_percent(va_arg(ap, int));
    return (pf_len);
}

int ft_printf(const char *str, ...)
{
    va_list ap;
    int pf_len;
    int i;

    i = 0;
    pf_len = 0;
    va_start(ap, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            pf_len += ft_printf_convert(ap, str[i + 1]);
            i++;
        }
        else
            pf_len += ft_putchar(str[i]);
        i++;
    }
    va_end(ap);
    return (pf_len);
}

// int main(void)
// {
//     char s[10] = "aiueo";
//     char c = 'a';
//     int i = 0;

//     i = ft_printf("%c%d%s", c, 11, s);
//     ft_printf("%d", i);
// }