/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:24:33 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/09 18:31:12 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*item;

	item = (t_list*)malloc(sizeof(t_list));
	if (item == NULL)
		return (NULL);
	item->next = NULL;
	item->content = NULL;
	item->content_size = 0;
	if (content != NULL)
	{
		item->content = ft_memalloc(content_size);
		ft_memcpy(item->content, content, content_size);
		item->content_size = content_size;
	}
	return (item);
}
