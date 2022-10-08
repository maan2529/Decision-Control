main()
{
int num1,num2,num3;
printf("Enter Any Three Number ");
scanf("%d%d%d", &num1,&num2,&num3);

if (num1>num2)
{
   if(num1>num3)
   printf("Number 1 is greatest");
   else
   printf("Number 3 is greatest");
}
else
 {
    if (num2>num3)
     printf("Number 2 is greatest");
    else
    printf("number 3 is greatest");  
 }
 
// if (num1>num2 && num1>num3)
// {
//     printf("Num1 is greater than Num2 and num3");
// }
//  else if(num2>num3)
//  {
//      printf("Num2 is greater than Num1 and Num3");
//  }
//  else 
//  {
//      printf("Num3 is greater than Num1 and num2");
//  }

getch();
}
