/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:15:06 by sspilka           #+#    #+#             */
/*   Updated: 2023/11/06 16:07:34 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	child(char **argv, int *p_fd, char **envp)
{
	int		fd;

	fd = open_file(argv[1], 0);
	dup2(fd, 0);
	dup2(p_fd[1], 1);
	close(p_fd[0]);
	exec(argv[2], envp);
}

static void	parent(char **argv, int *p_fd, char **envp)
{
	int		fd;

	fd = open_file(argv[4], 1);
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(p_fd[1]);
	exec(argv[3], envp);
}

int	main(int argc, char **argv, char **envp)
{
	int		p_fd[2];
	pid_t	pid;

	if (argc != 5)
		//return ;
	if (pipe(p_fd) == -1)
		//return ;
	pid = fork();
	if (pid == -1)
		//return ;
	if (!pid)
		child(argv, p_fd, envp);
	else
		parent(argv, p_fd, evnp);
}
