/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** big-desu
*/

#include "my.h"

int n_checker(char *origin, char *replace)
{
    int ori = 0;
    int rep = 0;
    int lenght;
    int i;

    for (lenght = 0; origin[lenght] != '\0'; lenght++);
    for (i = 1; i < lenght; i++) {
        ori *= 10;
        rep *= 10;
        ori += (origin[i] - '0');
        rep += (replace[i] - '0');
    }
    if (origin[0] == '-')
        ori *= (-1);
    if (replace[0] == '-')
        rep *= (-1);
    if (ori < rep)
        return 1;
    else
        return 0;
}

int checker(char *origin, char *replace)
{
    int ori = 0;
    int rep = 0;
    int lenght;
    int i;

    for (lenght = 0; origin[lenght] != '\0'; lenght++);
    for (i = 1; i < lenght; i++) {
        ori *= 10;
        rep *= 10;
        ori += (origin[i] - '0');
        rep += (replace[i] - '0');
    }
    if (ori < rep)
        return 1;
    else
        return 0;
}

int big_neg_finder(int argc, char **l_a, char **l_b, int pos)
{
    int i;
    int j;
    int tmp = (l_a[pos][1] - '0');
    int neg_pos = pos;

    for (i = 1; l_a[pos][i] != '\0'; i++) {
        for (j = 0; j < (argc - 1); j++)
            if (l_a[j][0] == '-')
                if (checker(l_a[neg_pos], l_a[j])) {
                    tmp = (l_a[j][i] - '0');
                    neg_pos = j;
                }
    }
    return neg_pos;
}

int big_posi_finder(int argc, char **l_a, char **l_b, int pos)
{
    int i;
    int j;
    int tmp = (l_a[pos][1] - '0');
    int posi_pos = pos;

    for (i = 1; l_a[pos][i] != '\0'; i++) {
        for (j = 0; j < (argc - 1); j++)
            if (l_a[j][0] != 'a')
                if (checker(l_a[posi_pos], l_a[j])) {
                    tmp = (l_a[j][i] - '0');
                    posi_pos = j;
                }
    }
    return posi_pos;
}

int moover(int argc, char **l_a, char **l_b, int pos)
{
    int i;

    if (pos >= ((argc - 1) / 2))
        for (i = pos; i < (argc - 1); i++)
            rra(l_a, 0);
    else if (pos <= ((argc - 1) / 2))
        if (pos == 1)
            sa(l_a, 0);
        else
            for (i = 0; i < pos; i++)
                ra(l_a, 0);
    pb(l_a, l_b);
    rb(l_b, 0);
    return 1;
}