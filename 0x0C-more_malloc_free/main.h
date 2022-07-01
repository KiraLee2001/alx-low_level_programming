#ifndef MAIN_H
#define MAIN_H

void _puts(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _atoi(const char *s);
void print_int(unsigned long int n);
void _is_zero(char *argv[]);
char *_initialize_array(char *ar, int lar);
int _checknum(char *argv[], int n);

#endif
