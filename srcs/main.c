/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhlee <inhlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:33:04 by inhlee            #+#    #+#             */
/*   Updated: 2026/01/19 21:01:49 by inhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"


int main(int argc,char **argv)
{
    t_action act;
    
    if(!(argc == 6 || argc == 5))
        return (1);
    if(init_action(&act,argv,argc))
        return (1);
    init_mutex(&act);
    init_philos(&act);
    philo_simulation(&act);
}

