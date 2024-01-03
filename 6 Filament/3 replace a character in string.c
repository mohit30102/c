//3.Wap to replace a character in string. ex= Rinkam //replace character = m //new character = l
#include<stdio.h>
#include<string.h>
int main(){
     char str[20],replace,new;
     int i;
     printf("Enter Name:");
     gets(str);
     printf("Your Name Is:");
     puts(str);

     printf("\n Enter char you went to replace");
     fflush(stdin);
     scanf("%c",&replace);

     printf("\n Enter new char you went to add");
     fflush(stdin);
     scanf("%c",&new);

     for ( i = 0;str[i]!='\0'; i++)
     {
       if (str[i]==replace){
        str[i]=new;
       } 
     }
     printf("\n After  replace name is .....");
     puts(str);

    return 0;
}
