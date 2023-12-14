#ifndef _MAIN_H_
#define _MAIN_H_

char *environs_get(const char *environs_name);
char *find_path(const char *path_name);
char *merge_paths(const char n_s, const char *p1, const char *p2);
int check_file_ex(const char *fp);
char *duplicate_string(const char *s);
extern char **environ;
#endif
