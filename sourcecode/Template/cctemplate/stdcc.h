/* stdcc.h */
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "string.h"

typedef int (*printf_alias)(const char *format, ...);
#define print(printf_alias) print(printf_alias)
#define Write(printf_alias) printf(printf_alias)

typedef int (*puts_alias)(const char *format);
#define WriteLine(puts_alias) puts(puts_alias)
#define println(puts_alias) puts(puts_alias)

typedef uint8_t byte;
typedef int8_t sbyte;
typedef uint16_t slab;
typedef int16_t sslab;
typedef uint32_t slob;
typedef int32_t sslob;
typedef uint64_t word;
typedef char *string;
