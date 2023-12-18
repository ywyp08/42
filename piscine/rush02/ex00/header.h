/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raleksan <raleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:29:23 by raleksan          #+#    #+#             */
/*   Updated: 2023/06/25 21:56:09 by raleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# define MIN 0
# define MAX 4294967295

void	ft_write(char *str);
void	ft_read_file(long dictionary, char *entry);
void	ft_read_x(unsigned int nb);
void	ft_read_xo(unsigned int nb);
void	ft_read_xx(unsigned int nb);
void	ft_read_hundred(unsigned int nb);
void	ft_read_number(long dictionary, long nb);
long	ft_atoi(char *str);

#endif