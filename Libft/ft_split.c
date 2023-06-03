/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:45:35 by yegpark           #+#    #+#             */
/*   Updated: 2023/06/03 11:58:47 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_spliter(char const *s, char c)
{
	size_t	spliter;
	size_t	i;

	spliter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			spliter++;
		i++;
	}
	if (s[0] != c)
		return (spliter + 1);
	return (spliter);
}

static char	*ft_extract_word(char const *s, char c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr = ft_substr(s, 0, i);
	ptr[i] = '\0';
	return (ptr);
}

static void	ft_free_error(char **result)
{
	char	**to_free;

	to_free = result;
	while (*result)
	{
		free(*result);
		result++;
	}
	free(to_free);
}

static void	ft_fuck_25lines(char const *s, char c, char **res)
{
	size_t	res_i;

	res_i = 0;
	while (*s)
	{
		if (*s != c)
		{
			res[res_i] = ft_extract_word(s, c);
			if (!res[res_i])
			{
				ft_free_error(res);
				return ;
			}
			res_i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	res[res_i] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	spliter_count;
	size_t	res_i;
	char	**res;

	res_i = 0;
	spliter_count = ft_count_spliter(s, c);
	res = (char **)malloc(sizeof(char *) * (spliter_count + 1));
	if (!res)
		return (0);
	ft_fuck_25lines(s, c, res);
	return (res);
}
