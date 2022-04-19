/*
** EPITECH PROJECT, 2020
** main file.
** File description:
** Main file of bootstrap PushSwap.
*/

#include "../includes/pushswap.h"

int main(int ac, char **argv)
{
    if (ac < 2)
        return (84);
    else if (ac < 3) {
        my_putchar('\n');
        return (0);
    }
    list_blocks_s *list = init_blocks();
    list_blocks_s *list2 = init_blocks();
    insert_numbers_from_str(argv + 1, ac - 1, list);
    if (verif_order(list) == 0) {
        my_putchar('\n');
        return (0);
    }
    sort_chain(ac - 1, list, list2);
    my_putchar('\n');
    return (0);
}
