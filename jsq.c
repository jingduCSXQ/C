#include <stdio.h>
void main()
{
    int a,b,c,x;
    printf("请输入a（数值）b（+ - * /分别用1，2，3，4代替）c（数值）：\n");
    scanf("%d %d %d",&a,&b,&c);
    switch (b)
    {
    case 1 :
        x=a+c;
        printf("%d\n",x);
        break;
    case 2:
        x=a-c;
        printf("%d\n",x);
        break;
    case 3:
        x=a*c;
        printf("%d\n",x);
        break;
    case 4:
        x=a/c;
        printf("%d\n",x);
        break;
        default:
        printf("您输入字符有误，请检查\n");
        break;
    }
}
