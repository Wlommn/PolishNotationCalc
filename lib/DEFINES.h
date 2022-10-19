#ifndef LIB_DEFINES_H_
#define LIB_DEFINES_H_

#define VALID_STRING "0123456789sinctlaoxy()-+*/^"
#define IS_OPERATOR "+-*/sctl~" 
#define IS_NUMBER "0123456789"

typedef enum bool
{
    false,
    true
} bool;

#define DEFAULT_VALUE '\0'

typedef enum PRIOR
{
    NAN = 0,
    HOOKS = 1,
    SUM_MIN = 2,
    MUL_DIV = 3,
    FUNC_POW = 4,
    UMIN = 5
} PRIOR;

#endif  //  LIB_DEFINES_H_