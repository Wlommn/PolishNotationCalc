#ifndef LIB_DEFINES_H_
#define LIB_DEFINES_H_

#define VALID_STRING "0123456789sinctlaoxy()-+^"
#define IS_NUMBER "0123456789"

typedef enum bool
{
    false,
    true
} bool;

#define DEFAULT_VALUE '\0'

typedef enum PRIOR
{
    HOOKS = 1,
    SUM = 2,
    MIN = 2,
    MUL = 3,
    DIV = 3,
    POW = 4,
    UMIN = 5
} PRIOR;

#endif  //  LIB_DEFINES_H_