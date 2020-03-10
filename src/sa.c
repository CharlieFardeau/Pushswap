/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** swap the first 2 elements of the list
*/

#include "my.h"

void swap_elem(list_a *current)
{
    int temp = current->value;

    current->value = current->next->value;
    current->next->value = temp;
}

void swap_elem_b(list_b *current_b)
{
    int temp = current_b->value;

    current_b->value = current_b->next->value;
    current_b->next->value = temp;
}