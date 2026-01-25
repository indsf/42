/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:23:17 by inhlee            #+#    #+#             */
/*   Updated: 2026/01/19 21:04:05 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void    *thread_action(void *argv)
{
    t_philo *philo;
    philo = (t_philo *)argv;
    // t_action *act = philo->act;
    
    if(philo->id % 2 == 0)
        usleep(1000);
    while(!ft_check(philo))
    {
        if(get_fork(philo))
            break;
        if(ft_check(philo))
        {
            pthread_mutex_unlock(philo->left_fork);
            pthread_mutex_unlock(philo->right_fork);
            break;
        }
        if (eat_simulation(philo))
            break;
        printf("thread %d\n", philo->id);
        if(ft_check(philo))
            break;
        philo_printf(philo,"is sleeping\n");
        ft_sleep(philo->act->sleep,philo);
        if(ft_check(philo))
            break;
        philo_printf(philo,"is thinking\n");
    }
    return (NULL);
}

void philo_simulation(t_action *act)
{
    int i = 0;

    while(i < act->philo_num)
    {
        if(pthread_create(&(act->philos[i].t_id),NULL, thread_action, (void *)(act->philos+i)))
            return ;
        i++;
    }
    while(i < act->philo_num)
    {
        printf("hello\n");
        pthread_join(act->philos[i].t_id, NULL);
    }
}



