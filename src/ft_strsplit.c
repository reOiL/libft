/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 10:56:29 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/08 11:46:34 by jwebber          ###   ########.fr       */
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
	char	**ret;
	int		word_len;
	int		i;

	ret = (char **)malloc(sizeof(char *) * ft_word_count(s, c));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			word_len = 0;
			while (s[word_len] != c && s[word_len] != '\0')
				word_len++;
			if (!(ret[i] = ft_strncpy(ft_strnew(word_len), s, word_len)))
				return (NULL);
			s += word_len;
			i++;
		}
		else
			s++;
	}
	ret[i] = NULL;
	return (ret);
}
