/*
** server_cmd_pass.c for MyIrc in /home/lks/rendu/PSU_2014_myirc/auzou_t/
** 
** Made by Thibaud Auzou
** Login   <auzou_t@epitech.net>
** 
** Started on  Wed Apr  8 15:44:25 2015 Thibaud Auzou
** Last update Sun Apr 12 18:53:23 2015 Thibaud Auzou
*/

#include "server.h"

int			cmd_pass(t_fd *client)
{
  char			*pass;

  if (client->_client._connected || strlen(client->_client._nick) > 0)
    return (add_msg_to_queue(client, "462 %s\r\n", E_462));
  if ((pass = strtok(NULL, " ")) == NULL)
    return (add_msg_to_queue(client, "461 PASS %s\r\n", E_461));
  return (OK);
}
