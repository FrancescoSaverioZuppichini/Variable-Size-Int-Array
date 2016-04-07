//
//  variabile_Int_Array.h
//  VariableIntArray
//
//  Created by Francesco  on 07/04/16.
//  Copyright © 2016 Francesco Saverio Zuppichini. All rights reserved.
//

#ifndef variabile_Int_Array_h
#define variabile_Int_Array_h

#include <stdio.h>
#include <stdlib.h>

struct var_int_array;
typedef struct var_int_array var_int_array;

extern var_int_array * var_int_array_new();
extern void var_int_array_destroy( var_int_array *);

extern int var_int_array_size(const var_int_array *);
extern void var_int_array_append(var_int_array *, int);
extern int var_int_array_pop(var_int_array *);
extern int var_int_array_get(const var_int_array *, size_t index);
extern void var_int_array_put(var_int_array *, size_t index,int);
extern void var_int_array_print(const var_int_array *, char);



#endif /* variabile_Int_Array_h */
