main()
{
int marks;
printf("Enter your marks ");
scanf("%d",&marks);

if (marks<100 && marks>80)
{
    printf("You are pass with A grade");
}
else if (marks<=80 && marks>70)
{
    printf("You are pass with B grade");
}
else if (marks<=70 && marks>60)
{
    printf("You are pass with C grade");
}
else if (marks<=60 && marks>50)
{
    printf("You are pass with D grade");
}
else 
{
    printf("You are Fail");
}

return 0;
}