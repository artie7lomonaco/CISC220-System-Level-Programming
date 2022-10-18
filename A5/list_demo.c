#include <stdio.h>

#include "list_utils.h"
#include "list.h"

int main(){

    /**
    * The first four cases are for the function list_join.
    */

    //Case 1: both null
    const list *first = NULL;
    const list *second = NULL; 
    //const list *nullJoined = list_join(first,secon d);
    // char *c = list_to_string(list_join(first,second));
    // printf("%s",c);
    list_print(list_join(first,second));



    //Case 2: first null
    const list *first2 = NULL;
    size_t s2 = 3;
    list *second2 = list_init(s2);
    for (int i = 0 ; i < second2->size ; i++){
        list_add(second2,i);
    }
    list *nullJoined1 = list_join(first2,second2);
    printf("%s",list_to_string(nullJoined1));



    //Case 3: second null
    const list *second3 = NULL;
    size_t s3 = 3;
    list *first3 = list_init(s3);
    for (int i = 0 ; i < first3->size ; i++){
        list_add(first3,i);
    }
    list *nullJoined2 = list_join(first3,second3);
    printf("%s",list_to_string(nullJoined2));



    //Case 4: both nonempty lists
    size_t s4 = 5;
    list *first4 = list_init(s4);
    list *second4 = list_init(s4);
    for (int i = 0 ; i < first4->size ; i++){
        list_add(first4,i);
    }
    for (int i = second4->size ; i >= 0 ; i--){
        list_add(second4,i);
    }
    list *sum = list_join(first4,second4);



    /**
    * Prints a list followed by a newline to standard output.
    */
    size_t size = 5;
    //Case 1: removes zero elements
    const int *x = 7;

    list *l1 = list_init(size);
    for (int i = 0; i < l1->size ; i++){
        list_add(l1,i);
    }
    list_print(list_remove_all(l1,x));

    //Case 2: removes one element
    const int *y = 3;

    list *l2 = list_init(size);
    for (int i = 0; i < l2->size ; i++){
        list_add(l2,i);
    }
    list_print(list_remove_all(l2,y));

    //Case 3:
    size_t size2 = 6;
    list *l3 = list_init(size2);
    for (int i = 0; i < l3->size ; i++){
        list_add(l3,i);
    }
    list_add(l3,3);
    list_print(list_remove_all(l3,y));

    //Case 4:
    size_t size3 = 5;
     list *l4 = list_init(size3);
    for (int i = 0; i < l4->size ; i++){
        list_add(l3,3);
    }
    list_add(l4,3);
    list_add(l4,3);
    list_print(list_remove_all(l4,y));
}