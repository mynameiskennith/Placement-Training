#include <stdio.h>

int main(){
    int n;
    printf("ENter the num : ");
    scanf("%d",&n);

    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            if(r==1||r==n||c==1||c==n)
                printf("*   ");
            else
                printf("    ");
        }
        printf("\n");
    }
}