
#ifndef LIBASM_H
# define LIBASM_H

#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/errno.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
int ft_strcmp(const char *str1, const char *str2);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fd, void *buf, size_t count);
char *ft_strdup(const char *str);

#endif
