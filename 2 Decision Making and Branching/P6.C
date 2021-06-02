// P16. Accept a character and check whether it is vowel or consonant.

#include <stdio.h>
#include <conio.h>

int main()
{
    char chr;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter a character:");
    scanf("%c", &chr);
    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U');

    if (chr >= 65 && chr <= 122)
    {
        // evaluates to 1 (true) if c is a vowel
        if (lowercase_vowel || uppercase_vowel)
            printf("%c is a vowel.", chr);
        else
            printf("%c is a consonant.", chr);
    }
    else
    {
        printf("It is neither vowel nor consonant.");
    }
    return 0;
}