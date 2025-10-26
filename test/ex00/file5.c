#include <unistd.h>


void ft_print_digits_sep(void)
{
    int x = 48;
    while (x <= 57)
    {
        write(1, &x, 1);
        if(x < 57)
        write(1, ", ", 2);
        x++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_digits_sep();
    return (0);
}