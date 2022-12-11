//
// Created by tblyl on 2022/12/11.
//
#include "value.h"
#include "common.h"
#include "memory.h"

void initValueArray(ValueArray * array) {
    array->values = NULL;
    array->capacity = 0;
    array->count = 0;
}

void writeValueArray(ValueArray * array, Value value) {
    if (array->capacity < array->count + 1) {
        int oldCap = array->capacity;
        int newCap = GROW_CAPACITY(oldCap);
        array->values = GROW_ARRAY(Value, array->values, oldCap, newCap);
    }
    array->values[array->count++] = value;
}

void freeValueArray(ValueArray * array) {
    FREE_ARRAY(Value , array->values, array->capacity);
    initValueArray(array);
}
