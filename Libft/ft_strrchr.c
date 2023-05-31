/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:43:45 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/31 17:08:07 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	len_str;

	len_str = ft_strlen(string);
	if (c == '\0')
	{
		return ((char *)(string + len_str));
	}
	while (len_str >= 0)
	{
		if (string[len_str] == (char)c)
		{
			return ((char *)(string + len_str));
		}
		len_str--;
	}
	return (0);
}
