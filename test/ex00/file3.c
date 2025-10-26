#include <unistd.h>

void ft_print_reverse_uppercase(void)
{
    char x = 'Z';
    while(x >= 'A')
    {
        write(1, &x, 1);
        x--;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_reverse_uppercase();
    return (0);
}