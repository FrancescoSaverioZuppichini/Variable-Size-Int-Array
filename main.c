//
//  main.c
//  VariableIntArray
//
//  Created by Francesco  on 07/04/16.
//  Copyright © 2016 Francesco Saverio Zuppichini. All rights reserved.
//

#include <stdio.h>
#include "variabile_Int_Array.h"

int main(int argc, const char * argv[]) {
    int i;

    var_int_array *myArray = var_int_array_new();
    for (i = 0; i < 15; i++) {
        var_int_array_append(myArray, i);
    }
    for (i = 0; i < 15; i++) {
        printf("%i\n",var_int_array_get(myArray, i));
    }
    
    var_int_array_print(myArray, '\n');
    
    for (i = 0; i < 15; i++) {
       var_int_array_pop(myArray);
    }
    
    var_int_array_print(myArray, ' ');
    
    var_int_array_destroy(myArray);
    return 0;
}
