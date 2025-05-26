/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoneil <aoneil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:54:06 by aoneil            #+#    #+#             */
/*   Updated: 2025/05/26 01:05:29 by aoneil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	textlen;

	if (!s1 || !s2)
		return (NULL);
	textlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(textlen + 1);
	if (!newstr)
		return (NULL);
	newstr[0] = '\0';
	ft_strlcat(newstr, s1, textlen);
	ft_strlcat(newstr, s2, textlen);
	return (newstr);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *joined = ft_strjoin(s1, s2);

    if (joined)
    {
        printf("Result: %s\n", joined);
        free(joined);
    }
    else
    {
        printf("Join failed.\n");
    }
    return 0;
}
*/