#include "headacher.h"

void frvars() {
    for (int i = 0; i < var_c; i++) {
        free(global_vars[i].name);
        free(global_vars[i].val);
    }
}
