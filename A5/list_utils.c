#include <stdio.h>
#include "list_utils.h"
#include "list.h"

/**
 * Joins two lists together. If both lists are NULL, returns empty list. 
 * If only one list is NULL, then returns other list since not adding
 * anything. Otherwise returns that added list.
 */
list *list_join(const list *list1, const list *list2){
    if (list1->arr == NULL && list2->arr == NULL){
        list *emptyList = list_init_empty();
        return emptyList;
    }
    else if (list1->arr == NULL || list2->arr == NULL){
        if (list1->arr == NULL){
            size_t newSize2 = list2->size;
            list *newList2 = list_init(newSize2);
            for (int i = 0 ; i <= list2->size; i++){
                list_add(newList2,list2->arr[i]);
            }
            return newList2;
        }
        else {
            size_t newSize1 = list1->size;
            list *newList1 = list_init(newSize1);
            for (int i = 0 ; i <= list1->size; i++){
                list_add(newList1,list1->arr[i]);
            }
            return newList1;
        }
    }
    else {
        size_t newSize = list1->size + list2->size;
        list *joinedList = list_init(newSize);
        for (int i = 0; i <= list1->size ; i++){
                list_add(joinedList , list1->arr[i]);
        }
        for (int i = 0; i <= list2->size ; i++){
            list_add(joinedList,list2->arr[i]);
        }
        return joinedList;
    }
}


/**
 * Removes all instances of a specific element from a list.
 */
list *list_remove_all(list *l, const int *x){
    int toRemove = 0;
    for (int i = 0; i<= l->size; i++){
        if (l->arr[i] == *x){
            toRemove++;
        }
    }
    size_t newSize = (l->size-toRemove);
    list *newList = list_init(newSize);
    for (int i = 0; i <= l->size ; i++){
        if (l->arr[i] != *x){
            list_add(newList, l->arr[i]);
        }
    }
    return newList;
}