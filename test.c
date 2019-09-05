/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:10:58 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/05 17:37:23 by jwebber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <string.h>

void	test_memset()
{
	char c[6] = {};
	ft_memset(c, 'c', 5);
	assert(strcmp(c, "ccccc") == 0);
}

int main()
{
	test_memset();
	return (0);
}
