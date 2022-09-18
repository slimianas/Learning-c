#include <stdio.h>
#include <math.h>


int main() {
    
    float length , width , rectangle ;
    
    printf("Please enter the length here : ");
        scanf("%f" , &length ) ;
    
    printf("Now please enter the width : ");
        scanf("%f" , &width ) ;
    
    rectangle = 2*(length+width);
    
    printf("Circumference of the rectangle is : %.2f\n" , rectangle ) ;
    

    return 0;
}
