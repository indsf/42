/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:40:25 by inhlee            #+#    #+#             */
/*   Updated: 2025/07/22 18:50:26 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include "./libft/libft.h"
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
#include <time.h>
# include <stdlib.h>
# include <stdio.h>
# include<errno.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>



int ft_pipe_err(int fd[2]);
int ft_fork_err(pid_t pid);
char *ft_find_path(char **envp);
char **ft_excute_cmd(char **argv,char **envp);
void ft_free(char **ex_path_split);
// static void ft_dup_child_1(char **argv,int *fd);
// static void ft_proccess_child1(char **argv,char **evnp);

#endif