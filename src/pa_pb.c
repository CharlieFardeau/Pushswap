/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** take the first element of each string and put it in the other
*/

#include "my.h"

void pa_func(list_a **current, list_b *current_b, int *x)
{
    list_a *new_current = malloc(sizeof(list_a));

    new_current->prev = NULL;
    new_current->value = current_b->value;
    new_current->next = (*current);
    (*current) = new_current;
    (*current)->prev = new_current;
    (*x)--;
    if ((*x) == 0){
        current_b->value = 0;
    } else {
        for (; current_b->next->next != NULL; current_b = current_b->next){
            current_b->value = current_b->next->value;
        }
        current_b->value = current_b->next->value;
        current_b->next = NULL;
    }
}

void pb_func(list_a *current, list_b **current_b, int *x)
{
    list_b *new_current = malloc(sizeof(list_b));

    if ((*x) > 0){
        new_current->prev = NULL;
        new_current->value = current->value;
        new_current->next = (*current_b);
        (*current_b) = new_current;
        (*current_b)->prev = new_current;
    } else
        (*current_b)->value = current->value;
    for (; current->next->next != NULL; current = current->next){
        current->value = current->next->value;
    }
    current->value = current->next->value;
    current->next = NULL;
    (*x)++;
}