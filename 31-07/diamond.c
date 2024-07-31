#include <stdio.h>

int main(){
    int n;
    printf("ENter the num : ");
    scanf("%d",&n);

    for(int r=1;r<=n;r++){
        for(int spaces=1;spaces<=n-r;spaces++){
            printf("    ");
        }
        for(int star=1;star<=2*r-1;star++){
            printf("*   ");
        }
        for(int star=1;star<=2*r-1;star++){
            printf("*   ");
        }
        for(int spaces=1;spaces<=n-r;spaces++){
            printf("    ");
        }
        printf("\n");
    }
}