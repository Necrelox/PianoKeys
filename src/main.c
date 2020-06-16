#include "pianokeys.h"

int main (void)
{
    srand(getpid());
    if (get_keys() == 84)
        return (84);
    return (0);
}
