#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[11];
    char ch2[11];
    scanf("%s%s", &ch1, &ch2);
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);

    printf("%d %d\n", len1, len2);
    
    char A[11];
    strcpy(A, ch1);
    printf("%s\n", strcat(A, ch2));

    char temp = ch1[0];
    ch1[0] = ch2[0];
    ch2[0] = temp;

    printf("%s %s", ch1, ch2);

    return 0;
}
