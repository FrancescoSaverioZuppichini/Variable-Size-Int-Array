//
//  variabile_Int_Array.h
//  VariableIntArray
//
//  Created by Francesco  on 07/04/16.
//  Copyright © 2016 Francesco Saverio Zuppichini. All rights reserved.
//

#ifndef variable_Int_Array_h
#define variable_Int_Array_h

#include <stdio.h>
#include <stdlib.h>

struct var_int_array;

typedef struct var_int_array var_int_array;

/* Create a new var_int_array and return a pointer to it */
extern var_int_array * var_int_array_new();
/* Free all the memory used by the var_int_array parameter */
extern void var_int_array_destroy( var_int_array *);
/* Return the size of the Array */
extern int var_int_array_size(const var_int_array *);
/* Append a element in the first avariabile position */
extern void var_int_array_append(var_int_array *, int);
/* Remove the last element of the Array  */
extern int var_int_array_pop(var_int_array *);
/* Return the index elemenet of the Array */
extern int var_int_array_get(const var_int_array *, size_t index);
/* Put a element in the given index of the Array */
extern void var_int_array_put(var_int_array *, size_t index,int);
/* Print all the Array, each element is separated by the given char */
extern void var_int_array_print(const var_int_array *, char);



#endif /* variabile_Int_Array_h */
