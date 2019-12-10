/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** big-desu
*/

int big_neg_finder(int argc, char **l_a, char **l_b, int pos)
{
    int i;
    int j;
    int tmp = (l_a[pos][1] - '0');
    int neg_pos = pos;

    //printf("neg-- = %d et tmp = %d\n", pos, tmp);
    for (i = 1; l_a[pos][i] != '\0'; i++) {
        for (j = (pos + 1); j < (argc - 1); j++)
            if ((tmp < (l_a[j][i] - '0')) && (l_a[j][0] == '-')) {
                //printf("tmp = %d et replace = %d\n", tmp, (l_a[j][i] - '0'));
                //printf("pos5 = %d\n", neg_pos);
                tmp = (l_a[j][i] - '0');
                neg_pos = j;
            }
        if (tmp != 0)
            return neg_pos;
        else
            tmp = (l_a[pos][(i + 1)] - '0');
    }
    return neg_pos;
    //printf("tmp = %d\n", tmp);
}