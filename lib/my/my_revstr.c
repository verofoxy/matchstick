/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** ghjk
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char tmp;
    int a;

    a = j;
    while (i <= a/2) {
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
        i++;
        j--;
    }
    return (str);
}
