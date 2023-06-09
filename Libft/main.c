#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>


void	help_striteri(unsigned int i, char *c)
{
	printf("striteri- Index: %u, Character: %c\n", i, *c);
}

char	help_strmapi(unsigned int i, char c)
{
	c += i;
	return (c);
}

void	del(void *content)
{
	// Cast the content pointer to the appropriate type
	char *value = (char *)content;
	// Print the value before freeing the memory
	printf("Deleting value: %s\n", value);

}

void *transform_content(void *content)
{
    int *value = (int *)content;
    int *new_value = malloc(sizeof(int));
    if (new_value)
        *new_value = (*value) * 2;
    return new_value;
}

void print_content(void *content)
{
    char *value = (char *)content;
    printf("%s\n ", value);
}



int main(void)
{
	char str[] = "test! again!";
	char str1[] = "hello";

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
	result_sub = ft_substr(strdup_s, 6, 11);
	printf("substr: Hello world, 6, 11 -> %s\n", result_sub);

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

	char	*to_split = "der die das denen";
	char	**splited = ft_split(to_split, ' ');
	for(int i = 0; splited[i] != NULL; i++)
	{
		printf("ft_splited: %s\n", splited[i]);
	}

	int number1 = -12345;
	int number2 = 102345;
	int number3 = 0;
	printf("ft_itoa: %s\n", ft_itoa(number1));
	printf("ft_itoa: %s\n", ft_itoa(number2));
	printf("ft_itoa: %s\n", ft_itoa(number3));

	char *res_strmapi = ft_strmapi("hello", help_strmapi);
	printf("ft_strmapi: hello -> %s\n", res_strmapi);

	ft_striteri(str1, help_striteri);

	ft_putstr_fd(str, 1);

	write(1, " ", 2);

	ft_putnbr_fd(4, 1);

	ft_putendl_fd(str, 1);

	printf("\nBONUS--------------------\n\n");

	t_list *node1 = ft_lstnew("content for node1");
	char *content = (char *)(node1->content);
	printf("---ft_lstnew---\n");
	printf("Content of the node: %s\n", content);

	t_list *node2 = ft_lstnew("content for node2");
	t_list *node3 = ft_lstnew("content for node3");

	t_list *list = NULL;

	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
    	ft_lstadd_front(&list, node1);

	printf("---ft_lstadd_front---\n");
	t_list *copy_list = list;
	while (copy_list != NULL)
	{
		printf("Content: %s\n", (char *)(copy_list->content));
		copy_list = copy_list->next;
	}

	t_list *size_list = list;
	printf("---ft_lstsize---\n");
	printf("%d\n", ft_lstsize(size_list));

	t_list *last_list = list;
	char	*lastnode = ft_lstlast(last_list)->content;
	printf("---ft_lstlast---\n");
	printf("%s\n", lastnode);

	printf("---ft_lstadd_back---\n");
	t_list *node4 = ft_lstnew("content for node4");
	ft_lstadd_back(&list, node4);
	t_list *addback_list = list;
	while (addback_list != NULL)
	{
		printf("Content: %s\n", (char *)(addback_list->content));
		addback_list = addback_list->next;
	}

	printf("---ft_lstdelone---\n");
	ft_lstdelone(node2, del);


	printf("---ft_lstclear---\n");
	// Create some nodes for testing
	t_list *clear_node1 = ft_lstnew("clear_Node1");
	t_list *clear_node2 = ft_lstnew("clear_Node2");
	t_list *clear_node3 = ft_lstnew("clear_Node3");

	// Build the list
	t_list *clear_list = clear_node1;
	clear_node1->next = clear_node2;
	clear_node2->next = clear_node3;

	// Print the initial list
	printf("Initial List:\n");
	t_list *curr_clear = list;
	while (curr_clear)
	{
		printf("%s\n", (char *)curr_clear->content);
		curr_clear = curr_clear->next;
	}

	// Clear the list using ft_lstclear()
	ft_lstclear(&clear_list, del);

	printf("---ft_lstmap---\n");
	// 	t_list *list_map = ft_lstnew("list_map");
	// 	ft_lstadd_back(&list, ft_lstnew("World"));
	// 	ft_lstadd_back(&list, ft_lstnew("Welcome"));
	// 	ft_lstadd_back(&list, ft_lstnew("to"));
	// 	ft_lstadd_back(&list, ft_lstnew("OpenAI"));

	// 	// Print the original list
	// 	printf("Original list: ");
	// 	ft_lstiter(list_map, print_content);
	// 	printf("\n");

	// 	// t_list	*after_map = ft_lstmap(list_map, transform_content, del);
	// 	// // Print the transformed list
	// 	// printf("Transformed list: ");
	// 	// ft_lstiter(after_map, print_content);
	// 	// printf("\n");
}