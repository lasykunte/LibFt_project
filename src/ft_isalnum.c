/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:44:37 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/29 17:09:02 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= '0' && '9' >= c) || (c >= 'A' && c <= 'Z') \
            || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}