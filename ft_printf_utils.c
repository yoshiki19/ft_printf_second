#include "ft_printf.h"

int ft_putchar(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
    {
        i = write(1, "(null)", 6);
        return (i);
    }
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

void ft_putchar_origin(char n)
{
    write(1, &n, 1);
}

int ft_putchar_percent(void)
{
    write(1, "%", 1);
    return (1);
}
// int main(void)
// {
//     char str[10] = "aiueo";
//     int i = 0;

//     i = ft_putstr(str);
//     printf("  %d", i);
// }....................................................
