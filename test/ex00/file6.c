#include <unistd.h>


void ft_print_mixed_alphabet(void)
{
    char x  = 'a';
    char c  = 'B';
    while(c <= 'Z')
    {

        write(1, &x, 1);
        write(1, &c, 1);

        if(c < 'Z')
        {
            write(1, " ", 1);
        }

        x += 2;
        c += 2;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_mixed_alphabet();
    return (0);
}