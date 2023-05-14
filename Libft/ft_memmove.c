/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:38:16 by yegipark          #+#    #+#             */
/*   Updated: 2023/05/14 19:34:39 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{

	if (dest == src)
	{
		return (dest);
	}
	if (dest < src)
	{
		return (ft_memcpy(dest, src, len));
	}
	else
	{
		while (0 < len)
		{
			((unsigned char *)dest)[len - 1] = ((const unsigned char *)src)[len - 1];
			len--;
		}
		return (dest);
	}
}
