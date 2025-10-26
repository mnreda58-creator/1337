#include <unistd.h>


void ft_print_stars_for_vowels(void)
{
    char x = 'a';
    while(x <= 'z')
    {
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')
            write(1, "*", 1);
        else
            write(1, &x, 1);
    x++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_stars_for_vowels();
    return (0);
}