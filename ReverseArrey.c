#include <stdio.h>

int main()
{   int arr[10],n;
    int j=0,b[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1,j=0;i>=0;i--,j++){
        b[j]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=b[i];
        printf("%d ",arr[i]);
    }
    return 0;
}
