#include "sort.h"

/**
* _swap - swaps two nodes of double linked list
*@node: node base to change
*@lists: double link list head
*Return: Nothing
*/

void _swap(listint_t **node, listint_t **list)
{
listint_t *tmp = *node, *tmp2, *tmp3;

if (!(*node)->prev)
*list = (*node)->next;
tmp = tmp3 = *node;
tmp2 = tmp->next;

tmp->next = tmp2->next;
tmp3 = tmp->prev;
tmp->prev = tmp2;
tmp2->next = tmp;
tmp2->prev = tmp3;

if (tmp2->prev)
tmp2->prev->next = tmp2;

if (tmp->prev)
tmp->next->prev = tmp;

*node = tmp2;
}

/**
*insertion_sort_list - sorts a double linked list
*in ascending order using insertion sort algorithm
*@list: double linked list
*Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{
listint_t *head, *tback, *aux;

if (!list || !(*list) || (!((*list)->prev) && !((*list)->next)))
return;
   
head = *list;
while (head && head->next)
{
if (head->n > head->next->n)
{
aux = head;

_swap(&aux, list);
print_list(*list);
head = aux;
tback = aux;

while (tback && tback->prev)
{
if (tback->n < tback->prev->n)
{
aux = tback->prev;

_swap(&(aux), list);
print_list(*list);
tback = aux->next;
}
tback = tback->prev;
}
}  
}
head = head->next;
}
