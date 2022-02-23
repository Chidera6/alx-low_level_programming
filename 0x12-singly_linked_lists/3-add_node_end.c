#include <stdio.h>
#include "lists.h"
/**function that adds a node at the 
 * end of a linked list.
 * head = head of the node
 *str= data part of the node
 * next = pointer pointing to the next nod
 * ptr = new node 
 */
  

  list_t *add_node_end(list_t **head, const char *str);
  {
      list_t *ptr = head;
      list_t n = malloc(sizeof(list_t));
      n->str = strdup(str);
      n->next = NULL;
      while (ptr->next != NULL)
      {
          ptr = ptr->next;
          
        }
        ptr->next = n;
  }