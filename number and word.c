#include <stdio.h>
void main()
{
    char (x);
    printf("������һ���ַ�\n");
    scanf("%c",&x);
    if ((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
    {
        printf("���ַ�Ϊһ����ĸ\n");
    }
    else if (x>='0'&&x<='9')
    {
        printf("���ַ�Ϊһ������\n");
    }
    else
    {
        printf("��������ַ���������\n");
    }
}
