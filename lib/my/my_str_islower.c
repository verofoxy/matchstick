/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** dfghjk
*/

int my_str_islower(char const *str)
{
    int c = 0;
    while (str[c] != '\0') {
        if (c < 'a' ||  c > 'z')
            return 0;
        c++;
    }
    return (1);
}
