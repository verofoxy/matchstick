/*
** EPITECH PROJECT, 2019
** my getnbr
** File description:
** rtghjk
*/

int is_num(char const c)
{
    if (c > 47 && c < 58)
        return (1);
    return (0);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 1;
    int result = 0;

    while (str[i] == '-') {
        neg *= (-1);
        i++;
    }
    while (str[i] != 0 && is_num(str[i])) {
        if (result * 10 + str[i] - '0' >= 0) {
            result = result * 10 + str[i] - '0';
        } else {
            return (0);
        }
        i++;
    }
    return (result * neg);
}
