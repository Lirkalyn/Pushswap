/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pp-desu
*/

#include <stdlib.h>
#include "my.h"

int pa(char **l_b, char **l_a)
{
    int i;
    int len = list_lenght(l_a);

    if (l_b[0][0] == 'a')
        return 1;
    if (l_a[0][0] == 'a') {
        l_a[0] = l_b[0];
        l_b[0] = "a";
    }
    else {
        for (i = len; i > 0; i--)
            if (l_a[(i - 1)] != "a")
                l_a[i] = l_a[(i - 1)];
        l_a[0] = l_b[0];
        l_b[0] = "a";
        my_putstr("pa ");
        return 0;
    }
    my_putstr("pa ");
    return 0;
}

int pb(char **l_a, char **l_b)
{
    int i;
    int len = list_lenght(l_b);

    if (l_a[0][0] == 'a')
        return 1;
    if (l_b[0][0] == 'a') {
        l_b[0] = l_a[0];
        l_a[0] = "a";
    }
    else {
        for (i = len; i > 0; i--)
            if (l_b[(i - 1)] != "a")
                l_b[i] = l_b[(i - 1)];
        l_b[0] = l_a[0];
        l_a[0] = "a";
        my_putstr("pb ");
        return 0;
    }
    my_putstr("pb ");
    return 0;
}