#include "shell.h"
#include <stdlib.h>
<<<<<<< HEAD
/**
* merge_paths - combines between two paths 
* @n_s: separator between two paths
* @p1: first path string
* @p2: second path string
* Return: Merged paths
*/
=======

/*
 * *merge_paths - the main function
 * @n_s: value
 * @p1: value
 * @p2: value
 * Return: merge
 */

>>>>>>> f587919941f7a346212a8b41eda8dfa36c657e5f
char *merge_paths(const char n_s, const char *p1, const char *p2)
{
	size_t x = 0, y = 0;
	size_t l = 0;
	char *merge = NULL;

	while (p1[x++] != '\0')
		;

	l += x;
	x = 0;

	while (p2[x++] != '\0')
		;

	l += x;
	l += 1;

	merge = malloc(sizeof(*merge) * (l + 1));

	x = 0;

	while (p1[y])
	{
		merge[x] = p1[y];
		x++;
		y++;
	}

	merge[x++] = n_s;
	y = 0;
	while (p2[y])
	{
		merge[x] = p2[y];
		x++;
		y++;
	}
	merge[x] = '\0';
	return (merge);
}

