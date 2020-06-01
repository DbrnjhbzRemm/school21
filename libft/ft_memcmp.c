/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rricki <rricki@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 00:28:24 by rricki            #+#    #+#             */
/*   Updated: 2020/06/01 00:44:34 by rricki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sq1;
	unsigned char	*sq2;
	size_t			s1_value;
	size_t			s2_value;
	size_t			i;

	sq1 = (unsigned char*)s1;
	sq2 = (unsigned char*)s2;
	s1_value = 0;
	s2_value = 0;
	i = 0;
	if (!n)
		return (0);
	while (sq1[i] == sq2[i] && i != (n - 1))
		i++;
	s1_value = sq1[i];
	s2_value = sq2[i];
	return (s1_value - s2_value);
}

int main (void)
{
   // Исходные массивы
   unsigned char src[15]="1234567890";
   unsigned char dst[15]="1234567890";

   // Сравниваем первые 10 байт массивов
   // и результат выводим на экран
   if (ft_memcmp (src, dst, 10) == 0)
      puts ("Области памяти идентичные.");
   else
      puts ("Области памяти отличаются.");

   return 0;
}
