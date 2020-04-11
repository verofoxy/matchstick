/*
** EPITECH PROJECT, 2020
** dfgh
** File description:
** dfgh
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/bootstrap.h"

char **malloc_table_chartwo(int size_line, int size_cols)
{
    int i = 0;
    char **line = malloc(sizeof(char *) * (size_line + 2));

    if (line == NULL)
        return NULL;
    while (i != (size_line + 2)) {
        line [i] = malloc(sizeof(char) * (size_cols));
        if (line == NULL)
            return NULL;
        i++;
    }
    return line;
}

char **put_stars(int size_line)
{
    int line = 0;
    int cols = 0;
    int size_cols = size_line * 2 + 1;
    char **str;

    size_line += 2;
    str = malloc_table_chartwo(size_line, size_cols);
    while (line != size_line) {
        cols = 0;
        while (cols != size_cols) {
            str[line][cols] = '*';
            cols++;
        }
        line++;
    }
    return str;
}

char **put_matchsticks(int size_line)
{
    int line = 1;
    int cols = 1;
    int l_l = 1;
    int size_cols = size_line * 2 - 1;
    int start_sticks = size_line;
    char **sticks = put_stars(size_line);

    while (line != size_line + 1) {
        cols = 1;
        start_sticks--;
        while (cols != l_l + 1) {
            size_cols = size_cols / 2 + 1;
            sticks[line][cols + start_sticks] = '|';
            cols++;
        }
        line++;
        l_l += 2;
    }
    return sticks;
}

char **put_space_left(int size_line)
{
    int line = 1;
    int cols = 1;
    int space = 1;
    int size_cols = size_line * 2 - 1;
    int nb_space = size_cols / 2;
    char **sticks = put_matchsticks(size_line);

    while (line != size_line + 1) {
        cols = 1;
        space = nb_space;
        while (space != 0) {
            sticks[line][cols] = ' ';
            space--;
            cols++;
        }
        nb_space--;
        line++;
    }
    return sticks;
}

char **put_space_right(int size_line)
{
    int space = 1;
    int size_cols = size_line * 2 - 1;
    int nb_space = size_cols / 2;
    int m = 2, line = 1;
    int cols = nb_space + 1;
    char **sticks = put_space_left(size_line);

    while (line != size_line + 1) {
        cols = nb_space  + m;
        space = nb_space;
        while (space != 0) {
            sticks[line][cols] = ' ';
            space--;
            cols++;
        }
        m += 2;
        nb_space--;
        line++;
    }
    return sticks;
}
