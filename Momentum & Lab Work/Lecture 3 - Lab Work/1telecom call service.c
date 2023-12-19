//WAP to create/simulate telecom call service conversation scenario using nested switch case.//
//WAP to create/simulate telecom call service conversation scenario using nested switch case.//
#include<stdio.h>
int main(){
  int in,out;

  printf("\n ENTER YOUR CHOICE : \n");
  printf("\n Press 1 For ENGLISH.");
  printf("\n HINDI Ke Liye 2 Dabaye.");
  printf("\n GUJRATI Mate 3 Dabavo.\n");
  scanf("\n %d",&in);

  switch(in){
    case 1: 
    printf("\n Press 1 For Recharge");
    printf("\n Press 2 For Help");
    printf("\n Press 3 For Exit");
    scanf("%d",&out);          

      switch(out){
        case 1:
             printf("\n Recharge Successfully");
              break;
         case 2:
             printf("\n We are happy to our help.!");
              break;
         case 3:
             printf("\n Exit ok.");
              break;
          default :
              printf("\n invalid choice...");
              break;
        }
    break;

    case 2: 
    printf("\n Recharge karne ke liye 1 dabaye");
    printf("\n Sahayta lene karne ke liye 2 dabaye");
    printf("\n Bahar nikal ne ke liye 3 dadbaye");
    scanf("\n ENTER YOUR CHOICE : %d",&out);   

      switch(out){
        case 1:
         printf("\n Aapka recharge safaltapurvak ho gaya. ");
        break;
        case 2:
         printf("\n Aapko kya sahayta chahiye. ");
        break;

        case 3:
         printf("\n Aap bahar nikal gaye ho. ");
        break;

        default :
      printf("\n invalid choice.");
      break;

      }
    break;

    case 3: 
    printf("\n Recharge karva mate 1 dabavo.");
    printf("\n Madad mate 2 dabavo.");
    printf("\n Bar java mate 3 dabavo.");
    scanf("%d",&out);    
    
      switch(out){
        case 1:
         printf("\n Tamaru recharge safaltapurvak thai gayu.");
        break;

        case 2:
         printf("\n Tamari madad prakrita purn thai.");
        break;

        case 3:
         printf("\n Tame bahar aavi gaya cho.");
        break;

          default :
          printf("\n invalid choice.");
          break;
      }
    break;
  }

  return 0;
}
