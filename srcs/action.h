/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:56:32 by inhlee            #+#    #+#             */
/*   Updated: 2026/01/19 20:44:37 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTION_H
# define ACTION_H

#include "utils.h"
// toDo(스레드 생성 및 동작 해야하는 함수 정의)
// 동작 순서 생각하기 
// 1.   -> 2.

int     get_fork(t_philo *philo);
void     put_fork(t_philo *philo);
int     eat_simulation(t_philo *philo);
void    ft_sleep(long long sleep,t_philo *philo);


#endif