#include "libasm.h"

int main()
{
	printf("__________________________________\n");
	printf("\n------------FT_STRLEN------------\n");

	printf("__________________________________\n");
	printf("ft_strlen - %d\n", (int)ft_strlen("lol"));
	printf("strlen    - %d\n", (int)strlen("lol"));
	printf("__________________________________\n");
	printf("ft_strlen - %d\n", (int)ft_strlen("This book is an introduction to assembly language programming for the x86-64 architecture of CPUs like the Intel Core processors and the AMD Athlon and Opteron processors. While assembly language is no longer widely used in general purpose programming, it is still used to produce maximum efficiency in core functions in scientific computing and in other applications where maximum efficiency is needed. It is also used to per­ form some functions which cannot be handled in a high-level language.The goal of this book is to teach general principles of assembly lan­ guage programming. It targets people with some experience in program­ ming in a high level language (ideally C or C++), but with no prior exposure to assembly language."));
	printf("strlen    - %d\n", (int)strlen("This book is an introduction to assembly language programming for the x86-64 architecture of CPUs like the Intel Core processors and the AMD Athlon and Opteron processors. While assembly language is no longer widely used in general purpose programming, it is still used to produce maximum efficiency in core functions in scientific computing and in other applications where maximum efficiency is needed. It is also used to per­ form some functions which cannot be handled in a high-level language.The goal of this book is to teach general principles of assembly lan­ guage programming. It targets people with some experience in program­ ming in a high level language (ideally C or C++), but with no prior exposure to assembly language."));
	printf("__________________________________\n");
	printf("ft_strlen - %d\n", (int)ft_strlen(""));
	printf("strlen    - %d\n", (int)strlen(""));
	printf("__________________________________\n");

	printf("\n------------FT_STRCPY------------\n");
	char *buf_1;
	char *buf_2;
	printf("__________________________________\n");

	printf("dst - lol || src - kek\n");
	buf_1 = strdup("lol");
	buf_2 = strdup("lol");
	printf("ft_strcpy - %s\n", ft_strcpy(buf_1, "kek"));
	printf("strcpy    - %s\n", strcpy(buf_2, "kek"));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("dst - null || src - kek\n");
	buf_1 = strdup("");
	buf_2 = strdup("");
	printf("ft_strcpy - %s\n", ft_strcpy(buf_1, "kek"));
	printf("strcpy    - %s\n", strcpy(buf_2, "kek"));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("dst - Hello World || src - kek\n");
	buf_1 = strdup("Hello World");
	buf_2 = strdup("Hello World");
	printf("ft_strcpy - %s\n", ft_strcpy(buf_1, "kek"));
	printf("strcpy    - %s\n", strcpy(buf_2, "kek"));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("dst - Hello World || src - null\n");
	buf_1 = strdup("Hello World");
	buf_2 = strdup("Hello World");
	printf("ft_strcpy - %s\n", ft_strcpy(buf_1, ""));
	printf("strcpy    - %s\n", strcpy(buf_2, ""));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("dst - null || src - null\n");
	buf_1 = strdup("");
	buf_2 = strdup("");
	printf("ft_strcpy - %s\n", ft_strcpy(buf_1, ""));
	printf("strcpy    - %s\n", strcpy(buf_2, ""));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("dst - kek || src - Hello World\n");
	buf_1 = strdup("kek");
	buf_2 = strdup("kek");
	printf("ft_strcpy - %s\n", ft_strcpy(buf_1, "Hello World"));
	printf("strcpy    - %s\n", strcpy(buf_2, "Hello World"));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");
	printf("\n------------FT_STRCMP------------\n");
	printf("__________________________________\n");

	printf("s1 - LOL || s2 - LOL\n");
	buf_1 = strdup("LOL");
	buf_2 = strdup("LOL");
	printf("ft_strcmp - %d\n", ft_strcmp(buf_1, buf_2));
	printf("strcmp    - %d\n", strcmp(buf_1, buf_2));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("s1 - LOZ || s2 - LOL\n");
	buf_1 = strdup("LOZ");
	buf_2 = strdup("LOL");
	printf("ft_strcmp - %d\n", ft_strcmp(buf_1, buf_2));
	printf("strcmp    - %d\n", strcmp(buf_1, buf_2));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("s1 - LOL || s2 - LOZ\n");
	buf_1 = strdup("LOL");
	buf_2 = strdup("LOZ");
	printf("ft_strcmp - %d\n", ft_strcmp(buf_1, buf_2));
	printf("strcmp    - %d\n", strcmp(buf_1, buf_2));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("s1 - null || s2 - LOL\n");
	buf_1 = strdup("");
	buf_2 = strdup("LOL");
	printf("ft_strcmp - %d\n", ft_strcmp(buf_1, buf_2));
	printf("strcmp    - %d\n", strcmp(buf_1, buf_2));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("s1 - LOL || s2 - null\n");
	buf_1 = strdup("LOL");
	buf_2 = strdup("");
	printf("ft_strcmp - %d\n", ft_strcmp(buf_1, buf_2));
	printf("strcmp    - %d\n", strcmp(buf_1, buf_2));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("s1 - null || s2 - null\n");
	buf_1 = strdup("");
	buf_2 = strdup("");
	printf("ft_strcmp - %d\n", ft_strcmp(buf_1, buf_2));
	printf("strcmp    - %d\n", strcmp(buf_1, buf_2));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n\n");

	printf("s1 - HELLO || s2 - HELWLO\n");
	buf_1 = strdup("HELLO");
	buf_2 = strdup("HELWLO");
	printf("ft_strcmp - %d\n", ft_strcmp(buf_1, buf_2));
	printf("strcmp    - %d\n", strcmp(buf_1, buf_2));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("s1 - HELWLO || s2 - HELLO\n");
	buf_1 = strdup("HELWLO");
	buf_2 = strdup("HELLO");
	printf("ft_strcmp - %d\n", ft_strcmp(buf_1, buf_2));
	printf("strcmp    - %d\n", strcmp(buf_1, buf_2));
	free(buf_1);
	free(buf_2);

	printf("__________________________________\n");

	printf("\n------------FT_WRITE------------\n");
	int fd;
	char *buf = strdup("This book is an introduction to assembly language programming for the x86-64 architecture of CPUs like the Intel Core processors and the AMD Athlon and Opteron processors.\nWhile assembly language is no longer widely used in general purpose programming,\nit is still used to produce maximum efficiency in core functions in scientific computing and in other applications where maximum efficiency is needed.\nIt is also used to per­ form some functions which cannot be handled in a high-level language.\nThe goal of this book is to teach general principles of assembly lan­ guage programming.\nIt targets people with some experience in program­ ming in a high level language (ideally C or C++), but with no prior exposure to assembly language.");

	printf("__________________________________\n");

	errno = 0;
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0666);
	printf("ft_write       - %zd\n", ft_write(fd, buf, strlen(buf)));
	printf("ft_write error - %s\n", strerror(errno));
	close(fd);

	errno = 0;
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0666);
	printf("write          - %zd\n", write(fd, buf, strlen(buf)));
	printf("write error    - %s\n", strerror(errno));
	close(fd);

	printf("__________________________________\n");

	errno = 0;
	fd = open("not_file.txt", O_WRONLY | O_TRUNC | O_APPEND, 0666);
	printf("ft_write       - %zd\n", ft_write(fd, buf, strlen(buf)));
	printf("ft_write error - %s\n", strerror(errno));
	close(fd);

	errno = 0;
	fd = open("not_file.txt", O_WRONLY | O_TRUNC | O_APPEND, 0666);
	printf("write          - %zd\n", write(fd, buf, strlen(buf)));
	printf("write error    - %s\n", strerror(errno));
	close(fd);

	printf("__________________________________\n");

	errno = 0;
	fd = open("file.txt", O_WRONLY | O_TRUNC | O_APPEND, 0666);
	printf("ft_write       - %zd\n", ft_write(fd, buf, strlen(buf)));
	printf("ft_write error - %s\n", strerror(errno));
	close(fd);

	errno = 0;
	fd = open("file.txt", O_WRONLY | O_TRUNC | O_APPEND, 0666);
	printf("write          - %zd\n", write(fd, buf, strlen(buf)));
	printf("write error    - %s\n", strerror(errno));
	close(fd);

	printf("__________________________________\n");

	errno = 0;
	fd = open("file.txt", O_WRONLY | O_TRUNC | O_APPEND, 0666);
	printf("ft_write       - %zd\n", ft_write(fd, buf, -1));
	printf("ft_write error - %s\n", strerror(errno));
	close(fd);

	errno = 0;
	fd = open("file.txt", O_WRONLY | O_TRUNC | O_APPEND, 0666);
	printf("write          - %zd\n", write(fd, buf, -1));
	printf("write error    - %s\n", strerror(errno));
	close(fd);

	printf("__________________________________\n");

	errno = 0;
	fd = open("file.txt", O_WRONLY | O_TRUNC | O_APPEND, 0666);
	printf("ft_write       - %zd\n", ft_write(fd, buf, strlen(buf)));
	printf("ft_write error - %s\n", strerror(errno));
	close(fd);

	errno = 0;
	fd = open("file.txt", O_WRONLY | O_TRUNC | O_APPEND, 0666);
	printf("write          - %zd\n", write(fd, buf, strlen(buf)));
	printf("write error    - %s\n", strerror(errno));
	close(fd);
	printf("__________________________________\n");
	printf("\n------------FT_READ------------\n");
	char buf_read;
	// int byte = 1;

	printf("__________________________________\n");

	errno = 0;
	fd = open("read_file.txt", O_RDONLY);
	while (ft_read(fd, &buf_read, 1))
		printf("%c", buf_read);
	printf("\n\nft_read error - %s\n\n", strerror(errno));
	close(fd);

	errno = 0;
	fd = open("read_file.txt", O_RDONLY);
	while (read(fd, &buf_read, 1))
		printf("%c", buf_read);
	printf("\n\nread error - %s\n", strerror(errno));
	close(fd);

	printf("__________________________________\n\n");

	errno = 0;
	fd = open("read_file.txt", O_RDONLY);
	ft_read(fd, &buf_read, -1);
	printf("ft_read error - %s\n", strerror(errno));
	printf("errno -> %d\n",errno);
	close(fd);

	errno = 0;
	fd = open("read_file.txt", O_RDONLY);
	read(fd, &buf_read, -1);
	printf("read error    - %s\n", strerror(errno));
	printf("errno -> %d\n", errno);
	close(fd);

	printf("__________________________________\n\n");

	errno = 0;
	fd = open("not_file.txt", O_RDONLY);
	ft_read(fd, &buf_read, 1);
	printf("ft_read error - %s\n", strerror(errno));
	close(fd);

	errno = 0;
	fd = open("not_file.txt", O_RDONLY);
	read(fd, &buf_read, 1);
	printf("read error    - %s\n", strerror(errno));
	close(fd);

	printf("__________________________________\n");
	printf("\n------------FT_STRDUP------------\n");
	char *buf_3;
	char *buf_4;
	printf("__________________________________\n");

	buf_3 = ft_strdup("1234");
	buf_4 = strdup("1234");
	printf("ft_strdup - %s\n", buf_3);
	printf("strdup - %s\n", buf_4);
	free(buf_3);
	free(buf_4);

	printf("__________________________________\n");

	buf_3 = ft_strdup("Cocaine and drinkin' with your friends\nYou live in the dark, boy, I cannot pretend\nI'm not phased, only here to sin\nIf Eve ain't in your garden, you know that you can");
	buf_4 = strdup("Cocaine and drinkin' with your friends\nYou live in the dark, boy, I cannot pretend\nI'm not phased, only here to sin\nIf Eve ain't in your garden, you know that you can");
	printf("ft_strdup - %s\n\n", buf_3);
	printf("strdup - %s\n\n", buf_4);
	free(buf_3);
	free(buf_4);

	printf("__________________________________\n");

	buf_3 = ft_strdup("");
	buf_4 = strdup("");
	printf("ft_strdup - %s\n", buf_3);
	printf("strdup - %s\n", buf_4);
	free(buf_3);
	free(buf_4);

	printf("________________end_______________\n");
	return (0);
}
