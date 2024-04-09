/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:34:46 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/09 12:11:51 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
   return (0);
}
/*
#include <stdio.h>
int main (void)
{
    int c;

    c = ft_isalpha('A');
    printf("\n\n%d\n\n\n",c);
    return(0);
}
*/