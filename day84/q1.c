Q134 Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status status;

    status = SUCCESS;

    if (status == SUCCESS) {
        printf("Operation was successful.\n");
    }
    else if (status == FAILURE) {
        printf("Operation failed.\n");
    }
    else if (status == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    return 0;
}