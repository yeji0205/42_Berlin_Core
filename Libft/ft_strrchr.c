/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:43:45 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/24 15:55:31 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int len_str;

	len_str = ft_strlen(string) - 1;
	while (string[len_str])
	{
		if (string[len_str] == (char)c)
		{
			return (char *)(string + len_str); 	
		}
		len_str--;
	}	
	return (0);
}