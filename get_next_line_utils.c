/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 08:54:14 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/28 14:28:15 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	unsigned int	max_len;
	char			*sub;

	if (!s)
		return (NULL);
	s_len = 0;
	while(s[s_len])
		s_len++;
	if (start < s_len)
		max_len = s_len - start;
	if (start >= s_len)
		max_len = 0;
	if (max_len > len)
		max_len = len;
	sub = (char *)malloc((max_len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, max_len + 1);
	return (sub);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*pos;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	pos = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (pos);
}

char	*ft_strchr(const char *s, int c)
{
	if (c > 127)
		c %= 256;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t		size;

	size = ft_strlen(s1) + 1;
	cpy = (char *)malloc(size);
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s1, size);
	return (cpy);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && (i < (size - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	if (size == 0)
		dst[ft_strlen(dst)] = '\0';
	while (src[i])
		i++;
	return (i);
}
