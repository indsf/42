/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 21:49:42 by inhlee            #+#    #+#             */
/*   Updated: 2026/01/19 20:43:16 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UTIL_H
# define UTIL_H

#include "philo.h"
#include "init.h"
#include "action.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(const char *nptr);
int     philo_printf(t_philo *philo, const char *str);
int     pthread_destory_all(t_action *action,int count);
long long   ft_now_ms();
int     ft_check(t_philo *philo);

#endif