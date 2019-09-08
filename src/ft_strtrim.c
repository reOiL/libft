/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 10:14:37 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/08 10:55:48 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	size_t		len;
	size_t		start;
	size_t		end;
	char		*ret;
	long long	new_len;

	if (s == NULL)
		return (NULL);
	start = 0;
	len = ft_strlen(s);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	end = 0;
	while (s[(len - 1) - end] == ' ' ||
			s[(len - 1) - end] == '\n' ||
			s[(len - 1) - end] == '\t')
		end++;
	new_len = (len - (start + end)) + 1;
	new_len = (new_len <= 0 ? 1 : new_len);
	ret = ft_strnew(new_len);
	if (ret == NULL)
		return (NULL);
	return (ft_strncpy(ret, (s + start), new_len - 1));
}
