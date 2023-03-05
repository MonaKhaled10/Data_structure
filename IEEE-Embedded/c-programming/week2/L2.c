#include <stdio.h>

int main()
{
    int n;
    printf("Input N:");
    scanf("%d",&n);
    printf("Natural numbers from %d-1 in reverse: ",n);
    for(int i=n;i>=1;i--){
    printf("%d ", i);

    }

    return 0;
}