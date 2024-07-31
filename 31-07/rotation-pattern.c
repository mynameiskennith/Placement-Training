#include <stdio.h>

int main(){
    int n;
    printf("ENter the num : ");
    scanf("%d",&n);

    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            printf("%d  ",(r+c)%n+1);
        }
        printf("\n");
    }
}