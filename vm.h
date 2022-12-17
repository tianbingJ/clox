//
// Created by tblyl on 2022/12/11.
//

#ifndef CLOX_VM_H
#define CLOX_VM_H

#include "chunk.h"

#define STACK_MAX 256

typedef struct {
    Chunk *chunk;
    uint8_t *ip;
    Value stack[STACK_MAX];
    Value *stackTop;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILER_ERROR,
    INTERPRET_RUNTIME_ERROR,
} InterpretResult;


InterpretResult interpret(Chunk *chunk);

void push(Value value);

Value pop();

void initVM();

void freeVM();


#endif //CLOX_VM_H
