/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:09:22 by inhlee            #+#    #+#             */
/*   Updated: 2025/07/20 22:51:12 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "pipex.h"
// #define MAX_BUF 1024

// int main()
// {
//     int fd[2];
//     pid_t pid;
//     char buf[MAX_BUF];
//     char *detail = "Massage from Parent";
    
//     if(pipe(fd) < 0)
//         printf("pipe_error");
    
//     pid = fork();

//     if(pid == -1)
//         printf("process_error");
//     if(pid == 0) // 잘 생성 됨 자식
//     {
//         close(fd[1]); //자식 쓰기 닫기
//         read(fd[0],buf,MAX_BUF);
//         printf("child_process: %s\n",buf);
//     }
//     else
//     {
//         close(fd[0]); // 부모쪽 읽기 닫기 
//         ft_strlcpy(buf,detail,ft_strlen(detail));
//         write(fd[1],buf,ft_strlen(buf)+1);
//     }
//     return 0;
// }
