/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:06:43 by inhlee            #+#    #+#             */
/*   Updated: 2026/01/19 21:03:40 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int    philo_printf(t_philo *philo, const char *str)
{		
	long long now = ft_now_ms();
	if(now == -1)
		return (1);
	pthread_mutex_lock(philo->write_mutex);
	if(philo->act->finish == RUNNING)
		printf("%lld %d %s",now - philo->act->start_ms,philo->id, str);
	pthread_mutex_unlock(philo->write_mutex);
	return 0;
}


int ft_check(t_philo *philo)
{
	int	ret;

    pthread_mutex_lock(&philo->act->finish_mutex);
    if(philo->act->finish == FINISHED)
		ret = 1;
	else
		ret = 0;
	pthread_mutex_unlock(&philo->act->finish_mutex);
	return ret;	    
}


// void check_final(t_action *act)
// {

// 	while(ft_check(act->philos))
// 	{
// 		// if(act->philos->eat_ct != 0 && )
// 		/*
// 		while philos[i++]
// 			philos[i] => (philo->eat_ct >= philo->act->must_eat)이 true면
// 			시간 체크
// 		*/
// 	}
// }



