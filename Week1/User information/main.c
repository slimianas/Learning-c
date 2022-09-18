
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ln[25];
    char fn[20];
    char sex[5];
    char phone[10];
    int  age;
    
//    userinformation
    
    printf("Type your Last name : ") ;
    scanf("%s" , &ln);
    
    printf("Type your First name : ") ;
    scanf("%s" , &fn);
    
    printf("Type your age : ") ;
    scanf("%d" , &age) ;
    
    printf("Type your sex : ");
    scanf("%s" , &sex) ;
    
    printf("Type your phone number : ");
    scanf("%s" , &phone) ;
    
//    Displayuserinformation
    
    printf("Your last name is : %s\n" , ln) ;
    printf("Your first name is : %s\n" , fn) ;
    printf("Your age is : %d\n" , age) ;
    printf("And u are a : %s\n" , sex) ;
    printf("Your phone number is : %s\n" , phone);
    

    return 0;

}
