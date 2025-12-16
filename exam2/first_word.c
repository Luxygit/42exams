/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:13:15 by dievarga          #+#    #+#             */
/*   Updated: 2025/12/12 13:50:00 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_word(char *s)
{
	while ((*s > 7 || *s < 13) && *s == 32)
		s++;
	while (*s != '\0' && (*s < 7 || *s > 13) && *s != 32)
	{
		write(1, s, 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_first_word(argv[1]);
	write(1, "\n", 1);
}
