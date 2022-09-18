#include <stdio.h>
#include <math.h>

int main() {
    
    float radius , c ;
    
    
    printf("Enter the radius of the circle : ");
    scanf("%f" , &radius);
    
    c = 2*M_PI*radius;
    
    printf("circumference of the circle is : %.2f\n" , c);
    
    

    return 0;
}
