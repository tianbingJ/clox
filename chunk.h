//
// Created by tblyl on 2022/12/10.
//

#ifndef CLOX_CHUNK_H
#define CLOX_CHUNK_H
#include "common.h"
#include "value.h"

typedef enum {
    OP_RETURN,
    OP_CONSTANT = 100,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t * code;
    int *lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk *chunk);

void freeChunk(Chunk *chunk);

void writeChunk(Chunk *chunk, uint8_t byte, int line);

int addConstant(Chunk *chunk, Value value);

#endif //CLOX_CHUNK_H
