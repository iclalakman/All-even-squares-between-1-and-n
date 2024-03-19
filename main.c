#include <stdio.h>

int main() {
    int n;
    int i=1;

    printf("Please enter n: ");
    scanf("%d",&n);

    printf("Even squares are: \n");
    
    while ( i*i <= n ){
        if (i%2==0){
            printf("%d\n",i*i);}
        i = i + 1;
    }
    return 0;
}




