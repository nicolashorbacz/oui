/*
** my_nb_len.c for  in /home/nicolas/horbac_n/my_nb_len
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 18:46:05 2017 HORBACZ Nicolas
** Last update Mon Mar 20 19:52:13 2017 HORBACZ Nicolas
*/
int  my_nb_len(int n)
{
  int i;
  i = 1;

  if (n > 0)
    {
      while (n >= 10)
        {
          n = n / 10;
          i = i + 1;
        }
    }
  else
    {
      while (n <= -10)
	{
	  n = n / 10;
	  i = i + 1;
	}
    }
  return i;
}
    
