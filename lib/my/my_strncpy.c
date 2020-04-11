/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** dfghj
*/

int my_putchar(char c);

void my_putstr(char *str);

int my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return i;
}

