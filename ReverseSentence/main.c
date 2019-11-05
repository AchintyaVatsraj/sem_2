/*
 * Team Details:
 * 1)Achintya Vatsraj 1941101
 * 2) Marsh Roiden 1941122
 *
 * Q) A C Program to reverse a Sentence Using Strings
 *
 */

#include <stdio.h>
void reverseSentence();
int main()
{
    printf("Enter a sentence: \n");
    reverseSentence();
    printf("\n\nThank you for using this Program!\n");
    return 0;
}
void reverseSentence()
{
    char c;
    scanf("%c",&c);
    if(c != '\n')
    {
        reverseSentence();
        printf("%c",c);
    }
}
