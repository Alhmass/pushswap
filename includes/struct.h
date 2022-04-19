/*
** EPITECH PROJECT, 2020
** struct.h.
** File description:
** Struct file header pushswap.
*/

#include <stddef.h>

typedef struct chain
{
    int nb;
    struct chain *next;
} chain_s;

typedef struct list_blocks
{
    chain_s *block;
} list_blocks_s;