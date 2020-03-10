/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** my.h
*/

#include <zconf.h>
#include <stdlib.h>

#ifndef CPE_PUSHSWAP_2019_MY_H
#define CPE_PUSHSWAP_2019_MY_H

typedef struct list_a
{
    int value;
    struct list_a *next;
    struct list_a *prev;
} list_a;

typedef struct list_b
{
    int value;
    struct list_b *next;
    struct list_b *prev;
} list_b;

int is_int(const char *str);
int my_printf(char *str, ...);
int my_atoi(const char *str);
void swap_elem(list_a *current);
void swap_elem_b(list_b *current_b);
int sort_condition(list_a *current, list_b *current_b, int nb);
void pa_func(list_a **current, list_b *current_b, int *x);
void pb_func(list_a *current, list_b **current_b, int *x);
void ra_func(list_a *current);
void rra_func(list_a *current);
void rb_func(list_b *current_b);
void rrb_func(list_b *current_b);
void rr(list_a *current, list_b *current_b, int nb);
void yes(list_a **current, list_b **current_b, int *x);

#endif //CPE_PUSHSWAP_2019_MY_H
