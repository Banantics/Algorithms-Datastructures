//
// Created by rgr24 on 15/02/2023.
//

#include "easy_input.h"
#include <stdio.h>

/// interacts with the user, presenting a prompt before asking the user to enter a (valid) float
/// keeps on prompting & asking while the provided float is invalid
/// \param prompt the prompt to print
/// \return the value entered by the user
float input_float(const char *prompt) {
    float result;
    printf("%s: ", prompt);
    int matches = scanf("%f", &result);
    while (getchar() != '\n');  // consume input until end of line
    while (matches < 1) {
        printf("Invalid input, try again.\n%s: ", prompt);
        matches = scanf("%f", &result);
        while (getchar() != '\n'); // consume input until end of line
    }
    return result;
}
