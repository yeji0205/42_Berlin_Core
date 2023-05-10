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

	char str1[] = "ft_striteri";
	ft_striteri(str1, test_striteri);
}