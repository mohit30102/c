//Write C program use switch statement. Display Monday to Sunday.//
#include<stdio.h>
int main(){
    char ch;
    printf("Enter The First Word Of The DAY :");
    scanf("%c",&ch);

    switch (ch){
    case 'M':
    case 'm':
            printf("Monday");
            break;
    case 'T':
            printf("Tuesday");
            break;
    case 'W':
    case 'w':
            printf("Wednesday");
            break;
    case 't':
            printf("Thursday");
            break;
    case 'F':
    case 'f':
            printf("Friday");
            break;
    case 'S':
            printf("Saturday");
            break;
    case 's':
            printf("Sunday");
            break;
    default:
            printf("invalid Word in your Day");

            
    }
        
    return 0;

    }
