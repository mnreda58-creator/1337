#include <unistd.h>


void ft_print_even_digits(void)
{
    int x = '0';
    while(x <= '9')
    {
        write(1, &x, 1);
        x += 2;
        if(x <= '9')
        write(1, " ", 1);
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_even_digits();
    return (0);
}