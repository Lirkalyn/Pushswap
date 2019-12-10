/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pp-desu
*/

#include <stdlib.h>
#include "my.h"

/*static int list_lenght(char **list) //?
{
    int i;

    for (i = 0; list[i] != 0; i++);
    return i;
}*/

int pa(char **l_b, char **l_a) //test ok
{
    int i;
    int len;

    if (l_b[0][0] == 'a')
        return 1;
    if (l_a[0][0] == 'a') {
        l_a[0] = l_b[0];
        l_b[0] = "a";
    }
    else {
        len = list_lenght(l_a);
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

int pb(char **l_a, char **l_b) //test ok
{
    int i;
    int len;

    if (l_a[0][0] == 'a')
        return 1;
    if (l_b[0][0] == 'a') {
        l_b[0] = l_a[0];
        l_a[0] = "a";
    }
    else {
        len = list_lenght(l_b);
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