#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char *to_alternating_case(const char *s)
{
    char *temp = calloc(strlen(s) + 1, sizeof(char));
    int count = 0;
    while (*s)
    {
        if (islower(*s) > 0)
        {
            temp[count] = *s - 32;
        }
        else if (isupper(*s) > 0)
        {
            temp[count] = *s + 32;
        }
        else
            temp[count] = *s;
        
        count++;
        s++;
    }
    return temp;   
}

#include <stdio.h>
int main(void)
{
    printf("%s\n", to_alternating_case("hello world")); // => "HELLO WORLD"
    printf("%s\n", to_alternating_case("hello WORLD")); // => "HELLO world"
    printf("%s\n", to_alternating_case("HeLLo WoRLD")); // => "hEllO wOrld"
    printf("%s\n", to_alternating_case("HELLO WORLD")); // => "hello world"
    printf("%s\n", to_alternating_case("12345")); // => "12345" (Non-alphabetical characters are unaffected)
    printf("%s\n", to_alternating_case("1a2b3c4d5e")); // => "1A2B3C4D5E"
    printf("%s\n", to_alternating_case("String.prototype.toAlternatingCase")); // => "sTRING.PROTOTYPE.TOaLTERNATINGcASE"

    return (0);

}