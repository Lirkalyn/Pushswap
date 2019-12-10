/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** trash-desu
*/

int fusion_start(int argc, char **l_a, char **l_b, int pos)
{
    int i;
    int neg_pos = -5;
    _Bool neg_find;

    //neg_find = found_neg(argc, l_a);
    //neg_pos = first_neg_pos(argc, l_a, neg_find, pos);
    if ((neg_pos >= ((argc - 1) / 2)) && (neg_find == 1))
        for (i = neg_pos; i < (argc - 1); i++)
            rra(l_a, 0);
    else if ((neg_pos <= ((argc - 1) / 2)) && (neg_find == 1))
        if (neg_pos == 1)
            sa(l_a, 0);
        else
            for (i = 0; i < neg_pos; i++)
                ra(l_a, 0);
    if (neg_pos == -1)
        fusion_start(argc, l_a, l_b, (pos + 1));
    else if (neg_pos >= 0) {
        pb(l_a, l_b);
        fusion_start(argc, l_a, l_b, pos);
    }
    else
        return 0;
}