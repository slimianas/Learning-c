#include <stdio.h>
#include <math.h>

int main() {
    
    float x1, y1, x2, y2 ,MN ;
    
    printf("Enter x1 : ");
    scanf("%f" , &x1) ;
    
    printf("Enter y1 : ");
    scanf("%f" , &y1) ;
    
    printf("Enter x2 : ");
    scanf("%f" , &x2) ;
    
    printf("Enter y2 : ");
    scanf("%f" , &y2) ;
    
    MN = ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
    printf("Distance between two points is : %.3f\n" , sqrt(MN));
    
    
    
    
    return 0;
}
