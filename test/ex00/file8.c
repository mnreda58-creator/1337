#include <unistd.h>


void ft_print_vowels(void)
{
    char x[] = {'a', 'e', 'i', 'o', 'u'};
    int i = 0;
    while(i < 5)
    {
        write(1, &x[i], 1);
        if(i < 4)
            write(1, ", ", 2);
        i++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_vowels();
    return (0);
}