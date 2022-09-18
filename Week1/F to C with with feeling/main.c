#include <stdio.h>

int main() {
    
    float F , C ;
    
    
    printf("enter the value of F : ");
    scanf("%f" , &F );
    
    C= (F-32)/1.8 ;
    
    printf("The value with C is : %.2f\n" , C);
    
    if(C<=5)
        printf("Very cold\n");
    
    else if(C>5 && C<=25)
        printf("Cold\n");
    
    else if (C>25 && C<=30)
        printf("hot\n");
    
    else if (C>30)
        printf("Very hot\n");
        
    
    
    
    
    return 0;
}
