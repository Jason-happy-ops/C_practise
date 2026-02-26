#include <stdio.h>
int add (int a, int b)
{return a+b; }

int main()
{
    //变量声明
    int num1, num2, sum;

    //用户输入
    printf("Enter two integers:");
    scanf("%d %d",&num1,&num2);

    //函数调用
    sum = add(num1,num2);

    printf("%d + %d = %d\n",num1 , num2 ,sum);

}