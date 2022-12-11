//
// Created by tblyl on 2022/12/11.
//

#ifndef CLOX_VALUE_H
#define CLOX_VALUE_H

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value * values;
} ValueArray;

void initValueArray(ValueArray * array);
void writeValueArray(ValueArray  * array, Value value);
void freeValueArray(ValueArray * array);

#endif //CLOX_VALUE_H
