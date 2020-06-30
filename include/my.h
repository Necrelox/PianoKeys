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
#include <dirent.h>
#include <windows.h>

int my_strlen(char *str);
char *my_strdup(char *str);
char *my_strcat(char *str1, char *str2);
void free_tab(char **tab);
int count_separator(char *str, char separator);
char **my_strtab(char *str, char separator);