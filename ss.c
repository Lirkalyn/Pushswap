/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** ss-desu
*/

#include <stdlib.h>
#include "my.h"

int sa(char *l_a[], int opt)
{
    char *tmp;

    if (l_a[0] != NULL && l_a[1] != NULL) {
        tmp = l_a[0];
        l_a[0] = l_a[1];
        l_a[1] = tmp;
        if (opt == 0)
            my_putstr("sa ");
        return 0;
    }
    else
        return 1;
}

int sb(char *l_b[], int opt)
{
    char *tmp;

    if (l_b[0] != NULL && l_b[1] != NULL) {
        tmp = l_b[0];
        l_b[0] = l_b[1];
        l_b[1] = tmp;
        if (opt == 0)
            my_putstr("sb ");
        return 0;
    }
    else
        return 1;
}

int sc(char *l_a[], char *l_b[])
{
    sa(l_a, 1);
    sb(l_b, 1);
    my_putstr("sc ");
}