#include <stdio.h>
#include <string.h>

int main()
{
    char *names[] = {"apple", "mango", "ant", "banana", "cat", "anaconda"};
    int n = sizeof(names) / sizeof(names[0]);
    
    for (int i=0; i<n-1; i++) {
      for (int j = 0; j < n-1-i; j++) {
          if (strcmp(names[j], names[j + 1]) > 0) { 
              char temp[50];
              strcpy(temp, names[j]);               
              strcpy(names[j], names[j + 1]);
              strcpy(names[j + 1], temp);
          }
       }
   }
 
   for (int i=0; i<n; i++) {
       printf("%s\n", names[i]);
   }
    return 0;
}
