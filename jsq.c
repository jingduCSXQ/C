#include <stdio.h>
void main()
{
    int a,b,c,x;
    printf("������a����ֵ��b��+ - * /�ֱ���1��2��3��4���棩c����ֵ����\n");
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
        printf("�������ַ���������\n");
        break;
    }
}
