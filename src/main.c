#include "pianokeys.h"

int main (void)
{
    srand(getpid());
    create_file();
    if (get_keys() == 84) {
        printf("Error: programme corrupted\n\n");
        printf("\tVerif if you have all_note.txt -> ressources/sound/\n");
        Sleep(5000);
        return (84);
    }
    return (0);
}
