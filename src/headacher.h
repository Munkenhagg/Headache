#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#ifndef HEADACHER_H
#define HEADACHER_H

#define MAX_G_VARS 512
#define MAX_G_VARS_LEN 512
#define MAX_LABEL_CONTENT_SZ 4096 // 4kb of code

typedef struct {
	char *name;
	char *val;
} Var;
typedef struct {
	char *name;
	char **code;
	size_t code_len;
} Label;

extern FILE *achefile;
extern Var global_vars[MAX_G_VARS];
extern int var_c;
extern char *CUSTOM_DIR;
int main(int argc, char *argv[]);
void s_var(const char *name, const char *val);
const char *g_var(const char *name);
int execute_label(Label label);
void parse_flags(int argc, char *argv[]);
void frvars();

#endif
