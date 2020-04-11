/*
** EPITECH PROJECT, 2020
** dfgh
** File description:
** cvbn
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/bootstrap.h"

int win(int player)
{
    if (player == 0) {
        my_printf_s("I lost... snif... but I'll get you next time!!\n");
        return 1;
    }
    else
        my_printf_s("You lost, too bad...\n");
    return 2;
}

ia *print_line_ia(ia *ia)
{
    my_putchar('\n');
    my_printf_s("AI's turn...\n");
    my_printf_s("AI removed");
    my_printf_d(" %d ", ia->matches);
    my_printf_s("match(es) from line ");
    my_printf_d("%d\n", ia->line);
    return ia;
}

int count_sticks_ia(char **sticks, int line, int size_line)
{
    int cols = 1;
    int count = 0;
    int size_cols = size_line * 2 - 1;

    cols = 1;
    while (cols <= size_cols) {
        if (sticks[line][cols] == '|')
            count += 1;
        cols++;
    }
    return count;
}

char **ia_turn(char **sticks, int size_line, ia *ia)
{
    ia->line = size_line;
    int max, max_two = (ia->line - 1) * 2 + 1, cols = max_two;
    int total_sticks = nbr_sticks_board(size_line, sticks);
    int nbr_spaces, rmv_ia = 1;

    ia->matches = 1;
    for (; (max = count_sticks_ia(sticks, ia->line, size_line)) == 0
    && total_sticks != 0; ia->line--);
    nbr_spaces = (cols - max) / 2;
    while (rmv_ia == 1) {
        if (sticks[ia->line][nbr_spaces + max] == '|') {
            sticks[ia->line][nbr_spaces + max] = ' ';
            rmv_ia--;
        }
        max--;
    }
    print_line_ia(ia);
    return sticks;
}
