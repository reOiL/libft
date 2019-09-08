/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:51:58 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/08 14:11:19 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;

	if (lst)
	{
		ret = f(lst);
		lst = lst->next;
	}
	while (lst)
	{
		ret = f(lst);
		lst = lst->next;
	}
	return (ret);
}
