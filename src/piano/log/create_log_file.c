#include "pianokeys.h"

int recup_and_set_key(int nb)
{
}

void create_file(void)
{
    time_t tmp;
    struct tm *date;
    tmp = time(NULL);
    date= localtime(&tmp);
    char buff[20];
    date->tm_mon += 1, date->tm_year -= 100;
    sprintf(buff,"(%d.%d.%d %d;%d;%d)",date->tm_mday,date->tm_mon,date->tm_year,date->tm_hour,date->tm_min,date->tm_sec);
    FILE *log = NULL;
    char *str1 = my_strcat("ressources/log/log", buff);
    char *str2 = my_strcat(str1, ".txt");
    free (str1);
    printf("%s\n", str2);
    log = fopen(str2, "w");
    if (log != NULL) {
        fclose(log);
    }
}