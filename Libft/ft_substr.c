/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 02:18:34 by yegipark          #+#    #+#             */
/*   Updated: 2023/05/29 02:29:29 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = malloc(sizeof(char) * len);
	i = 0;
	if (sub)
	{
		while (s[i] && (i < len))
		{
			sub[i] = s[start];
			i++;
			start++;
		}
		sub[i] = 0;
		return (sub);
	}
	return (0);
}
