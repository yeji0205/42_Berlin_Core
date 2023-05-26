/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:43:45 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/26 14:41:34 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	len_str;

	len_str = ft_strlen(string) - 1;
	while (string[len_str])
	{
		if (string[len_str] == (char)c)
		{
			return ((char *)(string + len_str));
		}
		len_str--;
	}
	if (c == '\0')
	{
		return ((char *)string + len_str);
	}
	return (0);
}
