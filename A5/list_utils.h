#ifndef list_join_H
#define list_join_H

#include <stdlib.h>
#include "list.h"

/**
 * Joins two lists together. If both lists are NULL, returns empty list. 
 * If only one list is NULL, then returns other list since not adding
 * anything. Otherwise returns that added list.
 */
list *list_join(const list *list1, const list *list2);

/**
 * Removes all elements from a list.
 */
list *list_remove_all(list *l, const int *x);

#endif  