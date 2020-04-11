/*
** EPITECH PROJECT, 2020
** fghjkl
** File description:
** fghjkl
*/

#include <stdarg.h>
#include <stdio.h>

int my_strlen(char const *str);

void my_putchar(char c);

int my_putstr(char const *str);

int my_printf_s( char *s, ...)
{
    int i = 0, idx = my_strlen(s);
    char *ch2;
    va_list ap;
    va_start(ap, s);
    while (i != idx) {
        if (s[i] == '%' && s[i + 1] == 's') {
            ch2 = va_arg(ap, char *);
            my_putstr(ch2);
            i++;
        } else {
            my_putchar(s[i]);
        }
        i++;
    }
    va_end(ap);
    return (0);
}
