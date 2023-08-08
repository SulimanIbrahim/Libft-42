/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suibrahi <suibrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 02:26:13 by suibrahi          #+#    #+#             */
/*   Updated: 2023/08/08 23:28:35 by suibrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendest;
	size_t	len;

	if (dst == (void *)0 && dstsize == 0)
		return (0);
	lendest = ft_strlen(dst);
	if (dstsize <= lendest)
		return (dstsize + ft_strlen(src));
	len = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[len] != '\0' && lendest + 1 < dstsize)
	{
		dst[lendest] = src[len];
		lendest++;
		len++;
	}
	dst[lendest] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[len]));
}
int main()
{
	char sre[]="ali ";
	char dst[]="ahmed";
	printf("%s", ft_strlcat())
}