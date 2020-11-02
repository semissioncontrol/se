#include <stdio.h>

int main(int argc, char** argv) {
    printf("%s", argv[0]);
    if (argv[1] == "bak") {
        printf("bak\n");
    } else {
        printf("%s: command not found: %s\n", argv[0], argv[1]);
    }
    return 0;
}
