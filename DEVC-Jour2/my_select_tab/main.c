/*
** main.c for  in /home/nicolas/horbac_n/my_select_tab
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Mar 21 10:33:02 2017 HORBACZ Nicolas
** Last update Tue Mar 21 11:12:01 2017 HORBACZ Nicolas
*/


char  my_select_tab(char tab[4][14], int i, int j);
void my_putchar(char c);

int   main()
{
  char tab[4][14] = {{'a','b','c','d','e','f','g','h','i','j','k','l','m', 'n'},
		     {'0','0','0','0','0','0','0','0','0','0','0','0','0', '0'},
		     {'1',',','2',';','3','p','4','\n','5','\t','6','@','7','%'},
		     {'z','z','z','z','z','z','z','z','z','z','z','z','z','z'}};

  my_putchar(my_select_tab(tab, 0, 0));
  my_putchar('\n');

  my_putchar(my_select_tab(tab, 2, 3));
  my_putchar('\n');
  return (0);
}
