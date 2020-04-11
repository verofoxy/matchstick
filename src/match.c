/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** fghjkl
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/bootstrap.h"

int print_stars_sticks_spaces(char **str_la, int size)
{
    for (int nbr = 0; nbr != size + 2; nbr++)
        my_printf_s("%s\n", str_la[nbr]);
    return 0;
}

int get_line(board *board, char *str, char **av)
{
    int error_line = 0;

    if (my_str_isnum(str) == 0) {
        my_printf_s("Error: invalid input(positive number expected)");
        my_putchar('\n');
        error_line++;
    }
    else if (board->nbr_line > my_getnbr(av[1]) || board->nbr_line < 1) {
        my_printf_s("Error: this line is out\n");
        error_line++;
    }

    if (error_line == 0)
        return true;
    return false;
}

int get_matches(board *board, char *str, char **av)
{
    int error_matches = 0;

    if (board->nbr_matches == 0){
        my_printf_s("Error: you have to remove at least one match\n");
        error_matches++;
    }
    else if (my_str_isnum(str) == 0) {
        my_printf_s("Error: invalid input(positive number expected)");
        my_putchar('\n');
        error_matches++;
    }
    else if (my_getnbr(av[2]) < board->nbr_matches) {
        my_printf_s("Error: you cannot remove more than");
        my_printf_d(" %d ", my_getnbr(av[2]));
        my_printf_s("matches per turn\n");
        error_matches++;
    }
    if (error_matches == 0)
        return true;
    return false;
}

board*get_nb_line_sticks(board *board, char **av)
{
    char *str = NULL;
    size_t n = 0;
    int error;
    int done = false, error_line = false, error_matches = false;

    my_putchar('\n');
    my_printf_s("Your turn:\n");
    while (done == false) {
        while (error_line == false) {
            my_printf_s("Line: ");
            error = getline(&str, &n, stdin);
            if (error == -1)
                return NULL;
            board->nbr_line = my_getnbr(str);
            str[my_strlen(str) - 1] = '\0';
            error_line = get_line(board, str, av);
        }
        if (error_line == true) {
            my_printf_s("Matches: ");
            error = getline(&str, &n, stdin);
            if (error == -1)
                return NULL;
            board->nbr_matches = my_getnbr(str);
            str[my_strlen(str) - 1] = '\0';
            error_matches = get_matches(board, str, av);
        }
        if (error_matches == false || error_line == false) {
            done = false;
            error_matches = false;
            error_line = false;
        }
        else
            done = true;
    }
    return board;
}

board *print_line_player(board* board)
{
    my_printf_s("Player removed ");
    my_printf_d("%d ", board->nbr_matches);
    my_printf_s("match(es) from line ");
    my_printf_d("%d\n", board->nbr_line);
    return board;
}
