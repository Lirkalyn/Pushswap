/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** big-desu
*/

#include "my.h"

int big_neg_finder(int argc, char **l_a, char **l_b, int pos)
{
    int i;
    int j;
    int tmp = (l_a[pos][1] - '0');
    int neg_pos = pos;

    for (i = 1; l_a[pos][i] != '\0'; i++) {
        for (j = 0; j < (argc - 1); j++)
            if ((tmp < (l_a[j][i] - '0')) && (l_a[j][0] == '-')) {
                tmp = (l_a[j][i] - '0');
                neg_pos = j;
            }
        if (tmp != 0)
            return neg_pos;
        else
            tmp = (l_a[pos][(i + 1)] - '0');
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
            if (tmp < (l_a[j][i] - '0') && (l_a[j][0] != 'a')) {
                tmp = (l_a[j][i] - '0');
                posi_pos = j;
            }
        if (tmp != 0)
            return posi_pos;
        else
            tmp = (l_a[pos][(i + 1)] - '0');
    }
    return posi_pos;
}

void mover(int argc, char **l_a, char **l_b, int pos)
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
}