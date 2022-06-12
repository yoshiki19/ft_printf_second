#include "ft_printf.h"

int ft_hexlen(unsigned long long c)
{
    int count;

    count = 0;
    if (!c)
        return (1);
    while (c != 0)
    {
        c = c / 16;
        count++;
    }
    return (count);
}


void ft_putnbr_tohex_sub(unsigned int n)
{
    // if (n > 4294967295)
    //     return ;
	if (n < 0)
	{
		n *= -1;
		ft_putchar_origin('-');
		ft_putnbr_tohex_sub(n);
	}
	else if (n >= 16)
	{
		ft_putnbr_tohex_sub(n / 16);
		ft_putnbr_tohex_sub(n % 16);
	}
	else if (n >= 0 && n < 16)
	{
        if (n >= 10)
            ft_putchar_origin((n - 10) + 'a');
        else
		    ft_putchar_origin(n + '0');
	}
}

int ft_putnbr_tohex(unsigned int n)
{
    int count;

    count = ft_hexlen(n);
    ft_putnbr_tohex_sub(n);
    return (count);
}


// int main(void)
// {
//     unsigned long long i = 734719;
//     int n;

//     n = 0;
//     n += ft_putnbr_tohex(i);
//     printf("%d", n);
// }