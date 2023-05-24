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

	char strlcat_src[] = "saysomthing";
	char strlcat_dst[10] = "goods";

	printf("return (5+11) : %zu, dst(goodssay) : %s\n", ft_strlcat(strlcat_dst,strlcat_src,9), strlcat_dst);    
	//결과 : return (5+11) : 16, dst(goodssays) :  goodssays
	printf("%c, %c, %c, %c,\n", ft_toupper('a'), ft_toupper('@'), ft_tolower('A'), ft_toupper('?'));  
	printf("helloworld -> %s\n",ft_strchr("helloworld", 'o'));
	printf("helloworld -> %s\n",ft_strrchr("helloworld", 'o'));

	printf("%d, %d\n",strncmp("abcd", "abcd", 3), strncmp("abCd", "abcd", 3));
	printf("%d, %d\n",ft_strncmp("abcd", "abcd", 3), ft_strncmp("abCd", "abcd", 3));

	char *ret = ft_memchr("helloworld", 'o', 10);
	printf("helloworld -> %s\n",ret);

	printf("%d, %d\n",ft_memcmp("abcd", "abcd", 3), ft_memcmp("abCd", "abc", 3));


}