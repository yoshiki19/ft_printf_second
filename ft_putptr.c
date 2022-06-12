#include "ft_printf.h"


int ft_ptrlen(unsigned long long c)
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


void ft_putptr_ex(unsigned long long n)
{
    if (n < 0)
	{
		n *= -1;
		ft_putchar_origin('-');
		ft_putptr_ex(n);
	}
	else if (n >= 16)
	{
		ft_putptr_ex(n / 16);
		ft_putptr_ex(n % 16);
	}
	else if (n >= 0 && n < 16)
	{
        if (n >= 10)
            ft_putchar_origin((n - 10) + 'a');
        else
		    ft_putchar_origin(n + '0');
	}
}

int ft_putptr(unsigned long long c)
{
    int count;

    count = ft_ptrlen(c);
    count += write(1, "0x", 2);
    ft_putptr_ex(c);
    return (count);
}

// int main(void)
// {
//     unsigned long long i = 8798345;
//     int n;

//     n = 0;
//     n += ft_putptr(i);
//     printf("%d", n);
// }