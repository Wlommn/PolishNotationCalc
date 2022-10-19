#include "parser.h"

Queue* GetPostfixLexems(char* string, int stringSize) {
    Queue* lexems = InitQueue();
    Stack* stack = InitStack();
    char take[2];
    for (int i = 0; i < stringSize; i++) {
        char currentSimbol = string[i];
        if (CheckNumber(currentSimbol)) {
            Enqueue(lexems, ParseNumber(string, &i, stringSize));
        } else if (CheckOpenHooks(currentSimbol)) {
            PushStackItem(stack, currentSimbol);
        } else if (CheckCloseHooks(currentSimbol)) {
            while (stack->size > 0 && (take[0] = PopStackItem(stack) != '(')) {
                Enqueue(lexems, take);
            }
        } else if (CheckOperators(currentSimbol)) {
            char operator = currentSimbol;
            if ((currentSimbol == '-' && (i == 0 || (i > 1 && !CheckNumber(string[i- 1]))))) {
                operator = '~';
            }
            while (stack->size > 0 && GetOperandPrior(take[0] = PopStackItem(stack)) >= GetOperandPrior(operator)) {
                Enqueue(lexems, take);
            }
            PushStackItem(stack, operator);
        }
    }
    for (int i = 0; i < stack->size; i++) {
        take[0] = PopStackItem(stack);
        Enqueue(lexems, take);
    }
    RemoveStack(stack);
    return lexems;
}

PRIOR GetOperandPrior(char currentSimbol) {
    PRIOR result;
    switch (currentSimbol) {
    case '~':
        result = UMIN;
        break;
    case '+':
    case '-':
        result = SUM_MIN;
        break;
    case '*':
    case '/':
        result = MUL_DIV;
        break;
    case '^':
    case 's':
    case 'c':
    case 't':
    case 'l':
        result = FUNC_POW;
        break;
    default:
        result = NAN;
        break;
    }
    return result;
}

char* ParseNumber(char* string, int* index, int stringSize) {
    char* result = malloc(sizeof(char) + 1);
    int i = 0;
    for (; *index < stringSize; *index += 1) {
        if (CheckNumber(string[*index])) {
            i++;
            result = realloc(result, sizeof(result) + i);
            result[*index] = string[*index];
        } else {
            *index -= 1;
            break;
        }
    }
    return result;
}

bool CheckOperators(char currentSimbol) {
    bool result = false;
    if (strchr(IS_OPERATOR, currentSimbol) != NULL) {
        result = true;
    }
    return result;
}

bool CheckNumber(char currentSimbol) {
    bool result = false;
    if (strchr(IS_NUMBER, currentSimbol) != NULL) {
        result = true;
    }
    return result;
}

bool CheckFunctionLogarithm(char* string, int index) {
    bool result = false;
    char subString[2] = {string[index], string[index + 1]};
    if (strcmp(subString, "ln") == 0) {
        result = true;
    }
    return result;
}

// int CheckFunctionTangent(char currentSimbol) {
    
// }

// int CheckFunctionCotangent(char currentSimbol) {
    
// }

// int CheckFunctionSinus(char currentSimbol) {
    
// }

// int CheckFunctionCosinus(char currentSimbol) {
    
// }

bool CheckOpenHooks(char currentSimbol) {
    bool result = false;
    if (currentSimbol == '(') {
        result = true;
    }
    return result;
}

bool CheckCloseHooks(char currentSimbol) {
    bool result = false;
    if (currentSimbol == ')') {
        result = true;
    }
    return result;
}
