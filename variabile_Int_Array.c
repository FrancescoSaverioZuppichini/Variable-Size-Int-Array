//
//  variabile_Int_Array.c
//  VariableIntArray
//
//  Created by Francesco  on 07/04/16.
//  Copyright © 2016 Francesco Saverio Zuppichini. All rights reserved.
//

#include "variabile_Int_Array.h"
#define BASIC_CAP 10
struct var_int_array{
    
    int size;
    int cap;
    int *list;

};

var_int_array* var_int_array_new(){
    
    var_int_array *new_array = malloc(sizeof(var_int_array));
    
    new_array->size = 0;
    new_array->cap = BASIC_CAP;
    new_array->list = malloc(sizeof(int)*BASIC_CAP);
    
    return new_array;
}

void var_int_array_destroy(var_int_array * this){
    
    free(this);
}

int var_int_array_size(const var_int_array * this){
    
    return this->size;
}

void var_int_array_append(var_int_array *this, int el){
    
    if(this->size == this->cap){
        /* need to alloc new memory */
        this->cap *= 2;
        this->list = realloc(this->list, this->cap);
    }
    this->list[this->size] = el;
    this->size++;
    
}

int var_int_array_pop(var_int_array * this){
    int temp;
    temp = this->size;
    
    this->size--;
    
    return this->list[temp];
}

int var_int_array_get(const var_int_array * this, size_t index){

    return this->list[index];
}

void var_int_array_put(var_int_array * this, size_t index, int el){
    if(index > this->size )
        return;
    
    this->list[index] = el;
}

void var_int_array_print(const var_int_array * this, char c){
    int i;
    
    for (i = 0; i< this->size; i++) {
        printf("%i",var_int_array_get(this, i));
        putchar(c);
    }
}
