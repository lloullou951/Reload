/*
** liberror.c for  in /home/guillaume/Bachelor - Octobre_2018/TIC/Reload/LibError
** 
** Made by MECHAT Guillaume
** Login   <mechat_g@etna-alternance.net>
** 
** Started on  Thu Feb 25 10:34:48 2016 MECHAT Guillaume
** Last update Thu Feb 25 15:03:28 2016 MECHAT Guillaume
*/

#include <errno.h>
#include <fcntl.h>
#include <string.h>

void	error(void *data)
{
  char	*buf;
  int	len;
  int	i;

  i = 0;
  buf = perror();
  len = my_strlen(buf);
  open("log.txt", O_APPEND);
  while (i < len)
    {
      write(1, &buf[i], i);
      i = i + 1;
    }
}
