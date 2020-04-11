/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** fghjkl
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
    return (str);
}
