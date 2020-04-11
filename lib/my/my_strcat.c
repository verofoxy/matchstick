/*
** EPITECH PROJECT, 2019
** fghjrtyhj
** File description:
** ftgyhjk
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int j = 0;
    int length_src = my_strlen(src);
    int length_dest = my_strlen(dest);
    int i = length_dest;

    while (i <= (length_dest + length_src)) {
        dest[i] = src[j];
        i++;
        j++;
    }
    return (dest);
}
