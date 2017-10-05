#include <stdio.h>
void main()
{
    char (x);
    printf("请输入一个字符\n");
    scanf("%c",&x);
    if ((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
    {
        printf("该字符为一个字母\n");
    }
    else if (x>='0'&&x<='9')
    {
        printf("该字符为一个数字\n");
    }
    else
    {
        printf("您输入的字符有误，请检查\n");
    }
}
