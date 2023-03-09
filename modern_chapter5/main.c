//第五章 选择语句
//5.1逻辑表达式
//5.1.1关系运算符
//> < >= <=
//0为假，1为真
//可以比较整数浮点或者混合类型
//关系运算符优先级低于算术运算符
//左结合 i<j<k是合法的但意思可能会不一样
//5.1.2判等运算符
//==与！=
//也是产生0与1两个值
//5.1.3逻辑运算符
//非！与&&或||
//&&与||有短路机制
//！与一元运算符优先值一样，&&与||低一级
//！左结合，&&右结合
//5.2if语句
//if（表达式）语句
//5.2.1复合语句
//{多条语句}
//5.2.2else子句
//缩进
//5.2.3级联式if语句
//if...else if
//程序：计算股票经纪人的佣金
//broker.c
//Calculates a broker's commission
//#include <stdio.h>
//
//int main(void)
//{
//    float commission, value;
//
//    printf("Enter value of trade:");
//    scanf("%f",&value);
//
//    if( value < 2500.00f)
//        commission = 30.00f + .017f * value;
//    else if (value < 6250.00f)
//        commission = 56.00f + .0066f * value;
//    else if (value < 20000.00f)
//        commission = 76.00f + .0034f * value;
//    else if (value < 50000.00f)
//        commission = 100.00f + .0022f * value;
//    else if (value < 500000.00f)
//        commission = 155.00f + .0011f * value;
//    else
//        commission = 255.00f + .0009f * value;
//
//    if(commission < 39.00f)
//        commission = 39.00f;
//
//        printf("Commission: $%.2f\n",commission);
//        return 0;
//}
//5.2.4悬空的else问题
//else 前有两层 的if
//5.2.5条件表达式
//表达式1 ？ 表达式2 ： 表达式3
//三元运算符，c里唯一一个三个操作数
//printf和return返回值里可以用这个简化
//宏定义
//5.2.6C99布尔值
//_Bool flag;
//stdbool.h,可以直接bool flag
//还有true和false两个宏
//5.3switch语句
//多个分支标号可放在同一组语句的前面
//break的作用
//程序：显示法定格式的日期
//date.c
//Prints a date in legal form
//#include <stdio.h>
//
//int main(void)
//{
//    int month, day, year;
//
//    printf("Enter date (mm/dd/yy):");
//    scanf("%d/%d/%d", &month, &day, &year);
//
//    printf("Dated this %d",day);
//    switch(day){
//    case 1:case 21: case 31:
//    printf("st ");break;
//    case 2: case 22:
//    printf("nd ");break;
//    case 3:case 23:
//    printf("rd ");break;
//    default :printf("th ");break;
//    }
//    printf("day of ");
//
//    switch(month){
//    case 1: printf("January");break;
//;    case 2: printf("February");break;
//    case 3: printf("March");break;
//    case 4: printf("April");break;
//    case 5: printf("May");break;
//    case 6: printf("June");break;
//    case 7: printf("July");break;
//    case 8: printf("Auguest");break;
//    case 9: printf("September");break;
//    case 10: printf("October");break;
//    case 11: printf("November");break;
//    case 12: printf("December");break;
//    }
//    printf(",20%.2d.\n",year);
//    return 0;
//}

/////////////程序题//////////////////
//1、确定一个数的位数
//#include <stdio.h>
//int main(void)
//{
//    int n;
//    printf("Enter a number: ");
//    scanf("%d",&n);
//    if (n>=0&&n<=9){
//    printf("The number %d has 1 digits",n);
//    }else if (n>=10&&n<=99){
//    printf("The number %d has 2 digits",n);
//    }else if (n>=100&&n<=999){
//    printf("The number %d has 3 digits",n);
//    }else if (n>=1000&&n<=9999){
//    printf("The number %d has 4 digits",n);
//    }
//    return 0;
//}
//2、编写一个程序，用户输入24小时的时间，显示十二小时的格式
//#include <stdio.h>
//
//int main(void)
//{
//    printf("Enter a 24-hour time:");
//    int hour, minute;
//    scanf("%d:%d", &hour, &minute);
//    if(hour > 12) {hour -= 12;
//        printf("Equivalent 12-hour time:%d:%d PM", hour, minute);}
//    else printf("Equivalent 12-hour time:%d:%d AM", hour, minute);
//    return 0;
//}
//7、从四个整数中找出最大值和最小值
//#include <stdio.h>
//#define max(a,b) ((a>b)?a:b)
//#define min(a,b) ((a<b)?a:b)
//int main(void)
//{
//    printf("Enter four integers:");
//    int s1, s2, s3, s4;
//    scanf("%d%d%d%d", &s1, &s2, &s3, &s4);
//    int big, small, big1, big2, small1, small2;
//    if(max(s1,s2) == s1){
//        big1 = s1;
//        small1 = s2;
//    }else{
//    big1 = s2;
//    small1 = s1;
//    }
//    if(max(s3,s4)==s3){
//        big2 = s3;
//        small2=s4;
//    }else{
//    big2=  s4;
//    small2 = s3;
//    }
//    if(big1>=big2){
//        big = big1;
//    }else{
//    big = big2;
//    }
//    if(small1>=small2){
//        small = small2;
//    }else{
//    small = small1;
//    }
//    printf("Largest:%d\nSmallest:%d\n", big, small);
//    return 0;
//}
//8、
//#include <stdio.h>
//struct flight{
//char *setOff;
//char *On;
//int setOffmin;
//}a[];
//int main(void)
//{
//
//}




















