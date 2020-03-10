/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** check if everything is ok
*/

#include "my.h"

int sort_condition(list_a *current, list_b *current_b, int nb)
{
    int i = 1;

    if (current_b->value == 0){
        for (; current->next != NULL; current = current->next, i++)
            if (current->value > current->next->value)
                return 0;
    }else
        return 0;
    if (i != nb)
        return 0;
    return 1;
}

void left(list_a **current, list_b **current_b, int *x)
{
    if ((*current_b)->value < (*current_b)->next->value){
        write(1, "sb ", 3);
        swap_elem_b(*current_b);
        write(1, "pa ", 3);
        pa_func(current, *current_b, x);
    } else{
        write(1, "pa ", 3);
        pa_func(current, *current_b, x);
    }
}

void right(list_a **current, list_b **current_b, int *x)
{
    if ((*current)->value > (*current)->next->value){
        write(1, "sa ", 3);
        swap_elem(*current);
        write(1, "pb ", 3);
        pb_func(*current, current_b, x);
    } else{
        write(1, "pb ", 3);
        pb_func(*current, current_b, x);
    }
}

void yes(list_a **current, list_b **current_b, int *x)
{
    for (; (*current)->next != NULL;){
        right(current, current_b, x);
    }
    for (; (*current_b)->next != NULL;){
        left(current, current_b, x);
    }
    pa_func(current, *current_b, x);
}