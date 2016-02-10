/*
** malloc.h for malloc in /home/kerebe_p/Documents/Epitech/malloc
** 
** Made by kerebe_p
** Login   <paul.kerebel@epitech.eu>
** 
** Started on  Sun Jan 31 03:22:38 2016 kerebe_p
** Last update Sun Jan 31 03:22:38 2016 kerebe_p
*/

#ifndef _MALLOC_H_
# define _MALLOC_H_
# define TRUE 1
# define FALSE 0
# define MAGIC 0x42cafe69

# include <sys/types.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <pthread.h>

typedef struct		s_block
{
  size_t		p_size;
  int			is_free;
  int			m_key;
  struct s_block	*next;
  struct s_block	*prev;
}			t_block;

void			*malloc(size_t size);
void			free(void *ptr);
void			*realloc(void *ptr, size_t size);

size_t			aligned_size(size_t size, size_t align);
void			show_alloc_mem();
t_block			*check_block(size_t size, t_block *g_mem);
t_block			*create_block(size_t size, t_block **g_mem);
void			split_block(size_t size, t_block *current);
void			merge_block(t_block *current);
int			is_valid(void *ptr, t_block *g_mem);
t_block			*grow_mem(size_t size, t_block *current);
void			thread_malloc_lock();
void			thread_malloc_unlock();
void			thread_free_lock();
void			thread_free_unlock();

#endif /* MALLOC */