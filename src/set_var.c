#include "headacher.h"

void s_var(const char *name, const char *val) {
	for (int i = 0; i < var_c; i++) {
		if (strcmp(global_vars[i].name, name) == 0) {
			free(global_vars[i].val);
			global_vars[i].val = strdup(val);
			return;
		}
	}
	if (var_c < MAX_G_VARS) {
		global_vars[var_c].name = strdup(name);
		global_vars[var_c].val = strdup(val);
		var_c++;
	} else {
		fprintf(stderr, "Error: max variables num reached. Please recompile with lower max variables or decrease amount of variables\n");
	}
}
