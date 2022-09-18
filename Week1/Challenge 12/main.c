#include <stdio.h>

int main() {
    
    int number , rnumber = 0 ;
    
    printf("Enter a number to revers : ");
        scanf("%d" , &number );
    
    while (number != 0)
   
    {
        rnumber = rnumber * 10 ;
        rnumber = rnumber + number % 10;
        number = number / 10;
        
    }
    
    printf("revers number is : %d\n" , rnumber);
    return 0;
}
