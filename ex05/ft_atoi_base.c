/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:23:46 by hbendani          #+#    #+#             */
/*   Updated: 2021/08/15 10:08:29 by hbendani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;
	int	repeated_char;

	i = 0;
	j = 1;
	repeated_char = 0;
	if (base[i] == '\0' || base[i++] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] = ' ' 
				|| (base[i] >= 9 && str[i] <= 13))
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				repeated_char ++;
			j++;
		}
		if (repeated_char >= 2)
			return (0);
		i++;
	}
	return (i);
}






int	ft_atoi_base(char *str, char *base)
{


