/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <neddison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 10:51:18 by neddison          #+#    #+#             */
/*   Updated: 2019/04/26 20:36:35 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# define ELCNT (*lst_el)->content
# define ELSZ (*lst_el)->content_size

# include <fcntl.h>
# include "./libft/libft.h"

int									get_next_line(const int fd, char **line);

#endif
