#include<stdio.h>
int a;//a查询的年份
calendar_year(int year)
{
    if ((year%100!=0)&&(year%4==0)||(year%400==0))
		return 366;
	else
		return 365;
}
main()
{
    int b,c; //  b记录闰年平年的天数   c，i，j评定对应星期时用的变量
    int k=6; //k==6  00年的一月一号对应的星期六
    int month=1,g=1;//month是每年的月份   g是每年一月一号的定义
    int month_days,i,h,day;//h用来计数循环的星期数  day用来计数每天天数   month_days是每月天数
    int days[125];//100年以内的所有一月一号的星期，其中25个数值为无效数值
    printf("please enter a year which you want to search(2000~2099):\n");
    scanf("%d",&a);
    b=calendar_year(a);
    for (c=1;c<=125;c++)
        {
            days[c]=k;
            k++;
            if (k==8)
                k=1;
        }
        if(b==366)
          {
              i=a%100;
              printf(" %d年日历如下:\n",a);
              for (month=1;month<=12;month++)
                {
                    switch (month)
                    {
                        case 1:
                            month_days=31;
                            break;
                        case 3:
                            month_days=31;
                            break;
                        case 5:
                            month_days=31;
                            break;
                        case 7:
                            month_days=31;
                            break;
                        case 8:
                            month_days=31;
                            break;
                        case 10:
                            month_days=31;
                            break;
                        case 12:
                            month_days=31;
                            break;
                        case 4:
                            month_days=30;
                            break;
                        case 6:
                            month_days=30;
                            break;
                        case 9:
                            month_days=30;
                            break;
                        case 11:
                            month_days=30;
                            break;
                        default :
                            month_days=29;

                    }
                    printf("\n");
                    printf("******************************\n");
                    printf("       ******%d月******\n",month);
                    printf("  日  一  二  三  四  五  六\n");
                    if (month==1)
                    {
                        switch(days[i/4+i])
                        {
                            case 7:
                                printf("%4d",g);
                                break;
                            case 1:
                                printf("%8d",g);
                                break;
                            case 2:
                                printf("%12d",g);
                                break;
                            case 3:
                                printf("%16d",g);
                                break;
                            case 4:
                                printf("%20d",g);
                                break;
                            case 5:
                                printf("%28d",g);
                                break;
                            case 6:
                                printf("%28d\n",g);
                                break;
                        }
                        h=days[i/4+i+1];
                        h++;
                        for (day=2;day<=month_days;day++)
                        {
                            if(h==7)
                                printf("\n");
                                printf("%4d",day);
                                h++;
                                if(h==8)
                                    h=1;

                        }
                    }
                    if(month!=1)
                    {
                        switch(h)
                        {
                            case 7:
                            printf("%4d",g);
                                break;
                            case 1:
                            case 8:
                                printf("%8d",g);
                                break;
                            case 2:
                                printf("%12d",g);
                                break;
                            case 3:
                                printf("%16d",g);
                                break;
                            case 4:
                                printf("%20d",g);
                                break;
                            case 5:
                                printf("%24d",g);
                                break;
                            case 6:
                                printf("%28d\n",g);
                                break;
                        }
                        h++;
                        for (day=2;day<=month_days;day++)
                        {
                            if(h==8)
                                h=1;
                                if(h==9)
                                    h=2;
                                    if(h==7)
                                        printf("\n");
                                        printf("%4d",day);
                                        h++;
                        }
                    }
                }
                printf("\n******************************");
          }
          if(b==365)
          {
              i=a%100;
              printf(" %d年日历如下：\n",a);
              for (month=1;month<=12;month++)
                {
                    switch (month)
                    {
                        case 1:
                            month_days=31;
                            break;
                        case 3:
                            month_days=31;
                            break;
                        case 5:
                            month_days=31;
                            break;
                        case 7:
                            month_days=31;
                            break;
                        case 8:
                            month_days=31;
                            break;
                        case 10:
                            month_days=31;
                            break;
                        case 12:
                            month_days=31;
                            break;
                        case 4:
                            month_days=30;
                            break;
                        case 6:
                            month_days=30;
                            break;
                        case 9:
                            month_days=30;
                            break;
                        case 11:
                            month_days=30;
                            break;
                        default :
                            month_days=28;

                    }
                    printf("\n");
                    printf("******************************\n");
                    printf("       ******%d月******\n",month);
                    printf("  日  一  二  三  四  五  六\n");
                    if (month==1)
                    {
                        switch(days[i/4+i+2])
                        {
                            case 7:
                                printf("%4d",g);
                                break;
                            case 1:
                                printf("%8d",g);
                                break;
                            case 2:
                                printf("%12d",g);
                                break;
                            case 3:
                                printf("%16d",g);
                                break;
                            case 4:
                                printf("%20d",g);
                                break;
                            case 5:
                                printf("%24d",g);
                                break;
                            case 6:
                                printf("%28d\n",g);
                                break;
                        }
                        h=days[i/4+i+2];
                        h++;
                        for (day=2;day<=month_days;day++)
                        {
                                if(h==8)
                                    h=1;
                                    if(h==9)
                                        h=2;
                                        if(h==7)
                                            printf("\n");
                                            printf("%4d",day);
                                            h++;
                        }
                    }
                    if(month!=1)
                    {
                        switch(h)
                        {
                            case 7:
                                printf("%4d",g);
                                break;
                            case 1:
                            case 8:
                                printf("%8d",g);
                                break;
                            case 2:
                                printf("%12d",g);
                                break;
                            case 3:
                                printf("%16d",g);
                                break;
                            case 4:
                                printf("%20d",g);
                                break;
                            case 5:
                                printf("%24d",g);
                                break;
                            case 6:
                                printf("%28d\n",g);
                                break;
                        }
                        h++;
                        for (day=2;day<=month_days;day++)
                        {
                            if(h==8)
                                h=1;
                                if(h==9)
                                    h=2;
                                    if(h==7)
                                        printf("\n");
                                        printf("%4d",day);
                                        h++;
                        }
                    }
                }
                printf("\n******************************");
          }
}
