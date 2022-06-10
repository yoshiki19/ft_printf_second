#include "ft_printf.h"


int ft_ilen_ex(unsigned int c)
{
    int count;

    count = 0;
    if (!c)
        return (1);
    while (c != 0)
    {
        c = c / 10;
        count++;
    }
    return (count);
}

void    ft_putnbr_uex(unsigned int n)
{
    if (n > 4294967295)
        return ;
	if (n >= 10)
	{
		ft_putnbr_uex(n / 10);
		ft_putnbr_uex(n % 10);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_origin(n + '0');
	}
}

int ft_putnbr_u(unsigned int c)
{
    int count;

    count = 0;
    count += ft_ilen(c);
    ft_putnbr_uex(c);
    return (count);
}


// int main(void)
// {
//     unsigned int n = 4294967295;
//     int i;

//     i = 0;
//     i += ft_putnbr_u(n);
//     printf("  %d", i);
// }