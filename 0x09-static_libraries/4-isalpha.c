#include "main.h"

/**
 * custom_isalpha - Checks if the given character is an alphabetic character.
 *
 * This function mimics the behavior of the standard library function isalpha().
 * It checks whether the provided character is an alphabetic character (a-z or A-Z).
 *
 * @param ch: The character to be checked.
 * @return: 1 if ch is an alphabetic character, 0 otherwise.
 */
int custom_isalpha(int ch)
{
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

