#include <stdio.h>


int *my_strcmp(const char *a, const char *b) {
    while (*a == *b) {
        if (*a == '\0') {
            return 0;
        }
        a++;
        b++;
    }
    return *a - *b;
}

int main()
{
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));
    
    return 0;
}
