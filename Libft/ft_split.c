/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:45:35 by yegpark           #+#    #+#             */
/*   Updated: 2023/06/10 15:51:34 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cnt_wrd(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*ft_extract_word(char const *s, char c)
{
	size_t	word_len;
	char	*ptr;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	ptr = ft_substr(s, 0, word_len);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	res_i;
	char	**res;

	if (!s)
		return (0);
	res = (char **)malloc(sizeof(char *) * (ft_cnt_wrd(s, c) + 1));
	if (!res)
		return (0);
	res_i = 0;
	while (*s)
	{
		if (*s != c)
		{
			res[res_i] = ft_extract_word(s, c);
			res_i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	res[res_i] = 0;
	return (res);
}
