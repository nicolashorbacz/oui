/*
** my_find_elm_eq_in_list.c for  in /home/nicolas/horbac_n/my_find_elm_eq_in_list
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 30 10:07:01 2017 HORBACZ Nicolas
** Last update Thu Mar 30 13:36:59 2017 HORBACZ Nicolas
*/

#include <stdlib.h>
#include "my_list.h"

int		my_strcmp(char *s1, char *s2);

t_list		*add_list(t_list *list, char *data)
{
  t_list	*node;

  node = malloc(sizeof(t_list));
  if (node == NULL)
    return(NULL);
  node->next = list;
  node->data = data;
  return (node);
}

void		*my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  t_list	*temp;

  temp = begin;
  while (temp != NULL)
    {
      if (cmp(temp->data, data_ref) == 0)
	{
	  return (temp->data);
	}
      temp = temp->next;
    }
  return(0);
}
