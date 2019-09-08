/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:29:25 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/08 09:33:34 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		len;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	ret = ft_strnew(len + 1);
	i = 0;
	if (ret == NULL)
		return (NULL);
	while (i < len)
	{
		ret[i] = f(s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
