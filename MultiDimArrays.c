#include <stdio.h>
void main(void){
int a[2][5] ={ 
            {2, 3, 4, 6, 3},
            {1, 2, 6, 2, 6}
            };

int b;
int c;
int i;

while (i < 10){
    
    for(b = 0; b < 2; b++){
        for(c = 0; c < 5; c++){
            printf("%d, %d", a[i][i]);

        }
    }
    i++;
}


}