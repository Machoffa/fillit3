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

void	ft_strtab(char const *s, char ***tab)
{
	int		k;
	int		j;
	int		i;

	j = 0;
	i = 0;
	if (!(*tab = (char **)malloc(sizeof(char *) * 6)))
		return ;
	while (s[i])
	{
		k = 0;
		if (!(*tab[j] = (char*)malloc(sizeof(char) * 5)))
			return ;
		while ( s[i] && s[i] != '\n')
		{
			*tab[j][k] = s[i];
			i++;
			k++;
		}
		if (s[i] == '\n')
		{
			i++;
			j++;
		}
		*tab[j][k] = '\0';
	//	ft_putstr(*tab[j]);
	}
	*tab[j] = NULL;
//	ft_putchar(s[i]);
//	ft_print_words_tables(*tab);
}
