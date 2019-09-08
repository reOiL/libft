/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:59:11 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/08 15:54:39 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		end;

	if (s == NULL)
		return (NULL);
	ret = ft_strnew(len);
	if (ret == NULL)
		return (NULL);
	end = start + len;
	while (start < len)
	{
		ret[start] = s[start];
		start++;
	}
	return (ret);
}
