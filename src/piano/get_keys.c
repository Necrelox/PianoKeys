#include "pianokeys.h"

int get_state_and_out(int nb)
{
    if (GetAsyncKeyState(nb)) {
        printf("oui\n");
        Beep(rand() % 500, 500);
        
        return (1);
    }
    if (GetAsyncKeyState(32)) {
        printf("oui\n");
        return (1);
    }
    return (0);
}

int get_keys(void)
{
    for (int out = 65; 1; Sleep(10)) {
        if (get_state_and_out(out) == 1)
            continue;
        out++;
        out == 91 ? out = 65 :0;
        printf("non\n");
    }
    return (0);
}