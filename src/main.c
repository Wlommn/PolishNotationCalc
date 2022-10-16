#include "../lib/calculation/calculation.h"
#include "../lib/input/input.h"
#include "../lib/parser/parser.h"
#include "../lib/DEFINES.h"

int main() {
    int stringSize = 0;
    char* inputedString = Input(&stringSize);
    if (ValidationInput(inputedString, VALID_STRING) == 1) {
        for (int i = 0; i < stringSize; i++) {
            printf("%c", inputedString[i]);
        }
    } else {
        printf("n/a");
    }
    free(inputedString);
    return 0;
}
