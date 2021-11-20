#include <stdio.h>
#include <string.h>
int main()
{   char arr[10];
    int j;
    scanf("%s",&arr);
    j=strlen(arr)-1;
    for(int i=0;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            printf("Not palindrome");
            return 0;
        }
    }
    printf("Palindrome ");
    return 0;
}
