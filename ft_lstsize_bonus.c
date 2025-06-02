/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoneil <aoneil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:04:04 by aoneil            #+#    #+#             */
/*   Updated: 2025/06/02 11:58:58 by aoneil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_nextnode(t_list *lst)
{
	t_list	*ptr;

	ptr = lst->next;
    return (ptr);
}

size_t	ft_lstsize(t_list *lst)
{
    size_t  i;

    i = 0;
    while (lst->next != NULL)
    {
		lst = ft_nextnode(lst->next);
        i++;
    }
	return (i);
}

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf ("no nodes \n");
    int x = 42;
    t_list *node1 = ft_lstnew(&x);
    if (!node1)
    {
        printf("Malloc error!\n");
        return (1);
    }

	char s[] = "hi";
    t_list *node2 = ft_lstnew(s);
    if (!node2)
    {
        printf("Malloc error!\n");
        return (1);
    }

	int y = 55;
    t_list *node3 = ft_lstnew(&y);
    if (!node1)
    {
        printf("Malloc error!\n");
        return (1);
    }
	printf ("nodes \n");
	
	ft_lstadd_front(&node3, node2);
	ft_lstadd_front(&node3, node1);
    free(node1->next);
    free(node1);
	free(node2->next);
    free(node2);
	free(node3->next);
    free(node3);

	printf ("%ld", ft_lstsize(node3));

    return 0;
}
