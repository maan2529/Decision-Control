main()
{
int year;
printf("Enter year to check whether year is leap or not ");
scanf("%d",&year);
if (year%100==0)
{
    if(year%400==0 )
    printf("Year is Leap Year...");
    else
    printf("Year is not Leap Year...");
}
else
{
    if(year%4==0 )
    printf("Year is Leap Year...");
    else
    printf("Year is not Leap Year...");

}

getch();
}