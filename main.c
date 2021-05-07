#include "libasm.h"

// size_t ft_strlen(const char *s);
// char *ft_strcpy(char *dst, const char *src);

// void test_strcpy()
// {
// 	char *d = malloc(3000);
// 	printf("=============== strcpy ===============\n\n");
// 	STRCPY(d, "6");
// 	STRCPY(d, "172361876367328567324yt8247weuygfiuweyrfg7934tg72rgef67gf n7yewbr f7yeb g97yb24567 6rebv 79246g2v4tv79b24796b429756b 27vy 47ytv 74vb 724bv 7624v765 7 246bv 7bv247 v2v 4v v4 v49 4v v");
// 	STRCPY(d, "");
// 	STRCPY(d, "\n\n\n");
// 	STRCPY(d, "\0");
// 	STRCPY(d, "123");
// 	STRCPY(d, "123456");
// 	printf("======================================");
// 	free(d);
// 	d = NULL;
// }

int main()
{
	char *str = malloc(100);
	// printf("%zu", ft_strlen(""));
	// printf("\n\n");
	printf("%s", ft_strcpy(str, "444"));
	printf("\n\n");
	//	test_strcmp();
	//	printf("\n\n");
	//	test_write();
	//	printf("\n\n");
	//	test_read();
	//	printf("\n\n");
	//	test_strdup();
}