/*
** main.c for main in /home/kerebe_p/Documents/PSU_2015_malloc/src
** 
** Made by kerebe_p
** Login   <paul.kerebel@epitech.eu>
** 
** Started on  Wed Jan 27 21:08:54 2016 kerebe_p
** Last update Wed Jan 27 21:08:54 2016 kerebe_p
*/

#include <stdlib.h>
#include "struct.h"

int	main(void)
{
  char	*str;
  char	*start;
  char	*mid;
  char	*end;

  show_alloc_pro();
  str = my_malloc(-1);
  start = my_malloc(8);
  mid = my_malloc(8);
  end = my_malloc(8);
  show_alloc_pro();
  my_free(end);
  show_alloc_pro();
  my_free(str);
  show_alloc_pro();
  my_free(start);
  show_alloc_pro();
  my_free(mid);
  show_alloc_pro();
}
