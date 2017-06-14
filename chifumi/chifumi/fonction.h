/*
** fonction.h for  in /home/nicolas/horbac_n/chifumi
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Fri Mar 31 14:28:07 2017 HORBACZ Nicolas
** Last update Sat Apr  1 11:13:05 2017 HORBACZ Nicolas
*/

#ifndef __FONCTION_H__
# define __FONCTION_H__

typedef struct	s_list
{
  int		rnd;
  int		scor_p;
  int		scor_cpu;
  int		choi_p;
  int		choi_cpu;
  struct s_list *next;
}               t_list;

typedef struct	score_display
{
  int		player;
  int		cpu;
}		score_d;

void	my_putchar (char c);
void	my_putstr(char *str);
int	my_isneg (int n);
void	my_put_nbr(int n);
int	my_nbr_len(int n);
int	my_strlen(char *str);
int	my_pow(int a, int b);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strcat(char *dest, char *src);
char	*my_strcpy(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int n);
char	*my_strncpy(char *dest, char *src, int n);
char	**my_str_to_wordtab(char *str);
char	*readLine();
int	my_getnbr(char *str);
char	*my_strstr( char *str, char *to_find);
void	my_swap(int *a, int *b);
int     error_manage(int argc, char **argv);
void    menu(char **argv);
void    classic_mode(int duration);
t_list  *add_list (t_list *list, int rnd, int scor_p, int scor_cpu, int choi_p, int choi_cpu);
int     choice_player (int min, int max);
int     choice_cpu ();
int     winner (int player, int cpu);
int     display_score (int round_winner, score_d *score);
  
#endif
