#include <stdio.h>
int main()
{
    //变量声明
    int array[10];

    {   int j = 0;
        
        //循环输入
    while (j<10){
        printf("输入第%d个数",j+1);
        scanf("%d",&array[j]);
        j = j+1;}
    }

    {   int j = 0;

        //循环输出
        for(j=0;j<10;j++){
            printf("%d ",array[j]);}
    }

    //冒泡排序
    for (int i=0;i<10;i++){
        for (int j=0;j<10-i-1;j++){
            if (array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }

        }

    }
    
    //输出排序后的数组
    printf("\n排序后的数组: ");
    for (int i=0;i<10;i++){
        printf("%d ",array[i]);
    }

}