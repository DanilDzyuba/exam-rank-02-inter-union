/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clauren <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 22:48:26 by clauren           #+#    #+#             */
/*   Updated: 2020/07/29 22:48:26 by clauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void _print(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	char ch[255];
	int i;

	i = 0;
	if (argc == 3)
	{
		while (i < 255)
			ch[i++] = 0;
		while (*argv[2])
		{
			if (!ch[(unsigned char)*argv[2]])
				ch[(unsigned char)*argv[2]] = 1;
			argv[2] += 1;
		}
		while (*argv[1])
		{
			if ((ch[(unsigned char)*argv[1]] == 1) && (ch[(unsigned char)*argv[1]] = 2))
				_print(*argv[1]);
			argv[1] += 1;
		}
	}
	_print('\n');
	return (0);
}