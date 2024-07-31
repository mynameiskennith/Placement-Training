#include <stdio.h>

int second(int num1, int num2,int num3){
    if((num1>num2) and (num2>num3))
        printf("%d is 2nd",num2);
    else if((num2>num3) and (num3>num1))
    else if((num3>num1) and (num1>num2))
}

int main(){
    second(1,4,5);
    return 0;
}