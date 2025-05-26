/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoneil <aoneil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:04:26 by aoneil            #+#    #+#             */
/*   Updated: 2025/05/26 15:17:08 by aoneil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//ft_count_words
//ft to make a malloc(wordlen) and put there a word

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
		if (s[i] != c)
		{
			if (flag == 0)
			{
				wordcount++;
				flag = 1;
			}
		}
		i++;
		else
			flag = 0;
		i++;
	}
	return (wordcount);
}

char	*ft_newword(char const *s, char c)
{
	size_t	flag;
	size_t	i;
	unsigned int	wordstart;
	size_t	wordlen;

	flag = 0;
	while (s[i] != '\0')
	{	
		if (s[i] != c)
			if (flag == 0)
			{
				flag = 1;
				wordstart = i;
			}
		wordlen++;
		i++;
		if (s[i] == c || s[i] == '\0')
		{	
			flag = 0;
			newword = ft_substr(s, wordstart, wordlen);
			return (newword, wordlen);
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arrarr;
	char	*newword;
	char	*arrnewword;
	size_t	wordcount;
	size_t	wordlen;
	size_t	flag;
	size_t	i;
	size_t	j;
	

	j = 0;
	i = 0;
	if (!s)
		return (NULL);

	wordcount = ft_countwords(s);

	arrarr = ft_calloc(sizeof(char *), wordcount + 1);
	if (!arrarr)
		return (NULL);

	while (j < wordcount)
	{
		while (s[i] == c)
			i++;
		newword, wordlen = ft_newword(s + i, c);
		if (!newword)
		// free all done arrs and free arrarr
			while (j > = 0)
				free (arrarr[j]);
				j--;
			free (arrarr);
			return (NULL);
			
		arrarr[j] = arrnewword;
		i = i + wordlen;
		j++;
	}
	arrarr[j] = 0;


	retern (arrarr);
}