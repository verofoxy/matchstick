/*
** EPITECH PROJECT, 2019
** fonction
** File description:
** display the arguments follwed by '\n'
*/

#include <stdarg.h>
#include <stdio.h>

int my_strlen(char const *str);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_printf_d( char *s, ...)
{
    int i = 0, idx = my_strlen(s);
    int arg;
    va_list ap;
    va_start(ap, s);
    while (i != idx) {
        if (s[i] == '%' && s[i+1] == 'd') {
            arg = va_arg(ap, int);
            my_put_nbr(arg);
            i++;
        } else {
            my_putchar(s[i]);
        }
        i++;
    }
    va_end(ap);
    return (0);
}
