/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** rrr-desu
*/

#include "my.h"

int list_lenght(char **list)
{
    int i;

    for (i = 0; list[i] != 0; i++);
    return i;
}

int rra(char **l_a, int opt)
{
    int i;
    int len;
    char *tmp;

    len = list_lenght(l_a);
    tmp = l_a[(len - 1)];
    for (i = (len - 1); i >= 0; i--)
        if (i != 0)
            l_a[i] = l_a[(i - 1)];
        else
            l_a[0] = tmp;
    if (opt == 0)
        my_putstr("rra ");
}

int rrb(char **l_b, int opt)
{
    int i;
    int len;
    char *tmp;

    len = list_lenght(l_b);
    tmp = l_b[(len - 1)];
    for (i = (len - 1); i >= 0; i--)
        if (i != 0)
            l_b[i] = l_b[(i - 1)];
        else
            l_b[0] = tmp;
    if (opt == 0)
        my_putstr("rrb ");
}

int rrr(char **l_a, char **l_b)
{
    rra(l_a, 1);
    rrb(l_b, 1);
    my_putstr("rrr ");
}