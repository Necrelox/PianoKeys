/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "rpg.h"

void help_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("./game_rpg\n");
    my_putstr("\n");
    my_putstr("\n");
    my_putstr("jh");
}

int main (int ac, char **av)
{
    srand(getpid());
    if (ac >= 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            help_usage();
            return (0);
        }
        else
            return (84);
    }
    if (ac == 1) {
        init_game();
        return (0);
    }
    return (84);
}
