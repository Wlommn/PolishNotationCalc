#include "../lib/calculation/calculation.h"
#include "../lib/input/input.h"
#include "../lib/parser/parser.h"
#include "../lib/DEFINES.h"

int main() {
    int stringSize = 0;
    char* inputedString = Input(&stringSize);
    Queue* lexems = GetPostfixLexems(inputedString, stringSize);
    if (ValidationInput(inputedString, VALID_STRING)) {
        while (lexems->size > 0) {
            printf("%s", Dequeue(lexems));
        }
    } else {
        printf("n/a");
    }
    free(inputedString);
    FreeQueue(lexems);
    return 0;
}
