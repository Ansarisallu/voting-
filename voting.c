#include<stdio.h>
#include<conio.h>
int ch, count1=0,count2=0,count3=0;
int main()
{
  
int ch;
do{

printf("\n1.votes");
printf("\n2.count");
printf("\nexit");
scanf("%d",&ch);
switch (ch)
{
case 1:
  votes();
  break;
case 2:
counts();
break;
case 3:
printf("enter the 0");
break;
default:
printf("please select valid option");
  break;
}
}while (ch!=0);

return 0;
}

  int votes(){


 printf("__________CONDIDATE @@ LIST      PARTY SYMBOLE_____________");
  printf("\n\t1.bhartijanta party\t1.kamal ka phool ");
  printf("\n\t2.congress party   \t2.hath ka panja  ");
  printf("\n\t3.aam adami party  \t3.jhadu          ");


  printf("\nplease select party and vote selected party");
  scanf("%d",&ch);
  switch (ch)
  {
  case 1:
    printf("\nYour select party is BJP");
    count1++;
     break;
  case 2:
  printf("\nyour select party is congress");
  count2++;
     break;
  case 3:
  printf("\nyour selected party is aam adami aprty");
  count3++;
     break;
  default:
  printf("Please select vailid party number");
     break;
  }
  return 0;
  }

int counts()
{
printf("\nNo of votes:%d",count1);
printf("\nNo of votes:%d",count2);
printf("\nNo of votes:%d",count3);
return 0;

}


