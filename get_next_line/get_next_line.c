/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchantse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:37:05 by dchantse          #+#    #+#             */
/*   Updated: 2018/11/20 16:26:18 by dchantse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int						ft_cpy(char **line, t_list *tmp)
{
	size_t				size;
	char				*str;
	size_t				leng;

	size = 0;
	str = (char*)tmp->content;
	leng = ft_strlen(str);
	while (str[size] != '\0' && str[size] != '\n')
		size++;
	tmp->content = ft_strjoin("", str + (size + (ft_strchr(str, '\0') > 0)));
	IF((leng > 0), (*line = ft_strsub(str, 0, size)));
	IF((str != NULL), (free(str)));
	IFRET((str[size] != '\0' || leng > 0), 1);
	return (0);
}

static t_list			*get_file(int fd, t_list **file)
{
	t_list				*tempor;

	tempor = *file;
	while (tempor)
	{
		IFRET(((int)tempor->content_size == fd), tempor);
		tempor = tempor->next;
	}
	tempor = ft_lstnew("\0", fd);
	ft_lstadd(file, tempor);
	return (tempor);
}

int						get_next_line(const int fd, char **line)
{
	static t_list		*lst;
	char				buf[BUFF_SIZE + 1];
	int					rd;
	t_list				*lst2;
	char				*str;

	IFRET((!line || read(fd, buf, 0) < 0 || fd < 0), -1);
	lst2 = get_file(fd, &lst);
	while ((rd = read(fd, buf, BUFF_SIZE)))
	{
		buf[rd] = '\0';
		str = lst2->content;
		IFRET((!(lst2->content = ft_strjoin(str, buf))), -1);
		IF((str != NULL), (free(str)));
		if (ft_strchr(buf, '\n'))
			break ;
	}
	IFRET((ft_cpy(line, lst2)), 1);
	return (0);
}
