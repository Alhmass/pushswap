/*
** EPITECH PROJECT, 2020
** sort_chain.
** File description:
** This program sort the chain.
*/

#include "../includes/pushswap.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void sort_chain(int number_of_args, list_blocks_s *l_1, list_blocks_s *l_2)
{
    int escape = 0;
    while (verif_order(l_1) != 0) {
        if (escape == 1) my_putchar(' ');
        for (int k = 0; k < number_of_args - 1; k++) {
            if (l_1->block->nb > l_1->block->next->nb) {
                swap_element(l_1);
                my_putstr("sa ");
            }
            else if (number_of_args > 2 && k <= number_of_args - 2) {
                move_list_element(l_1, l_2);
                my_putstr("pb ");
            }
            if (l_2->block != NULL && number_of_args >= 2)
                sort_list2(l_2);
        }
        return_to_first_list(l_1, l_2);
        escape = 1;
    }
}

void return_to_first_list(list_blocks_s *l_1, list_blocks_s *l_2)
{
    while (l_2->block != NULL) {
        if (l_2->block->next != NULL) {
            move_list_element(l_2, l_1);
            my_putstr("pa ");
        } else {
            move_list_element(l_2, l_1);
            my_putstr("pa");
        }
    }
}

void sort_list2(list_blocks_s *l_2)
{
    if (l_2->block->next != NULL && l_2->block->nb < l_2->block->next->nb) {
        swap_element(l_2);
        my_putstr("sb ");
    }
}
