#ifndef clox_chunk-h
#define clox_chunk-h

#include "common.h"

typedef enum{
	OP_RETURN, /*return from the current function*/
} Opcode;

typedef struct {
  uint8_t* code;
} Chunk;

#endif
