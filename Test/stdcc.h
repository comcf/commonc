/* stdcc.h */
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "string.h"


typedef uint8_t byte;
typedef int8_t sbyte;
typedef uint16_t slab;
typedef int16_t sslab;
typedef uint32_t slob;
typedef int32_t sslob;
typedef uint64_t word;
typedef char *string;

extern int print(const char* s);
extern int println(const char *s);
extern int Write(const char* s);
extern int WriteLine(const char *s);
