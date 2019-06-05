#include "includes/fillit.h"

void	free_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	tab = NULL;
}
void	cp_tab(char **tab_src, char **tab_dst)
{
	int i;
	int j;

	i = 0;
	while (tab_src[i])
	{
		j = 0;
		while (tab_src[i][j])
		{
			tab_dst[i][j] = tab_src[i][j];
			j++;
		}
		i++;
	}
	tab_dst[i] = 0;
}

void	free_tab_split(char **tab)
{
	char *tmp;

	tmp = NULL;
	while (*tab + 1)
	{
		tmp = *tab + 1;
		free(*tab);
		*tab = tmp;
	}
	free(tab);
}
