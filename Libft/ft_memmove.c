/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:38:16 by yegipark          #+#    #+#             */
/*   Updated: 2023/05/26 14:29:09 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*new_dest;
	const unsigned char	*new_src;

	new_dest = (unsigned char *)dest;
	new_src = (const unsigned char *)src;
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
			new_dest[len - 1] = new_src[len - 1];
			len--;
		}
		return (dest);
	}
}
