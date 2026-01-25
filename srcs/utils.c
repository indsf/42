/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:04:50 by inhlee            #+#    #+#             */
/*   Updated: 2026/01/19 20:48:42 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "utils.h"


int	ft_atoi(const char *nptr)
{
	int	i;
    int j;
	long long	result;
	
	i = 0;
	result = 0;
	
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
    j = i - 1;
    while (nptr[++j])
	{
        if (!(nptr[j] >= 48 && nptr[j] <= 57))
            return (-1);
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = (nptr[i] - 48) + result * 10;
        if(result > 2147483647)
            return (-1);
		i++;
	}
	return (result);
}

int pthread_destory_all(t_action *action,int count)
{
	int i = 0;
	while(i < count)
	{		
		pthread_mutex_destroy(action->forks);
		i++;
	}
	return 0;
}

long long   ft_now_ms()
{
	struct timeval	tv;
	if(gettimeofday(&tv,NULL) == -1)
		return (-1);

	return (tv.tv_sec * 1000LL) + (tv.tv_usec / 1000);
}







