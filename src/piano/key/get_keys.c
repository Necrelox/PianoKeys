#include "pianokeys.h"

int get_state_and_out(int nb)
{
    if (GetAsyncKeyState(nb)) {
        if (open_file(nb) == 84)
            return (84);
        return (1);
    }
    if (GetAsyncKeyState(32)) {
        if (open_file(nb) == 84)
            return (84);
        return (1);
    }
    return (0);
}

int get_keys(void)
{
    int key = 0;
    for (int out = 65; 1; Sleep(10)) {
        key = get_state_and_out(out);
        if (key == 1)
            continue;
        else if(key == 84)
            return (84);
        out++;
        out == 91 ? out = 65 :0;
    }
    return (0);
}