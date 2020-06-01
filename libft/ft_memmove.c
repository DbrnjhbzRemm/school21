/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rricki <rricki@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 22:40:45 by rricki            #+#    #+#             */
/*   Updated: 2020/05/31 23:57:28 by rricki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dst;
	unsigned char *str;
	size_t	i;

	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
	if (dst <= str)
	{
		while (i < n)
		{
			*dst++ = *str++;
			i++;
		}
	}
	else
	{
//		while (i < n)
//		{
//			 = ;
//			i++;
//		}
	}
	return (dest);
	
}

int main (void)
{
   // Исходный массив данных
   unsigned char src[10]="1234567890";

   // Вывод массива src на консоль
   printf ("src old: %s\n",src);

   // Копируем 3 байт
   memmove (&src[4], &src[0], 0);

   // Вывод массива src на консоль
   printf ("src new: %s\n",src);

   return 0;
}
