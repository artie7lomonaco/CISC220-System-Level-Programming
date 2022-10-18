#ifndef stack_utils_H
#define stack_utils_H

#include <stdbool.h>

struct stack *stack_reverse(const stack *s);

typedef bool (*compare_element)(void *s1, void *s2);
bool stack_equals(const stack *s1, const stack *s2, compare_element comp);

#endif