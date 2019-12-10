/*
** EPITECH PROJECT, 2019
** my_pushswap
** File description:
** fusion-desu
*/

/*int found_neg(int argc, char **l_a)
{
    int i;
    _Bool neg_find = 0;

    for (i = 0; ((i < (argc - 1)) || neg_find == 1); i++) {
        //printf("%s\n", l_a[i]);
        if (l_a[i][0] == '-')
            neg_find = 1;
    }
    //printf("\n");
    return neg_find;
}

int first_neg_pos(int argc, char **l_a, _Bool neg_find, int pos)
{
    int i;

    if (neg_find == 1) {
        pos += 1;
        for (i = 0; i < (argc - 1); i++) {
            if (l_a[i][0] == '-' && (l_a[i][pos] >= '1' && l_a[i][pos] <= '9'))
                return i;
        }
    }
    /*else {
        for (i = 0; i < (argc - 1); i++)
            if (l_a[i][pos] >= '1' && l_a[i][pos] <= '9')
            return i;
    }///
    return -1;
}*/