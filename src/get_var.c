#include "headacher.h"

const char *get_var(const char *name) {
    for (int i = 0; i < var_c; i++) {
        if (strcmp(global_vars[i].name, name) == 0) {
            return global_vars[i].val;
        }
    }
    return NULL;
}
