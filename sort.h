#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Double linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previus elemnt of yhe link
 * @next: Pointer to the next element of the link
 **/

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* prototypes from given print functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* function protoypes */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);


#endif /* _SORT_H_ */
