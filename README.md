#Variable Size Int Array [![Build Status](https://travis-ci.org/FrancescoSaverioZuppichini/Variable-Size-Int-Array.svg?branch=master)](https://travis-ci.org/FrancescoSaverioZuppichini/Variable-Size-Int-Array)
##A easy array-object implemenent in c

### *Implemented by Francesco Saverio Zuppichini*

###How to use it
```
#include "variable_Int_Array.h" 
```
In your source file 
####Create a new array
```
var_int_array *myArray = var_int_array_new();
```

####Use the API method 
All the API method are defined in *variabile_Int_Array.h*

####Append an element:

```
var_int_array_append(myArray, <element>);
```

####Pop an element:

```
var_int_array_pop(myArray);
```
It returns the popped element

####Get an element:

```
var_int_array_get(myArray,<index>);
```
It returns the getted element

