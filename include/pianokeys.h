#include "my.h"

/*                  PROTOTYPES                  */

/*      piano/get_keys.c    */
int get_state_and_out(int nb);
int get_keys(void);

/*      piano/out_sound.c       */
int open_file(int nb);

/*      piano/log/create_log_file.c         */
int recup_and_set_key(int nb);
void create_file(void);