/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** the first element become the last
*/

#include "my.h"

void ra_func(list_a *current)
{
    int temp = current->value;

    for(; current->next != NULL; current = current->next)
        current->value = current->next->value;
    current->value = temp;
}

void rra_func(list_a *current)
{
    int temp = 0;

    for(; current->next != NULL; current = current->next);
    temp = current->value;
    for(; current->prev != NULL; current = current->prev)
        current->value = current->prev->value;
    current->value = temp;
}

void rb_func(list_b *current_b)
{
    int temp = current_b->value;

    for(; current_b->next != NULL; current_b = current_b->next)
        current_b->value = current_b->next->value;
    current_b->value = temp;
}

void rrb_func(list_b *current_b)
{
    int temp = 0;

    for(; current_b->next != NULL; current_b = current_b->next);
    temp = current_b->value;
    for(; current_b->prev != NULL; current_b = current_b->prev)
        current_b->value = current_b->prev->value;
    current_b->value = temp;
}

void rr(list_a *current, list_b *current_b, int nb)
{
    if(nb == 1){
        ra_func(current);
        rb_func(current_b);
        write(1, "rr", 2);
    } else {
        rra_func(current);
        write(1, "rrr", 3);
    }
}