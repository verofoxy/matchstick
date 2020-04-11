/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghjk
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/bootstrap.h"

char **remove_sticks(board* board, char **sticks, int size_line)
{
    int max = count_sticks(board, sticks, size_line);
    int line = board->nbr_line;
    int cols = max;
    int size_cols = size_line * 2 - 1;
    int nbr_spaces;
    int max_two  = (line - 1) * 2 + 1;

    nbr_spaces = (size_cols - max_two) / 2;
    while (max != cols - board->nbr_matches) {
        if (sticks[line][nbr_spaces + max] == '|')
            sticks[line][nbr_spaces + max] = ' ';
        max--;
    }
    return sticks;
}
