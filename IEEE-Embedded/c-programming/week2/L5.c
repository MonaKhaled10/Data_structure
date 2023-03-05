#include <stdio.h>

int main()
{
    int n;
    printf("Input Upper limit :");
    scanf("%d",&n);
    printf("odd numbers from 1-%d : ",n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
    printf("%d ", i);
    }

    }

    return 0;
}
