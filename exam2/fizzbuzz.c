/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 08:51:27 by dievarga          #+#    #+#             */
/*   Updated: 2025/12/16 09:35:19 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n/10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	fizzbuzz(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
