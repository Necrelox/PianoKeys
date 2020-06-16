#include "pianokeys.h"

void random_note_played(int nb, char **soundtab)
{
    int max_rand = 0, random = 0;
    char *sound = NULL;
    for (;soundtab[max_rand] != NULL; max_rand++);
    random = rand() % max_rand;
    sound = my_strcat("ressources\\sound\\", soundtab[random]);
    sound = my_strcat(sound, ".WAV");
    PlaySound(NULL, NULL, 0);
    PlaySound(sound, NULL, SND_SYNC || SND_LOOP);
    free_tab(soundtab);
    free(sound);
}

void read_file(int nb, char *str)
{
    char *file = my_strcat("ressources/sound/", str);
    char **soundtab = NULL;
    struct stat buff_size;
    stat(file, &buff_size);
    int size = buff_size.st_size;
    char buff[size + 1];
    int op = open(file, O_RDONLY);
    read(op, buff, size);
    buff[size] = '\0';
    soundtab = my_strtab(buff, '\n');
    random_note_played(nb, soundtab);
    free (file);
}

int open_file(int nb)
{
    int o = 0;
    DIR *repo = NULL;
    struct dirent *sound = NULL;
    repo = opendir("ressources/sound");
    char *str = NULL;
    while (( sound = readdir(repo)) != NULL) {
        str = sound->d_name;
        if (strcmp("all_note.txt", str) == 0) {
            o++;
            break;
        }
    }
    if (o == 0 || o > 1)
        return (84);
    free (repo);
    read_file(nb, str);
    return (0);
}
