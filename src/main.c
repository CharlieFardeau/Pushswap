/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** sorting algo
*/

#include "../include/my.h"

list_b *create_b(list_b *head)
{
    head->next = NULL;
    head->prev = NULL;
    head->value = 0;
    return head;
}

list_a *create_a(int nb, char *const *av, list_a *head)
{
    list_a *current = head;

    head->value = my_atoi(av[1]);
    head->next = NULL;
    head->prev = NULL;
    for (int i = 2; i != nb + 1; i++){
        current->next = malloc(sizeof(list_a));
        current->next->prev = current;
        current = current->next;
        current->value = my_atoi(av[i]);
        current->next = NULL;
    }
    return head;
}

void start(int nb, char **av)
{
    list_a *head = malloc(sizeof(list_a));
    list_a *current = create_a(nb, av, head);
    list_b *head_b = malloc(sizeof(list_b));
    list_b *current_b = create_b(head_b);
    int x = 0;

    if (sort_condition(current, current_b, nb) == 1)
        my_printf("\n");
    while (!sort_condition(current, current_b, nb)) {
        yes(&current, &current_b, &x);
        if (sort_condition(current, current_b, nb) == 1)
            write(1, "pa", 2);
        else
            write(1, "pa ", 3);
    }
}

int error_gestion(char **av)
{
    for (int i = 1; av[i] != NULL; i++)
        if (is_int(av[i]) == 0)
            return 84;
    return 0;
}

int main(int ac, char **av)
{
    if (ac < 2){
        return 84;
    }
    if (error_gestion(av) == 84)
        return 84;
    if (ac == 2) {
        my_printf("\n");
        return 0;
    }
    start(--ac, av);
}