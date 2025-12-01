#include <stdio.h>
#include <string.h>
#include "../include/utils.h"

void utils_clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int utils_get_int(void) {
    int num;
    while (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer: ");
        utils_clear_input_buffer();
    }
    utils_clear_input_buffer();
    return num;
}

float utils_get_float(void) {
    float num;
    while (scanf("%f", &num) != 1) {
        printf("Invalid input. Please enter a float: ");
        utils_clear_input_buffer();
    }
    utils_clear_input_buffer();
    return num;
}

double utils_get_double(void) {
    double num;
    while (scanf("%lf", &num) != 1) {
        printf("Invalid input. Please enter a double: ");
        utils_clear_input_buffer();
    }
    utils_clear_input_buffer();
    return num;
}

char utils_get_char(void) {
    char ch;
    scanf(" %c", &ch);
    utils_clear_input_buffer();
    return ch;
}

char* utils_get_string(char *str, size_t size) {
    if (fgets(str, size, stdin) != NULL) {
        str[strcspn(str, "\n")] = '\0';
    }else {
        return NULL;
    }
    return str;
}

void utils_pause(void) {
    printf("Press any key to continue...\n");
    getchar();
}
