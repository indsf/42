// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   WNOHANG.c                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/07/20 23:28:15 by inhlee            #+#    #+#             */
// /*   Updated: 2025/07/20 23:41:16 by inhlee           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "pipex.h"

// int main()
// {
//     pid_t pid;
//     int status;
//     time_t t;

//     pid = fork();
//     if(pid < 0)
//         printf("fork_error");
//     else if (pid == 0)
// 	{
// 		sleep(3);
// 		exit(1);
// 	}
//     else do
//     {
//         pid = waitpid(pid,&status,WNOHANG);
//         if(pid == -1)
//             printf("wait_error");
//         else if(pid == 0)
//         {
//             time(&t);
//             printf("child is still running at %s",ctime(&t));
//             sleep(1);
//         }
//         else
//         {
//             if (WIFEXITED(status))
// 				printf("child exited with status of %d\n", WEXITSTATUS(status));
// 			else
// 				puts("child did not exit successfully");
//         }
//     }
//     while (pid == 0);
// }


