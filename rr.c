/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** rr-desu
*/

#include "my.h"

int ra(char **l_a, int opt) //test ok
{
    int i;
    char *tmp;

    tmp = l_a[0];
    for (i = 0; l_a[i] != 0; i++)
        l_a[i] = l_a[(i + 1)];
    l_a[(i - 1)] = tmp;
    if (opt == 0)
        my_putstr("ra ");
}

int rb(char **l_b, int opt) //test ok
{
    int i;
    char *tmp;

    tmp = l_b[0];
    for (i = 0; l_b[i] != 0; i++)
        l_b[i] = l_b[(i + 1)];
    l_b[(i - 1)] = tmp;
    if (opt == 0)
        my_putstr("rb ");
}

int rr(char **l_a, char **l_b) //test ok
{
    ra(l_a, 1);
    rb(l_b, 1);
    my_putstr("rr ");
}