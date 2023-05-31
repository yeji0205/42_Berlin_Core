#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>


void	test_striteri(unsigned int i, char *c)
{
	printf("Index: %u, Character: %c\n", i, *c);
}
/* void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
} */

int main(void)
{
	char str[] = "test! again!";

	ft_putstr_fd(str, 1);

	write(1, " ", 2);

	ft_putnbr_fd(4, 1);

	ft_putendl_fd(str, 1);

	char str1[] = "hello";
	ft_striteri(str1, test_striteri);

	printf("%zu\n", ft_strlen(str1));

	printf("%d\n", ft_isalpha('c'));
	printf("%d\n", ft_isalpha(4));

	printf("digit? %d\n", ft_isdigit('c'));
	printf("digit? ('4'=52) %d\n", ft_isdigit('4')); //

	printf("isalnum? %d\n", ft_isalnum('c')); // 1
	printf("isalnum? %d\n", ft_isalnum('#')); // 0

	printf("is it ASCii? %d\n", ft_isascii('c')); // 1

	printf("pritable? %d\n", ft_isprint('a')); // 1
	printf("pritable? %d\n", ft_isprint('\n')); // 0

	char mem[] = "memset test";
	ft_memset(mem, 'A', 6);
	printf("%s\n", mem); // "AAAAAA test"

	// ft_bzero returns NONE
	ft_bzero(mem, 5);
	printf("Nothing should come: %c\n", mem[2]); // NONE
	printf("%c\n", mem[8]); // e

	ft_memcpy(str, str1, 5);
	printf("original: test! again! -> %s\n", str); // "hello again!"

	char mem1[] = "memmmove";
	char mem2[] = "hell";
	ft_memmove(mem1, mem2, 4);
	printf("memmmove -> %s\n", mem1); // "hellmove"

	char strcpy_dst[] = "destination";
	char strcpy_src[] = "sourceee";
	ft_strlcpy(strcpy_dst, strcpy_src, 7);
	printf("strlcpy: %s\n", strcpy_dst);

	char strlcat_src[] = "saysomthing";
	char strlcat_dst[10] = "goods";

	printf("return (5+11) : %zu, dst(goodssay) : %s\n", ft_strlcat(strlcat_dst,strlcat_src,9), strlcat_dst);
	//결과 : return (5+11) : 16, dst(goodssays) :  goodssays
	printf("%c, %c, %c, %c,\n", ft_toupper('a'), ft_toupper('@'), ft_tolower('A'), ft_toupper('?'));
	printf("strchr: helloworld with o -> %s\n",ft_strchr("helloworld", 'o'));
	printf("strrchr: helloworld with o -> %s\n",ft_strrchr("helloworld", 'o'));

	printf("%d, %d\n",strncmp("abcd", "abcd", 3), strncmp("abCd", "abcd", 3));
	printf("%d, %d\n",ft_strncmp("abcd", "abcd", 3), ft_strncmp("abCd", "abcd", 3));

	char	*ret = ft_memchr("helloworld", 'o', 10);
	printf("helloworld -> %s\n",ret);

	printf("%d, %d\n",ft_memcmp("abcd", "abcd", 3), ft_memcmp("abCd", "abc", 3));

	char	*ret1 = ft_strnstr("helloschennnn", "schen", 11);
	printf("helloschennnn -> %s\n", ret1);

	printf("atoi: +-456 -> %d\n", ft_atoi("+-456"));
	printf("atoi: +-456 -> %d\n", atoi("+-456"));
	printf("atoi: -456 -> %d\n", ft_atoi("-456"));
	printf("atoi: -456 -> %d\n", atoi("-456"));
	printf("atoi: +456 -> %d\n", ft_atoi("+456"));
	printf("atoi: +456 -> %d\n", atoi("+456"));

	int *a;
	a = (int*)ft_calloc(3, sizeof(int));
	int i;
	for(i = 0; i < 3; i++)
	{
		printf("calloc %d\n", a[i]);
	}
	free(a);

	char *result;
	char *strdup_s = "Hello world";
   	result = ft_strdup(strdup_s);
	printf("strdup: Hello world ->  %s\n", result);
	free(result);

	char *result_sub;
	result_sub = ft_substr(strdup_s, 0, 11);
	printf("substr: Hello world, 0, 11 -> %s\n", result_sub);

	char	*pre = "welcome";
	char	*suf = " to the world!";
	char	*res_join;
	res_join = ft_strjoin(pre, suf);
	printf("strjoin: %s\n", res_join);

	char *trim_s1 = "21abc23d12";
	char *trim_set = "12";
	char *trim_res;
	trim_res = ft_strtrim(trim_s1, trim_set);
	printf("strtrim s1[21abc23d12] with set[12] -> %s\n", trim_res);
}