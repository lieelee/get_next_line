/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:55:06 by yelee             #+#    #+#             */
/*   Updated: 2019/12/17 13:11:33 by yelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (char*)(&s[i]);
		++i;
	}
	if (c == '\0' && s[i] == '\0')
		return (char*)(&s[i]);
	return (0);
}