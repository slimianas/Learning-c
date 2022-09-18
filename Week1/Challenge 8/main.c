#include <stdio.h>

int main()
{
    int A , B , C , V;
    
    printf("Enter value of A : ");
    scanf("%i" , &A);
    
    printf("Enter value of B : ");
    scanf("%i" , &B);
    
    printf("Enter value of C : ");
    scanf("%i" , &C);
    
    V= (A+B+C);
    
    printf("The sum of A+B+C is : %i\n " , V );
    printf("The Average of A+B+C is : %i\n ", V/3 );

    return 0;
}
