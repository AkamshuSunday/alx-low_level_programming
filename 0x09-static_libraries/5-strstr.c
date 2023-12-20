#include "main.h"
#include <stddef.h>

/**
 * custom_strstr - Locates the first occurrence of a substring in a string.
 *
 * This function mimics the behavior of the standard library function strstr().
 * It searches for the first occurrence of the null-terminated substring target
 * in the null-terminated string source.
 *
 * @param source: The main string to be searched.
 * @param target: The substring to be found in source.
 * @return: A pointer to the first occurrence of target in source,
 *          or NULL if target is not found in source.
 */
char *custom_strstr(char *source, char *target)
{
    for (; *source != '\0'; source++)
    {
        char *current_source = source;
        char *current_target = target;

        while (*current_source == *current_target && *current_target != '\0')
        {
            current_source++;
            current_target++;
        }

        if (*current_target == '\0')
            return source;
    }

    return (NULL);
}

