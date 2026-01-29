/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread_act.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:28:09 by inhlee            #+#    #+#             */
/*   Updated: 2026/01/29 18:52:05 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*thread_action(void *argv)
{
	t_philo		*philo;
	t_action	*act;

	philo = (t_philo *)argv;
	act = philo->act;
	if (philo->id % 2 == 0)
		usleep(1000);
	while (!ft_check(philo))
	{
		if (philo_action(philo))
			break ;
	}
	return (NULL);
}

void	monitor_loop(t_action *act)
{
	long long	now;
	long long	last;
	int			done;

	while (!ft_finish(act))
	{
		now = ft_now_ms();
		for (int i = 0; i < act->philo_num; i++)
		{
			pthread_mutex_lock(&act->meal_mutex);
			last = act->philos[i].last_eat;
			pthread_mutex_unlock(&act->meal_mutex);
			if (now - last >= act->die)
			{
				die_check_printf(act, act->philos[i].id, now);
				return ;
			}
		}
		if (act->must_eat > 0)
		{
			pthread_mutex_lock(&act->meal_mutex);
			done = (act->finished_eat >= act->philo_num);
			pthread_mutex_unlock(&act->meal_mutex);
			if (done)
			{
				set_finish(act);
				return ;
			}
		}
		usleep(200);
	}
}
