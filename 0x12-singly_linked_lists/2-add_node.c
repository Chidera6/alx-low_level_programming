#include <stdio.h>
#include "lists.h"


 /**a function 
*that adds a new node
at the beginning of a list_t list.
*/


list_t *add_node(list_t **head, const char *str);
{
int len;
list_t *ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);
for (len = 0; str[len]; len++);

ptr->len = len;
ptr->str = strdup(str);
ptr->next = *head;
*head = ptr;
return (ptr);
}