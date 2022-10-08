main()
{
int a,b,c;
printf("Enter Value of a, b, c :- ");
scanf("%d%d%d", &a,&b,&c);

if ((b*b)-(4*a*c)>0)
    printf("Real and Distinct Roots");

else if ((b*b)-(4*a*c)==0)
    printf("Real and Equal Roots");

else
     printf("Complex Roots");

getch();
}