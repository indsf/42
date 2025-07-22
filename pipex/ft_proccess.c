/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proccess.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:42:36 by inhlee            #+#    #+#             */
/*   Updated: 2025/07/22 18:28:03 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "pipex.h"

// //파일 읽고 출력 형태를 infile 3을 입력으로 넣기 
// //f
// static void ft_dup_child_1(char **argv,int *fd)
// {
//     int infile;
//     infile = open(argv[1],O_RDONLY);
//     if(infile == -1)
//         perror_exit("file_error");
//     if(dup2(infile,STDIN_FILENO) == -1) // 3 -> 0 (3번-> 0 읽기 )
//     {
//         perror_exit("file_in_error");
//     }
//     if(dup2(fd[1],STDOUT_FILENO) == -1) // fd[1] -> 출력을(1)로 덮어쓰기 
//         perror_exit("file_out_error");
//     close(fd[0]); //읽기 
//     close(fd[1]); //쓰기 
// }

// static void ft_proccess_child1(char **argv,char **evnp)
// {
//     pid_t pid1;
//     int fd[2];
//     if(!ft_pipe_err(fd));// pipe 생성 및 에러

//     pid1 = fork(); // fork()프로세스 생성
//     if(!ft_fork_err(pid1))
//     {
//         ft_dup_child_1(argv,fd); // 파일 명령어,fd 넘김
        

//     }
    
// }




