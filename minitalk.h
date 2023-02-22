/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 22:13:22 by burakkarlid       #+#    #+#             */
/*   Updated: 2023/01/11 04:33:48 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	handle_sig(int signum);

#endif