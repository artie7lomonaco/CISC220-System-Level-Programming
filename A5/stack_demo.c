#include <assert.h>
#include <stdbool.h>
#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
#include "stack_utils.h"
 
int main(){
    /**
    *  Reverses stacks
    */
    //case 1: empty stack
    const stack *stack1 = stack_init();
    stack_print(stack_reverse(stack1),&stack1);

    //case 2: size 1
    const stack *stack2 = stack_init();
    stack_push(stack2,"a");
    stack_print(stack_reverse(stack2),&stack2);

    //case 3: size 3
    const stack *stack3 = stack_init();
    stack_push(stack3,"a");
    stack_push(stack3,"b");
    stack_push(stack3,"c");
    stack_print(stack_reverse(stack3),&stack3);

    /**
    * stack equals
    */
   //Case 1: two empty stacks
   const stack *s1 = stack_init();
   const stack *s2 = stack_init();
   printf("%d/n",stack_equals(s1,s2,"a"));

   //case 2: two equal stacks of size 1:
    const stack *s3 = stack_init();
   const stack *s4 = stack_init();
   stack_push(s3,"a");
   stack_push(s4,"a");
   printf("%d/n",stack_equals(s3,s4,"a"));

    //case 3: two unequal stacks of size 1:
    const stack *s5 = stack_init();
   const stack *s6 = stack_init();
   stack_push(s5,"a");
   stack_push(s6,"b");
   printf("%d/n",stack_equals(s5,s6,"a"));
    
    //Case 4: two equal stacks of size 3
    const stack *s7 = stack_init();
   const stack *s8 = stack_init();
   stack_push(s7,"a");
   stack_push(s7,"a");
   stack_push(s7,"a");
   stack_push(s8,"a");
   stack_push(s8,"a");
   stack_push(s8,"a");
   printf("%d/n",stack_equals(s7,s8,"a"));

   //case 5: two unequal stacks of sie 3
   const stack *s9 = stack_init();
   const stack *s10 = stack_init();
   stack_push(s9,"a");
   stack_push(s9,"a");
   stack_push(s9,"a");
   stack_push(s10,"b");
   stack_push(s10,"b");
   stack_push(s10,"b");
   printf("%c/n",stack_equals(s9,s10,"a"));
}

