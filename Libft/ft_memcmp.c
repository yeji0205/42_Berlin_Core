/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:53:54 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/24 17:08:44 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	size_t	i;
	unsigned char *new_a1;
	unsigned char *new_a2;

	new_a1 = (unsigned char *)a1;
	new_a2 = (unsigned char *)a2;

	if (size == 0)
	{
		return (0);
	}
	i = 0;
	while (*new_a1 && *new_a2 && *new_a1 == *new_a2 && (i < size - 1))
	{
		new_a1++;
		new_a2++;
		i++;
	}
	return (*new_a1 - *new_a2);
}