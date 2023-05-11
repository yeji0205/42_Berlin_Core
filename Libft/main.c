#include "libft.h"
#include <unistd.h>
#include <stdio.h>

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
	char str[] = "test!";

	ft_putstr_fd(str, 1);	
	
	write(1, " ", 1);

	ft_putnbr_fd(4, 1);

	ft_putendl_fd(str, 1);

	char str1[] = "hello";
	ft_striteri(str1, test_striteri);

	printf("%zu\n", ft_strlen(str1));

	printf("%d\n", ft_isalpha('c'));
	printf("%d\n", ft_isalpha(4));

	printf("%d\n", ft_isdigit('c'));
	printf("%d\n", ft_isdigit('4'));

	printf("%d\n", ft_isalnum('c'));
	printf("%d\n", ft_isalnum('#'));

	printf("%d\n", ft_isascii('c'));

	printf("%d\n", ft_isprint('\a'));

	printf("%d\n", ft_strncmp(str, str1, 3));

}