/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:28:15 by olahmami          #+#    #+#             */
/*   Updated: 2022/11/03 01:40:42 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	if (!dst && !dstsize)
		return (srclen);
	dstlen = ft_strlen(dst);
	i = dstlen;
	if (dstlen >= dstsize)
		return (srclen + dstsize);
	j = 0;
	while (src[j] && j < dstsize - dstlen - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
