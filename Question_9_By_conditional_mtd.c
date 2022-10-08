main()
{
int num1,num2,num3;
printf("Enter Any Three Number ");
scanf("%d%d%d", &num1,&num2,&num3);

//Effitienty of this programm is more than prevous.....

printf((num1>num2)?(num1>num3)?("Number 1 is greatest"):("Number 3 is greatest"):(num2>num3)?("Number 2 is greatest"):("number 3 is greatest"));

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// (num1>num2)?(num1>num3)?printf("Number 1 is greatest"):printf("Number 3 is greatest"):(num2>num3)?printf("Number 2 is greatest"):printf("number 3 is greatest");


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// if (num1>num2)
// {
//    if(num1>num3)
//    printf("Number 1 is greatest");
//    else
//    printf("Number 3 is greatest");
// }
// else
//  {
//     if (num2>num3)
//      printf("Number 2 is greatest");
//     else
//     printf("number 3 is greatest");  
//  }
 getch();
}
