#include <stdio.h>
#include <stdlib.h>

#include "Lista.h"

 int main(){
     List *Lista1, *Lista2;
    Lista1 = create_list(10);
    Lista2 = create_list(10);
    insert_numbersnio(Lista1);
    insert_numbersio(Lista2);
    print_list(Lista1);
    printf("\n\n");
    print_list(Lista2);
    destroy_list(&Lista1);
    destroy_list(&Lista2);
    return 0;
 }