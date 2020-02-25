/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 14:09:57 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/02/03 14:10:24 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*cdest;
	char			*csrc;
	char			buff[n];
	unsigned long	i;

	cdest = (char *)dest;
	csrc = (char *)src;
	i = -1;
	while (++i < n)
		buff[i] = csrc[i];
	i = -1;
	while (++i < n)
		cdest[i] = buff[i];
	return (cdest);
}
