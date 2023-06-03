/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 01:01:10 by yegipark          #+#    #+#             */
/*   Updated: 2023/06/03 11:58:53 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_num(int n)
{
	int	num;
	int	len;

	num = n;
	len = 0;
	if (n < 0)
	{
		num = -num;
		len++;
	}
	if (n == 0)
		len = 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		str_i;
	int		n_str;
	char	*str;

	len = ft_len_num(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	n_str = n;
	if (n < 0)
		n_str = -n_str;
	str_i = len - 1;
	while (0 <= str_i)
	{
		str[str_i] = n_str % 10 + '0';
		n_str /= 10;
		str_i--;
	}
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}
