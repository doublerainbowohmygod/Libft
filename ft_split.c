/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoneil <aoneil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:04:26 by aoneil            #+#    #+#             */
/*   Updated: 2025/05/27 17:37:51 by aoneil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
size_t	ft_countwords(char const *s, char c)
{
	size_t	flag;
	size_t	i;
	size_t	wordcount;
	
	flag = 0;
	i = 0;
	wordcount = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			wordcount++;
			flag = 1;
		}
		else if (s[i] == c) 
			flag = 0;
		i++;
	}
	return (wordcount);
}

char	*ft_newword(char const *s, size_t *i, char c)
{
	char			*newword;
	unsigned int	wordstart;
	size_t			wordlen;

	wordlen = 0;
	while (s[*i] == c && s[*i] != '\0')
	{
		(*i)++;
	}
	wordstart = *i;
	while (s[*i] != c && s[*i] != '\0')
	{	
		(*i)++;
		wordlen++;
	}
	newword = ft_substr(s, wordstart, wordlen);
	return (newword);
}

void	ft_freearrarr(size_t *j, char **arrarr)
{
	while (*j >= 0)
	{
		free (arrarr[*j]);
		(*j)--;
	}
	free (arrarr);
}

char	**ft_split(char const *s, char c)
{
	char	**arrarr;
	char	*newword;
	size_t	wordcount;
	size_t	i;
	size_t	j;
	
	j = 0;
	i = 0;
	//printf("in 1 ft_split 1\n");
	if (!s)
		return (NULL);
	//printf("in 2 ft_split 2\n");
	wordcount = ft_countwords(s, c);
	arrarr = ft_calloc(wordcount + 1, sizeof(char *)); //empty arr of arr with +one for 0
	printf("in 3 ft_split arrarr: %p\n", arrarr);
	if (!arrarr)
		return (NULL);
	//printf("in 4 ft_split 4\n");
	while (j++ < wordcount)
	{
		newword = ft_newword(s, &i, c);
		printf("in 5 while newword: %s\n", newword);
		if (!newword)
		{
			printf("in NULL newword, gonna free\n");
			ft_freearrarr(&j, arrarr);
			return (NULL);
		}
		arrarr[j] = newword;
		printf("in 6 got newword: %s\n", newword);
		//j++;
	}
	return (arrarr);
}

#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char const *s, char c);

int main(void)
{
    char *str = "  hello  world  42  ";
    char sep = ' ';
    char **result = ft_split(str, sep);
	printf("Str:%s\n",str);

    if (!result)
    {
        printf("Split failed!\n");
        return 1;
    }
	printf("main GOT result!\n");
	printf("RESULT: %s", result[3]);


    int i = 0;
    while (result[i])
    {
        printf("Word %d: '%s'\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
