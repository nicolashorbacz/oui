/*
** struct.h for  in /home/nicolas/horbac_n/my_params_in_list
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 29 14:18:22 2017 HORBACZ Nicolas
** Last update Wed Mar 29 14:52:19 2017 HORBACZ Nicolas
*/

typedef struct  s_list
{
  void          *data;
  struct s_list *next;
}               t_list;
