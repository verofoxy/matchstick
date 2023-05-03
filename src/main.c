/*
** EPITECH PROJECT, 2020
** ujk
** File description:
** fghjkl
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/bootstrap.h"

int main(int ac, char **av)
{
    board board;
    ia ia;
    int winner;

    if (ac != 3)
        return 84;
    if (my_getnbr(av[1]) > 1 && my_getnbr(av[1]) < 100)
        winner = play_gdekame(&board, av, &ia);
    winner = play_game(&board, av, &ia);
    return winner;
}


//eronia
//vishal
