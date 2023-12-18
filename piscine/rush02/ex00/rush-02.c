/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raleksan <raleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:08:06 by raleksan          #+#    #+#             */
/*   Updated: 2023/06/25 21:31:38 by raleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	char	dict_num;
	char	*search_num;
	long	dictionary;
	long	number;

	dict_num = '0';
	search_num = argv[1];
	if (argc == 3)
	{
		dict_num = argv[2][0];
	}
	dictionary = ft_atoi(&dict_num);
	number = ft_atoi(search_num);
	if (number < MIN || number > MAX || dictionary < MIN)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_read_number(dictionary, number);
	return (0);
}
