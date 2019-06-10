/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:02:20 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/10 14:08:28 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude "libft.h"

void   ft_striteri(char *s, void(*f)(unsigned int, char *))
{
    unsigned int    i;

    if (!s || !(*s) || !f)
        return ;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        ++i;
    }
}
