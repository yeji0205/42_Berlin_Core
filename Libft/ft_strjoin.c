/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:57:40 by yegipark          #+#    #+#             */
/*   Updated: 2023/05/29 02:38:36 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*joined;

	len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * len);
	i = 0;
	if (joined)
	{
		while (i < ft_strlen(s1))
		{
			joined[i] = s1[i];
			i++;
		}
		while (i < len)
		{
			joined[i] = s2[i - ft_strlen(s1)];
			i++;
		}
		joined[i] = 0;
		return (joined);
	}
	return (0);

}
