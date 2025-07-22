/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dup2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:16:15 by inhlee            #+#    #+#             */
/*   Updated: 2025/07/22 17:24:16 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "pipex.h"

// int main()
// {
//     int fd1,ret;
//     int ret1;
//     fd1 = open("made_by_fd1",O_RDWR|O_CREAT,S_IRUSR|S_IWUSR);
//     if(fd1 < 0)
//         perror("open_error");
//     printf("file open ");

//     ret = dup2(fd1,STDOUT_FILENO);
//     ret1 = dup2(fd1,STDIN_FILENO);
//     printf("fd1 :%d, ret:%d, ret1:%d\n",fd1,ret,ret1);
// }


