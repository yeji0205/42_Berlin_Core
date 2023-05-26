/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:37:09 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/26 14:26:26 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	while (*string)
	{
		if (*string == (char)c)
		{
			return ((char *)string);
		}
		string++;
	}
	if (*string == '\0' && (char)c == '\0')
	{
		return ((char *)string);
	}
	return (0);
}
