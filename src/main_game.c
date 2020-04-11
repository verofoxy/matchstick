/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** sdfghjk
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/bootstrap.h"

void ai_decision(char **sticks_play, int size_line, ia *ia)
{
    print_stars_sticks_spaces(sticks_play, size_line);
    sticks_play = ia_turn(sticks_play, size_line, ia);
    print_stars_sticks_spaces(sticks_play, size_line);
}

void player_decision(char **sticks_play, int size_line, board *board)
{
    print_line_player(board);
    sticks_play = remove_sticks(board, sticks_play, size_line);
}

char **begin_player(int size_line)
{
    char **sticks;
    sticks = put_space_right(size_line);
    print_stars_sticks_spaces(sticks, size_line);
    return sticks;
}

int play_game(board *board, char **av, ia *ia)
{
    char **sticks, **sticks_play;
    int nbr_sticks, p = 0;

    sticks = begin_player(my_getnbr(av[1]));
    if (get_nb_line_sticks(board, av) == NULL)
        return 0;
    print_line_player(board);
    sticks_play = remove_sticks(board, sticks, my_getnbr(av[1]));
    while (nbr_sticks != 0) {
        ai_decision(sticks_play, my_getnbr(av[1]), ia);
        nbr_sticks = nbr_sticks_board(my_getnbr(av[1]), sticks_play);
        if (nbr_sticks == 0)
            break;
        p = (p + 1) % 2;
        if (get_nb_line_sticks(board, av) == NULL)
            return 0;
        player_decision(sticks_play, my_getnbr(av[1]), board);
        p = (p + 1) % 2;
        nbr_sticks = nbr_sticks_board(my_getnbr(av[1]), sticks_play);
    }
    return win(p);
}
