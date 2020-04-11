/*
** EPITECH PROJECT, 2019
** bootstrap
** File description:
** ihddfghjklfkjgrhjij
*/

#ifndef BOOTSTRAP_H
#define BOOTSTRAP_H

typedef struct board {
    int nbr_line;
    int nbr_matches;
} board;

typedef struct ia{
    int line;
    int matches;
}ia;

char **malloc_table_chartwo(int size_line, int size_cols);
char **put_stars(int size_line);
char **put_space_left(int size_line);
char **put_space_right(int size_line);
char **put_matchsticks(int size_line);
int print_stars_sticks_spaces(char **str_la, int size);
board *get_nb_line_sticks(board *board, char **av);
board *get_nb_line(board* board);
board *print_line_player(board *board);
int play_game(board* board, char **av, ia *ia);
int main(int ac, char **av);
char **remove_sticks(board *board, char **sticks, int size_line);
int count_sticks(board *board, char **sticks, int size_line);
int count_spaces(board *board, char **sticks, int size_line);
char **remove_sticks(board* board, char **sticks, int size_line);
int check_input(char **av, board *board);
int get_line(board *board, char *str, char **av);
int get_matches(board *board, char *str, char **av);
int nbr_sticks_board(int size_line, char **sticks);
ia*print_line_ia(ia* ia);
char **ia_turn(char **sticks, int size_line, ia* ia);
int count_sticks_ia(char **sticks, int line, int size_line);
int win (int player);
#endif
