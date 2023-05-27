/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:09:48 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/27 02:02:03 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	str_i;
	size_t	find_i;
	size_t	count;

	str_i = 0;
	find_i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[str_i] && (str_i < len))
	{
		count = 0;
		while (str[str_i] == to_find[find_i])
		{
			if (count == (ft_strlen(to_find) - 1))
				return ((char *)&str[str_i - count]);
			str_i++;
			find_i++;
			count++;
		}
		str_i = str_i - (count - 1);
	}
	return (0);
}
