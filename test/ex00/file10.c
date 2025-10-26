#include <unistd.h>


void ft_print_reverse_numbers(void)
{
    int x = '9';
    while(x >= '0')
    {
        write(1, &x, 1);
        if(x > '0')
        write(1, " ", 1);
    x--;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_reverse_numbers();
    return (0);
}