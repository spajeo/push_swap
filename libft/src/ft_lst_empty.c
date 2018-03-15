#include "liblst.h"

/**
 * list_empty - tests whether a list is empty
 * @head: the list to test.
 * add static when in define
 */
int list_empty(t_lst *head)
 {
     return READ_ONCE(head->next) == head;
 }