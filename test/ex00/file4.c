#include <unistd.h>


void ft_print_alphabet_without_qe(void)
{
    char x = 'a';
    while (x <= 'z')
    {
        if(x != 'e' && x != 'q')

            write(1, &x, 1);
            x++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_alphabet_without_qe();
    return (0);
}