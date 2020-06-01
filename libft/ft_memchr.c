/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rricki <rricki@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 00:06:28 by rricki            #+#    #+#             */
/*   Updated: 2020/06/01 00:27:12 by rricki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char cq;
	unsigned char *str;
	size_t	i;
	
	i = 0;
	str = (unsigned char *)s;
	cq = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == cq)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
