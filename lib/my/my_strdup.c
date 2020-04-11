/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** klddpm
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dest;

    dest = malloc(sizeof(char)*(my_strlen(src) + 1));
    my_strcpy(dest, src);
    return (dest);
}
