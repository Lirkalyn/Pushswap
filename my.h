/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** h-desu
*/

#ifndef _MY_H_
#define _MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int sa(char *l_a[], int opt);
int sb(char *l_b[], int opt);
int sc(char *l_a[], char *l_b[]);
int pa(char **l_b, char **l_a);
int pb(char **l_a, char **l_b);
int ra(char **l_a, int opt);
int rb(char **l_b, int opt);
int rr(char **l_a, char **l_b);
int list_lenght(char **list);
int rra(char **l_a, int opt);
int rrb(char **l_b, int opt);
int rrr(char **l_a, char **l_b);
int *big_neg_finder(int argc, char **l_a, char **l_b, int pos);
int *big_posi_finder(int argc, char **l_a, char **l_b, int pos);
int moover(int argc, char **l_a, char **l_b, int *pos);
int n_checker(char *origin, char *replace);
void fake_moover(int argc, int pos);
int more(int check, int argc);

#endif
