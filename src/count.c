/*
** EPITECH PROJECT, 2020
** fghj
** File description:
** ghjk
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/bootstrap.h"

int count_sticks(board *board, char **sticks, int size_line)
{
    int cols = 1;
    int line = 1;
    int count = 0;
    int size_cols = size_line * 2 - 1;

    while (line != board->nbr_line) {
        line++;
    }
    cols = 1;
    while (cols <= size_cols) {
        if (sticks[line][cols] == '|')
            count += 1;
        cols++;
    }
    return count;
}

int count_spaces(board* board, char **sticks, int size_line)
{
    int cols = 1;
    int line = 1;
    int count = 0;
    int size_cols = size_line * 2 - 1;

    while (line != board->nbr_line) {
        line++;
    }
    cols = 1;
    while (cols != size_cols) {
        if (sticks[line][cols] == ' ')
            count += 1;
        cols++;
    }
    return count;
}

int nbr_sticks_board(int size_line, char **sticks)
{
    int line = 1;
    int cols = 1;
    int l_l = 1;
    int size_cols = size_line * 2 - 1;
    int start_sticks = size_line;
    int matches = 0;

    while (line != size_line + 1) {
        cols = 1;
        start_sticks--;
        while (cols != l_l + 1) {
            size_cols = size_cols / 2 + 1;
            if (sticks[line][cols + start_sticks] == '|')
                matches++;
            cols++;
        }
        line++;
        l_l += 2;
    }
    return matches;
}
