#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,c=0;
    int b=2,i=1;
    int ch;
    for(i=1;i<=4;i++)
    {
        printf("������һ��0~9��������ǧλ�𣩣�\n");
        scanf("%d",&ch);
        //getchar();
        while(ch<0||ch>9)
        {
            printf("�������������������롣����%d���������\n",b);
            scanf("%d",&ch);
           // getchar();
            b--;
            if(b<=0)
                goto end;
        }
        a=ch;
        c=c*10+a;
    }
        printf("�����ֵΪ%d\n",c);
    end: system("pause");
    return (0);

}
