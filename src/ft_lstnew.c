/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:24:33 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/08 13:31:03 by jwebber          ###   ########.fr       */
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
	item->content = (void *)content;
	item->content_size = content_size;
	return (item);
}
