#include <stdio.h>
#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char *argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    int constant = addConstant(&chunk, 1.2);
    int constant2 = addConstant(&chunk, 2.2);
    writeChunk(&chunk, OP_CONSTANT, 101);
    writeChunk(&chunk, constant, 101);
    writeChunk(&chunk, OP_CONSTANT, 102);
    writeChunk(&chunk, constant2, 102);
    writeChunk(&chunk, OP_RETURN, 102);

    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}
