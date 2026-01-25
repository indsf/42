/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 22:18:44 by inhlee            #+#    #+#             */
/*   Updated: 2026/01/19 21:21:57 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int     get_fork(t_philo *philo)
{   
    // 한명일때 예외(같은 포크를 집을때)
    if(philo->left_fork == philo->right_fork)
    {
        pthread_mutex_lock(philo->left_fork);  
        if(!philo_printf(philo,"has taken a fork\n"))
            return 1;
    }

    if(philo->id % 2 == 0)
    {
        pthread_mutex_lock(philo->left_fork);
        philo_printf(philo, "has taken a fork\n");
        pthread_mutex_lock(philo->right_fork);
        philo_printf(philo, "has taken a fork\n");
    }
    else
    {
        pthread_mutex_lock(philo->right_fork);
        philo_printf(philo, "has taken a fork\n");
        pthread_mutex_lock(philo->left_fork);
        philo_printf(philo, "has taken a fork\n");
    }

    return (0);
}

void     put_fork(t_philo *philo)
{
    // if(philo->left_fork == philo->right_fork)
    // {
    //     pthread_mutex_unlock(philo->left_fork);
    //     return ;
    // }   
    pthread_mutex_unlock(philo->left_fork);
    pthread_mutex_unlock(philo->right_fork);
}

void    ft_sleep(long long sleep,t_philo *philo)
{
    long long now;
    now = ft_now_ms();

    while(ft_check(philo) && (ft_now_ms() - now >= sleep))
        usleep(100);
}

int     eat_simulation(t_philo *philo)
{
    philo_printf(philo,"is eating\n");
    // pthread_mutex_lock(philo->meal_mutex);
    philo->last_eat = ft_now_ms();
    ft_sleep(philo->act->eat,philo);
    // pthread_mutex_unlock(philo->meal_mutex);
    
    // pthread_mutex_lock(philo->meal_mutex);
    philo->eat_ct = philo->eat_ct+1;
    // pthread_mutex_unlock(philo->meal_mutex);
    put_fork(philo);
    if (philo->eat_ct >= philo->act->must_eat)
        return 1;
    return 0;
}
    
