/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 08:54:14 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/28 08:57:43 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub_string;

	sub_string = (char *)malloc(sizeof(*s) * (len + 1));
	if (!sub_string)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub_string[j] = s[i];
			j++;
		}
		i++;
	}
	sub_string[j] = 0;
	return (sub_string);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s) + 1;
	copy = malloc(len);
	if (!copy)
		return (0);
	ft_strlcpy(copy, s, len);
	return (copy);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (!*str)
			return (0);
		++str;
	}
	return (str);
}

static char	*ft_strcat(const char *s1, const char *s2, char *new_str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		new_str[i] = s1[i];
		++i;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		new_str[i] = s2[j];
		++i;
		++j;
	}
	new_str[i] = 0;
	return (new_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = malloc((s1_len + s2_len) + 1);
	if (!new_str)
		return (0);
	ft_strcat(s1, s2, new_str);
	return (new_str);
}
