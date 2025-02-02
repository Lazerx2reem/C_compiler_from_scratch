#ifndef clox_chunk-h
#define clox_chunk-h

#include "common.h"

typedef enum{
	OP_RETURN, /*return from the current function*/
} Opcode;

typedef struct {
 	int count;
	int capacity; 
	uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, unit8_t byte);

#endif
