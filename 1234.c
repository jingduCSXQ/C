#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,c=0;
    int b=2,i=1;
    int ch;
    for(i=1;i<=4;i++)
    {
        printf("请输入一个0~9的数（从千位起）：\n");
        scanf("%d",&ch);
        //getchar();
        while(ch<0||ch>9)
        {
            printf("您输入有误，请重新输入。还有%d次输入机会\n",b);
            scanf("%d",&ch);
           // getchar();
            b--;
            if(b<=0)
                goto end;
        }
        a=ch;
        c=c*10+a;
    }
        printf("输出数值为%d\n",c);
    end: system("pause");
    return (0);

}
