//
// Created by rgr24 on 15/02/2023.
//

#ifndef ADS_WEEK2_EASY_INPUT_H
#define ADS_WEEK2_EASY_INPUT_H

/// interacts with the user, presenting a prompt before asking the user to enter a (valid) float
/// keeps on prompting & asking while the provided float is invalid
/// \param prompt the prompt to print
/// \return the value entered by the user
float input_float(const char * prompt);

#endif //ADS_WEEK2_EASY_INPUT_H
