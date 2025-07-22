/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:51:55 by inhlee            #+#    #+#             */
/*   Updated: 2025/07/22 18:55:05 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

// PATH= 찾기 
char *ft_find_path(char **envp)
{
    int i =0;
    while(envp[i])
    {
        if(strncmp(envp[i],"PATH=",5) == 0)
            return envp[i]+5;
        i++;
    }
    return NULL;
}

// argv 받아서 만든 evvp 명령어 반환해서 이 명령어가 맞는지 확인
char *ft_excute_cmd(char **argv,char **envp)
{
    char **ex_path;
    char *path;
    int i =0;
    char *excute;
    path = ft_find_path(envp);
    ex_path = ft_split(path,':');

    while(ex_path[i])
    {
        excute = ft_strjoin(ex_path[i],argv[2]);
        if(access(excute,X_OK) == 0)
            return excute;
        else 
            free(excute);
        i++;
    }
    return NULL;
}

void ft_free(char **ex_path_split)
{
    int i =0;
    while(ex_path_split[i])
    {
        free(ex_path_split[i]);
        i++;
    }
    free(ex_path_split);
    return;
}

int main(int argc,char **argv,char **envp)
{
    char *tmp;
    char **path;
    (void)argc;
    tmp = ft_find_path(envp);
    path = ft_excute_cmd(argv,envp);
    printf("%s\n",tmp);
    printf("%s\n",path);
}





