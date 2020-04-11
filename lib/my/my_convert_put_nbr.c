/*
** EPITECH PROJECT, 2019
** hjkl
** File description:
** dfghjkl
*/

void my_putchar(char c);

int my_put_nbru(int nb)
{
    if (nb > 9) {
        my_put_nbru(nb / 10);
        my_put_nbru(nb % 10);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}

int my_put_nbr_binaire(int nb)
{
    if (nb > 2) {
        my_put_nbr_binaire(nb / 2);
        my_put_nbr_binaire(nb % 2);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}

int my_put_nbr_hexa_maj(int nb)
{
    if (nb > 16) {
        my_put_nbr_hexa_maj(nb / 16);
        my_put_nbr_hexa_maj(nb % 16);
    }
    else if (nb > 9) {
        my_putchar(nb + 48 + 7);
    }
    else {
        my_putchar(nb + 48);
    }
    return (0);
}

int my_put_nbr_hexa_min(int nb)
{
    if (nb > 16) {
        my_put_nbr_hexa_min(nb / 16);
        my_put_nbr_hexa_min(nb % 16);
    }
    else if (nb > 9) {
        my_putchar(nb + 48 + 39);
    }
    else {
        my_putchar(nb + 48);
    }
    return (0);
}

int my_put_nbr_octa(int nb)
{

    if (nb > 8) {
        my_put_nbr_octa(nb / 8);
        my_put_nbr_octa(nb % 8);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}
