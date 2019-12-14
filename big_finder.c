/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** big-desu
*/

#include <stdlib.h>
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

int *big_neg_finder(int argc, char **l_a, char **l_b, int pos)
{
    int i;
    int j;
    int *neg_pos = (int *)malloc(2 * sizeof(int));

    neg_pos[0] = pos;
    for (i = 1; l_a[pos][i] != '\0'; i++) {
        for (j = 0; j < (argc - 1); j++)
            if (l_a[j][0] == '-')
                if (checker(l_a[neg_pos[0]], l_a[j])) {
                    neg_pos[0] = j;
                }
    }
    neg_pos[1] = neg_pos[0];
    for (i = 0; i < neg_pos[0]; i++)
        if (l_a[i][0] == 'a')
            neg_pos[1] -= 1;
    neg_pos[1] = (neg_pos[1] == 0) ? -1 : neg_pos[1];
    return neg_pos;
}

int *big_posi_finder(int argc, char **l_a, char **l_b, int pos)
{
    int i;
    int j;
    int *posi_pos = (int *)malloc(2 * sizeof(int));

    posi_pos[0] = pos;
    for (i = 1; l_a[pos][i] != '\0'; i++) {
        for (j = 0; j < (argc - 1); j++)
            if (l_a[j][0] != 'a')
                if (checker(l_a[posi_pos[0]], l_a[j])) {
                    posi_pos[0] = j;
                }
    }
    posi_pos[1] = posi_pos[0];
    for (i = 0; i < posi_pos[0]; i++)
        if (l_a[i][0] == 'a')
            posi_pos[1] -= 1;
    posi_pos[1] = (posi_pos[1] == 0) ? -1 : posi_pos[1];
    return posi_pos;
}

int moover(int argc, char **l_a, char **l_b, int *pos)
{
    int i;
    int num_elements = 0;

    for (i = 0; i < (argc - 1); i++)
        num_elements += (l_a[i][0] == 'a') ? 0 : 1;
    fake_moover(num_elements, pos[1]);
    if (pos[0] >= ((argc - 1) / 2))
        for (i = pos[0]; i < (argc - 1); i++)
            rra(l_a, 1);
    else if (pos[0] <= ((argc - 1) / 2))
        if (pos[0] == 1 && pos[1] == 1)
            sa(l_a, 0);
        else if (pos[0] == 1)
            sa(l_a, 1);
        else
            for (i = 0; i < pos[0]; i++)
                ra(l_a, 1);
    pb(l_a, l_b);
    rb(l_b, 0);
    return 1;
}