/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** fghjkl
*/

int my_str_isupper(char const *str)
{
    if (str[0] != 0) {
        if (64 < str[0] && str[0] < 91) {
            return my_str_isupper(str + 1);
        } else {
            return (0);
        }
    } else {
        return (1);
    }
}
