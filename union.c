/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clauren <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 22:48:23 by clauren           #+#    #+#             */
/*   Updated: 2020/07/29 22:54:00 by clauren          ###   ########.fr       */
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
		i = 1;
		while (i < 3)
		{
			while(*argv[i])
			{
				if ((!ch[(unsigned char)*argv[i]]) && (ch[(unsigned char)*argv[i]] = 1))
					_print(*argv[i]);
				argv[i] += 1;
			}
			i++;
		}
	}
	_print('\n');
	return (0);
}


