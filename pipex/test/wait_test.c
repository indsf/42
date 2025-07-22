/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:10:06 by inhlee            #+#    #+#             */
/*   Updated: 2025/07/20 23:28:01 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "pipex.h"

// int main()
// {
//     //int stat;
//     int stat,stat_res;

//     if((fork()) == 0)
//         printf("child_process\n");
//     else
//     {
//         stat_res = wait(&stat);
//         printf("parent_process\n");
//         printf("wait 인자값: %d\nwait 반환값: %d\n", stat, stat_res);
//         // printf("wait 인자값: %d\nwait 반환값: %d\n", stat);
//         wait(NULL);
//         printf("child_kill\n");
//     }
//     printf("process_bye\n");
//     return 0;
// }
