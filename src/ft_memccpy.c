/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:48:24 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/08 14:17:33 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)src)[i] == (unsigned char)c)
			return (dst + i);
		((unsigned char *)dst)[i] = ((const unsigned char*)src)[i];
		i++;
	}
	return (NULL);
}
