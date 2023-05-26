/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:06:55 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/26 14:40:50 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*new_block;
	size_t		i;

	new_block = (unsigned char *)block;
	i = 0;
	while (*new_block && (i < size))
	{
		if (*new_block == (unsigned char)c)
		{
			return (new_block);
		}
		new_block++;
		i++;
	}
	return (0);
}
