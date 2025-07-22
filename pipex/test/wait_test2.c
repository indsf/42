/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_test2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:36:00 by inhlee            #+#    #+#             */
/*   Updated: 2025/07/20 23:26:17 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "pipex.h"

// int main()
// {
// 	int pid, status;

// 	printf("Parent: %d\n", getpid());
// 	pid = fork();
// 	if (pid == 0)
// 	{
// 		printf("Child %d\n", getpid());
// 		sleep(2);
// 		return (0);
// 	}
// 	waitpid(pid, &status, 0);
// 	if (WIFSIGNALED(status))
// 		printf("Error\n");
// 	else if (WEXITSTATUS(status))
// 		printf("Exited Normally\n");
// 	else if (WIFEXITED(status))
// 		printf("Parent: %d\n", getpid());
// 	return 0;
// }
