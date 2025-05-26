/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoneil <aoneil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:43:30 by aoneil            #+#    #+#             */
/*   Updated: 2025/05/26 00:58:37 by aoneil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_charfromset(char const *c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
		if ((const chat *)c == set[i])
			return (1);
		i++;
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	newsize;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] != '\0')
	{
		while (ft_charfromset(s1[start], set));
			start++;
	}
	end = ft_strlen(s1) - 1;
	while (end > start)
	{
		while (ft_charfromset(s1[end], set));
			end--;
	}
	if (end - start == 0)
	{
		trimmed = malloc(1);
		if (!trimmed)
			return (NULL);
		trimmed[0] = '\0';
	}
	else
		trimmed = ft_substr(s1, start, end - start);
	retutn (trimmed);
}

int	main(void)
{
	char const	*str = " oh my god it's youu!";
	char const	*set = " ";
	printf("%s", ft_strtrim(str, set));
	return (0);
}