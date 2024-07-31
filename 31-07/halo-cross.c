#include <stdio.h>

int main(){
    int n;
    printf("Enter the num : ");
    scanf("%d",&n);
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            if(r==1||r==n||c==1||c==n||r==c||c==n-r+1)
                printf("*   ");
            else
                printf("    ");
        }
        printf("\n");
    }
}