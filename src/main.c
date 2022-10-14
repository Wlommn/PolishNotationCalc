#include "../lib/calculation/calculation.h"
#include "../lib/input/input.h"
#include "../lib/parser/parser.h"

int main() {
    int stringSize = 0;
    char* inputedString = Input(&stringSize);

    for (int i = 0; i < stringSize - 1; i++) {
        printf("%c", inputedString[i]);
    }
    free(inputedString);
    return 0;
}
