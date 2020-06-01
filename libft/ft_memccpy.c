/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rricki <rricki@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 21:56:10 by rricki            #+#    #+#             */
/*   Updated: 2020/05/31 22:30:43 by rricki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*str;
	unsigned char	cq;
	size_t		i;

	i = 0;
	cq = (unsigned char)c;
	str = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (i < n)
	{
		*dst++ = *str++;
		if (*(str - 1) == cq)
			return (dest);
		i++;
	}
	return (NULL);
}
