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
           printf("该生成绩为 差\n");
           break;
    case 6:
    case 7:
           printf("该生成绩为 中\n");
           break;
    case 8:
        printf("该生成绩为 良\n");
        break;
    case 9:
    case 10:
        printf("该生成绩为 优\n");
        break;
    default:
        printf("您输入数值有误，请检查");
        break;
    }
}
