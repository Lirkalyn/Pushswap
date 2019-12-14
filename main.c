/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** main-desu
*/

#include <stdlib.h>
#include "my.h"

#include <stdio.h>

void sort_start(int argc, char **l_a, char **l_b)
{
    int i;
    int neg_find = 0;
    _Bool ok = 0;

    while (neg_find == 0) {
        ok = 0;
        for (i = 0; i < (argc - 1); i++)
            if (l_a[i][0] == '-') {
                ok = moover(argc, l_a, l_b, big_neg_finder(argc, l_a, l_b, i));
            }
        neg_find = (ok == 1) ? 0 : 1;
    }
    while (neg_find == 1) {
        ok = 0;
        for (i = 0; i < (argc - 1); i++)
            if (l_a[i][0] == '0') {
                ok = moover(argc, l_a, l_b, big_posi_finder(argc, l_a, l_b, i));
            }
        neg_find = (ok == 1) ? 1 : 2;
    }
}

int longer(int argc, char **argv)
{
    int i;
    int j;
    int lenght = 0;
    int rsl = 0;

    for (i = 1; i < argc; i++) {
        for (j = 0; argv[i][j] != '\0'; j++)
            lenght += 1;
        if (lenght >= rsl)
            rsl = lenght;
        lenght = 0;
    }
    return (rsl + 1);
}

void put_in_place(int argc, char **argv, char **l_a, char **l_b)
{
    int i;
    int lenght = longer(argc, argv);
    int len;
    int pos = 0;

    for (i = 1; i < argc; i++) {
        l_b[(i - 1)] = "a\0";
        l_a[(i - 1)] = (char *)malloc((lenght + 1) * sizeof(char));
        l_a[(i - 1)][lenght] = '\0';
        for (int j = 0; j < lenght; j++)
            l_a[(i - 1)][j] = '0';
        if (argv[i][0] == '-')
            l_a[(i - 1)][0] = '-';
        for (len = 0; argv[i][len] != '\0'; len++);
        for (int j = lenght - len, pos = 0; l_a[(i - 1)][j] != '\0'; j++, pos++)
            if (argv[i][0] == '-')
                l_a[(i - 1)][(j + 1)] = argv[i][(pos + 1)];
            else
                l_a[(i - 1)][j] = argv[i][pos];
    }
}

int main(int argc, char **argv)
{
    int i;
    int check = 0;
    char **l_a;
    char **l_b;

    l_a = (char **)malloc(argc * sizeof(char *));
    l_b = (char **)malloc(argc * sizeof(char *));
    l_a[(argc - 1)] = 0;
    l_b[(argc - 1)] = 0;
    put_in_place(argc, argv, l_a, l_b);
    for (i = 0; i < (argc - 2); check += n_checker(l_a[i], l_a[(i + 1)]), i++);
    if ((argc <= 2) || (check == (argc - 2)))
        return 0;
    sort_start(argc, l_a, l_b);
    for (i = 0; l_b[0][0] == '-'; i++, pa(l_b, l_a), rr(l_a, l_b));
    for (;i-- >= 0; rrb(l_b, 0));
    for (; l_b[0][0] == '0'; pa(l_b, l_a), ra(l_a, 0), rrb(l_b, 0));
    rrb(l_b, 2);
}