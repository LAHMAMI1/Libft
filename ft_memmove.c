/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:23:33 by olahmami          #+#    #+#             */
/*   Updated: 2022/11/03 01:17:42 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (len == 0)
		return (dst);
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		i = len - 1;
		while (i > 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
		((unsigned char *)dst)[0] = ((unsigned char *)src)[0];
	}
	return (dst);
}
