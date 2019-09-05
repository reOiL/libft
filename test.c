/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwebber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:10:58 by jwebber           #+#    #+#             */
/*   Updated: 2019/09/05 18:01:22 by jwebber          ###   ########.fr       */
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
	ft_memset(c, 'c', 0);
	assert(strcmp(c, "ccccc") == 0);
	ft_memset(c, 'a', 1);
	assert(strcmp(c, "acccc") == 0);
}

void	test_bzero()
{
	char c[4] = "123";
	ft_bzero(c, 0);
	assert(strcmp(c, "123") == 0);
	ft_bzero(c, 1);
	assert(c[0] == '\0' && c[1] == '2');
	ft_bzero(c, 3);
	assert(c[0] == '\0' && c[1] == '\0' && c[2] == '\0');
}

int main()
{
	test_memset();
	test_bzero();
	return (0);
}
