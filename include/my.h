/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** include
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>


//lib
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_getnbr(char *str);
int verif_if_number(char *str);
char *my_strdup(char *str);
int	my_strcmp(char *s1, char *s2);
char *nb_to_str(int nb);
char *my_revstr(char *str);

// str_to_word_array
int count_separator(char *str, char separator);
char **my_str_to_word(char *str, char separator);