/*
** EPITECH PROJECT, 2020
** pushswapH.
** File description:
** Pushswap header file.
*/

#include "struct.h"

list_blocks_s *init_blocks(void);
char *recup_file_content(char *filepath);
int open_file(char *filepath);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_putstr(char const *str);
void print_blockchain(list_blocks_s *list);
void insert_numbers_from_str(char **nb, int number_args, list_blocks_s *list);
void swap_element(list_blocks_s *list);
void move_list_element(list_blocks_s *la, list_blocks_s *lb);
void sort_chain(int number_of_args, list_blocks_s *l_1, list_blocks_s *l_2);
int my_put_nbr(int nb);
void my_putchar(char c);
void sort_list2(list_blocks_s *l_2);
int verif_order(list_blocks_s *l_1);
void return_to_first_list(list_blocks_s *l_1, list_blocks_s *l_2);