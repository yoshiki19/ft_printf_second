#include "ft_printf.h"


int ft_ilen(int c)
{
    int count;

    count = 0;
    if (!c)
        return (1);
	if (c < 0)
		count = 1;
    while (c != 0)
    {
        c = c / 10;
        count++;
    }
    return (count);
}

void	ft_putnbr_ex(int n)
{
	if (n > -2147483648 && n < 0)
	{
		n = n * -1;
		ft_putchar_origin('-');
		ft_putnbr_ex(n);
	}
	else if (n == -2147483648)
	{
		// printf("aiu");fflush(stdout);
		write(1, "-2147483648", 12); 
	}
	else if (n >= 10)
	{
		ft_putnbr_ex(n / 10);
		ft_putnbr_ex(n % 10);
	}
	else if (n >= 0 && n < 10)
	{
		ft_putchar_origin(n + '0');
	}
}

int ft_putnbr(int c)
{
    int count;

	// count = 0;
	// if (c < 0)
	// 	count = 1;
    count = ft_ilen(c);
    ft_putnbr_ex(c);
    return (count);
}


// int main(void)
// {
//     int i = -1;

//     ft_putnbr(i);
// }