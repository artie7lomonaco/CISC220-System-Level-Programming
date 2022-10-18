#include <assert.h>
#include <stdbool.h>
#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
#include "stack_utils.h"

stack *stack_reverse(const stack *s){
    if (s->top == NULL){
        return NULL;
    }
    node *m = NULL;
    node *n = s->top;
    node *next = n->next;
    n->next = m;
    while (next != NULL){
        m = n;
        n = next;
        n->next = m;
    }
}

bool stack_equals(const stack *s1, const stack *s2, compare_element comp){
    if (s1->size != s2->size){
        return false;
    }
    else {
        //variables for s1
        node *n1 = s1->top;
        node *next1 = n1->next;
        //variables for s2
        node *n2 = s2->top;
        node *next2 = n2->next;
        while (next1 != NULL && next2 != NULL){
            if (n1 == n2){
                n1 = next1;
                n2 = next2;
            }
            else {
                return false;
            }
        }
        return true;
    }
}
