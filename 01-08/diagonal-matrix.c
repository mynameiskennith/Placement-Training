#include <stdio.h>

int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    for(int i=0;i<4;i++,printf("\n")){
        for(int j=0;j<4;j++){
            if(i==j) 
                printf("%d ",arr[i][j]);
            else 
                printf("   ");
        }
    }
}