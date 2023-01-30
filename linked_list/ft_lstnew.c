/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:07:18 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/22 14:53:02 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list *ft_lstnew(int content)
{
    t_list *elt;

    elt = (t_list *)malloc(sizeof(*elt));
    if (elt == NULL)
        return (NULL);
    elt->value = content;
    elt->next = NULL;
    return (elt);
}
