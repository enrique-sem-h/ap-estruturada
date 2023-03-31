#include <stdio.h>

int main(){

    int x = 2, y = 0;

    while(x < 60){
        printf("%d\n", x);
        x = x * 2;
        y+= 10;
    }
}
