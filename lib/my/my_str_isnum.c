/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** dfghjkl
*/

int is_num(char const c);

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (is_num(str[i]) == 0)
            return 0;
        i++;
    }
    return 1;
}
