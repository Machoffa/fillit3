/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machoffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 14:21:08 by machoffa          #+#    #+#             */
/*   Updated: 2019/06/06 03:43:15 by mreveret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# define BUFF_SIZE 5

void	fillit(int fd, char ***tab);
int		globalcheck(int fd, char ***tab, int k);
int		pos_final_check(char *str, char ***tab, int k);
void	tab_opti(char ***tab, int k);
void	ft_strtab(char const *s, char ***tab);
char	**tab_opti2(char ***tab, int k);
void	tab_opti3(char ***tab, int k);
char	**clean_map(int count, char **map);
void	free_tab_split(char **tab);
int		started_size(int k);
void	cp_tab(char **tab_src, char **tab_dst);
int		check_spaces(char **map, char **tab, int i, int j);
void	put_tetri(char **map, char **tab, int i, int j);
void	rm_tetri(char **map, char **tab, int i, int j);
void	free_tab(char **tab);
#endif
