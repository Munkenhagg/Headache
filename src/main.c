#include "headacher.h"

FILE *achefile;
Var global_vars[MAX_G_VARS];
int var_c = 0;
char *CUSTOM_DIR = NULL;

int main(int argc, char *argv[]) {
	if (CUSTOM_DIR != NULL) {
		if (chdir(CUSTOM_DIR) != 0) {
			perror("Changing to specified dir failed");
			exit(1);
		}
	}
}
