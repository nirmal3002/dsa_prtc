#include<stdio.h>
#include<stdlib.h>
 main()
{
    int choice=1,a,b;
    
    while (choice!=5)
    {
      printf("\n menu 1=add ,2=sub ,3=mul ,4=div 5=mod ");
      printf("\n enter the choice:");
    scanf("%d",&choice);
    if(choice>=6)
    exit(0);
    printf("enter the value of a&b:");
    scanf("%d%d",&a,&b);
    
    
    switch (choice)
    {
    case 1:printf("the addition is:%d",a+b);
            break;
    case 2:printf("the substraction is:%d",a-b);
            break;
    case 3:printf("the multiplication is:%d",a*b);
            break;
    case 4:printf("the division is:%d",a/b);
            break;
    case 5:printf("the modulus is:%d",a%b);
            break;
    }
    }

}
