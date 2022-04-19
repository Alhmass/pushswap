/*
** EPITECH PROJECT, 2020
** pushswap.
** File description:
** This program make a tree of numbers.
*/

#include "../includes/pushswap.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

list_blocks_s *init_blocks(void)
{
    list_blocks_s *list = malloc(sizeof(list_blocks_s));

    if (list == NULL)
        return (NULL);
    list->block = NULL;
    return (list);
}

void insert_numbers_from_str(char **nb, int number_args, list_blocks_s *list)
{
    chain_s *nbr;
    chain_s **prev_next = &list->block;
    int i = 0;

    while (*prev_next != NULL)
    {
        prev_next = &(*prev_next)->next;
    }
    while (i < number_args) {
        nbr = malloc(sizeof(chain_s));
        nbr->nb = my_getnbr(nb[i]);
        *prev_next = nbr;
        nbr->next = NULL;
        prev_next = &nbr->next;
        i++;
    }
}

void swap_element(list_blocks_s *list) 
{
    chain_s *storage = list->block;

    list->block = list->block->next;
    storage->next = list->block->next;
    list->block->next = storage;
}

void move_list_element(list_blocks_s *la, list_blocks_s *lb)
{
    chain_s *detached_block = la->block;

    la->block = la->block->next;
    detached_block->next = lb->block;
    lb->block = detached_block;
}

void print_blockchain(list_blocks_s *list)
{
    chain_s *it = list->block;
    while (it != NULL) {
        my_put_nbr(it->nb);
        my_putchar(' ');
        it = it->next;
    }
}