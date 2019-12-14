/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** display-desu
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}

void fake_moover(int argc, int pos)
{
    int i;

    if (pos >= (argc / 2))
        for (i = pos; i < argc; i++)
            my_putstr("rra ");
    else if (pos <= (argc / 2))
        for (i = 0; i < pos; i++)
            my_putstr("ra ");
}