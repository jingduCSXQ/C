#include <stdio.h>
void main()
{
    int grade,x;
    printf("please enter the student grade:\n");
    scanf("%d",&grade);
    x=grade/10;
    switch (x)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
           printf("�����ɼ�Ϊ ��\n");
           break;
    case 6:
    case 7:
           printf("�����ɼ�Ϊ ��\n");
           break;
    case 8:
        printf("�����ɼ�Ϊ ��\n");
        break;
    case 9:
    case 10:
        printf("�����ɼ�Ϊ ��\n");
        break;
    default:
        printf("��������ֵ��������");
        break;
    }
}
