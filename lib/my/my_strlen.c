/*
** EPITECH PROJECT, 2019
** strlen
** File description:
** nb chara/line
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}