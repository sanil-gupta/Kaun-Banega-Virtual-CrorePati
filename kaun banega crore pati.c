#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
  printf("                                     WELCOME TO KAUN BANEGA VIRTUAL CROREPATI!!                                                                                                ");
         int no,poi=0;
         char cha[30];
         printf("\n Enter Your Name Please ");
         gets(cha);
         printf("\n Welcome %s BEST OF LUCK!! \n Please press The keys As per The Instructions \n",cha);
         printf("\n Press 1 For Enter In The Match \n Press 2 For Leave The Match \n ");
         scanf("%d",&no);
               if(no!=1)
                     {
                                 printf("\n %s You Loss The Match \n\n Developed By:- Sanil Gupta ",cha);
                                 exit(0);
                      }
   switch(no)
                {
                 case 1:
                      printf("\nQ1:- Who Invented C Programming Language ? \n 1:- Linus Torvalds \n 2:- Dennis Ritchie \n 3:- Todd Lamle \n 4:- None Of The Above \n " );
                      printf("\n Please Select You Choice Between 1,2,3,4 \n");
                      scanf("%d",&no);
                                if(no==2)
                                       {
                                                      printf("\n Congo!! Your Answer is Correct \n");
                                                      poi++;
                                                      printf("Your Score is %d",poi );
                                                      printf("\n");
                                       }
                                else
                                      printf("\n Wrong Answer \n Your Score is %d",poi);
                 case 2:
                       printf("\nQ2:- Who is Known as Father Of Computer ? \n 1:- Charles Babbage \n 2:- Robert Hussen \n 3:- Jhon Kem \n 4:- Thompson Kem \n ");
                        printf("\n Please Select You Choice Between 1,2,3,4 \n");
                       scanf("%d",&no);
                               if(no==1)
                                       {
                                                        printf("\n Congo!! You Answer Is Correct ");
                                                        poi++;
                                                        printf("\n Your Score Is %d",poi);
                                                        printf("\n");
                                       }
                               else
                                    printf("\n OHH!! Wrong Answer \n Your Score is %d",poi);
                 case 3:
                       printf("\nQ3:- C programming Language Is Introduced in which Year ?  \n 1:- 1991 \n 2:- 1979 \n 3:- 1974 \n 4:- 1972 \n ");
                        printf("\n Please Select You Choice Between 1,2,3,4 \n");
                       scanf("%d",&no);
                               if(no==4)
                                     {
                                                       printf("\n Congo!! You Answer Is Correct ");
                                                       poi++;
                                                       printf("\n Your Score Is %d",poi);
                                                       printf("\n");
                                     }
                              else
                                   printf("\n OHH!! Wrong Answer \n Your Score is %d",poi);
                 case 4:
                       printf("\nQ4:- Linux Operating System Is Developed By Whom ?  \n 1:- Charles Babbage \n 2:- Robert Hussen \n 3:- Linus Torvalds \n 4:- Thompson Kem \n ");
                        printf("\n Please Select You Choice Between 1,2,3,4 \n");
                       scanf("%d",&no);
                             if(no==3)
                                   {
                                                      printf("\n Congo!! You Answer Is Correct ");
                                                      poi++;
                                                      printf("\n Your Score Is %d",poi);
                                                      printf("\n");
                                   }
                             else
                                  printf("\n OHH!! Wrong Answer \n Your Score is %d",poi);
                 case 5:
                      printf("\n Q5:- Who Is The Present Prime Minister Of India ? \n 1:- KamalqqNath \n 2:- ShivRaj Singh Chouhan \n 3:- Narendra Modi  \n 4:- None Of The Above \n ");
                       printf("\n Please Select You Choice Between 1,2,3,4 \n");
                      scanf("%d",&no);
                            if(no==3)
                                   {
                                                      printf("\n Congo!! You Answer Is Correct ");
                                                      poi++;
                                                      printf("\n Your Score Is %d",poi);
                                                      printf("\n");
                                   }
                             else
                                 printf("\n OHH!! Wrong Answer \n Your Score is %d",poi);

                 case 6:
                     printf("\n Q6:- Who Is The First Prime Minister Of India ? \n 1:-Jawaharlal Nehru \n 2:- Mahatama Gandhi \n 3:- Viveka Nand \n 4:- ChandraShekar Azad \n ");
                      printf("\n Please Select You Choice Between 1,2,3,4 \n");
                     scanf("%d",&no);
                             if(no==1)
                                 {
                                                      printf("\n Congo!! You Answer Is Correct ");
                                                      poi++;
                                                      printf("\n Your Score Is %d",poi);
                                                      printf("\n");
                                 }
                             else
                                printf("\n OHH!! Wrong Answer \n Your Score is %d",poi);

                case 7:
                     printf("\n Q7:- Linux Operating System Was Introduced In Which year ?  \n 1:- 1999 \n 2:- 1992 \n 3:- 1981 \n 4:- 1991 \n ");
                      printf("\n Please Select You Choice Between 1,2,3,4 \n");
                     scanf("%d",&no);
                         if(no==4)
                                {
                                                   printf("\n Congo!! You Answer Is Correct ");
                                                   poi++;
                                                   printf("\n Your Score Is %d",poi);
                                                   printf("\n");
                                }
                            else
                               printf("\n OHH!! Wrong Answer \n Your Score is %d",poi);

                case 8:
                     printf("\n Q8:- Bijapur Is Known For Its ?  \n 1:- Severe Drought Condition \n 2:- Gol Gumbaz \n 3:- Heavy Rainfall \n 4:- Statue Of Gomateswara \n ");
                      printf("\n Please Select You Choice Between 1,2,3,4 \n");
                     scanf("%d",&no);
                        if(no==2)
                               {
                                                   printf("\n Congo!! You Answer Is Correct ");
                                                   poi++;
                                                   printf("\n Your Score Is %d",poi);
                                                   printf("\n");
                               }
                          else
                             printf("\n OHH!! Wrong Answer \n Your Score is %d",poi);
                case 9:
                     printf("\n Q9:- RajaBhoj Statue Is Situated in Which City In India ?  \n 1:- Bhopal \n 2:- Delhi \n 3:- Hyderabad \n 4:- Kolkata \n ");
                      printf("\n Please Select You Choice Between 1,2,3,4 \n");
                     scanf("%d",&no);
                          if(no==1)
                                {
                                                  printf("\n Congo!! You Answer Is Correct ");
                                                  poi++;
                                                  printf("\n Your Score Is %d",poi);
                                                  printf("\n");
                                }
                         else
                            printf("\n OHH!! Wrong Answer \n Your Score is %d",poi);

                case 10:
                      printf("\n Q10:- Teacher's Day Celebrate In which Date ? \n 1:- 5 september \n 2:- 10 August \n 3:- 28 July \n 4:- 19 April \n ");
                       printf("\n Please Select You Choice Between 1,2,3,4 \n");
                      scanf("%d",&no);
                          if(no==1)
                                {
                                                  printf("\n Congo!! You Answer Is Correct ");
                                                  poi++;
                                                  printf("\n Your Score is %d",poi);
                                                  printf("\n");
                                }
                         else
                            printf("\n OHH!! Wrong Answer \n Your Score Is %d",poi);
            if(poi==1)
            {
                 printf("\n Congratulations!! %s You Won 1 crore Rupees ",cha);
            }
        else if(poi==2)
            {
              printf("\n Congratulations!! %s You Won 2 crore Rupees ",cha);
            }
        else if(poi==3)
            {
              printf("\n Congratulations!! %s You Won 3 crore Rupees ",cha);
            }
        else if(poi==4)
            {
              printf("\n Congratulations!! %s You Won 4 crore Rupees ",cha);
            }
        else if(poi==5)
            {
              printf("\n Congratulations!! %s You Won 5 crore Rupees ",cha);
            }
         else if(poi==6)
            {
              printf("\n Congratulations!! %s You Won 6 crore Rupees ",cha);
            }
          else if(poi==7)
            {
              printf("\n Congratulations!! %s You Won 7 crore Rupees ",cha);
            }
           else if(poi==8)
            {
              printf("\n Congratulations!! %s You Won 8 crore Rupees ",cha);
            }
           else if(poi==9)
            {
              printf("\n Congratulations!! %s You Won 9 crore Rupees ",cha);
            }
          else
            printf("\n Congratulations!! %s you Won 10 crore Rupees",cha);
   }
   printf("\n                                                Thanks You For Playing \n Developed By:- Sanil Gupta \n ");
   getch();
}
