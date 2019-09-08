/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 10:56:29 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/08 11:30:09 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	res;

	if (s == NULL)
		return (1);
	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			res++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (res + 1);
}

char		**ft_strsplit(char const *s, char c)
{
	int		word_count;
	char	**ret;
	int		word_len;
	int		i;

	word_count = ft_word_count(s, c);
	ret = (char **)malloc(sizeof(char *) * word_count);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			word_len = 0;
			while (s[word_len] != c && s[word_len] != '\0')
				word_len++;
			ret[i] = ft_strncpy(ft_strnew(word_len), s, word_len);
			s += word_len;
			i++;
		}
		else
			s++;
	}
	ret[i] = NULL;
	return (ret);
}
