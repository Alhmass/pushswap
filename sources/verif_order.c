/*
** EPITECH PROJECT, 2020
** Verif_order.
** File description:
** This function verify the order of a number list.
*/

#include "../includes/pushswap.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int verif_order(list_blocks_s *l_1)
{
    list_blocks_s *copy_list = init_blocks();

    copy_list->block = l_1->block;
    while (copy_list->block->next != NULL) {
        if (copy_list->block->nb > copy_list->block->next->nb)
            return (1);
        copy_list->block = copy_list->block->next;
    }
    return (0);
}