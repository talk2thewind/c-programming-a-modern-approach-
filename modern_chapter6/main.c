//第六章 循环
//6.1while 语句
//可以一次都不执行while语句的内容
//无限循环：while（1）...
//程序：显示平方表
//square.c
//Prints a table of squares using a while statement
//#include <stdio.h>
//int main(void)
//{
//    int i, n;
//
//    printf("This program prints a table of squares.\n");
//    printf("Enter number of entries in table:\n");
//    scanf("%d",&n);
//
//    i = 1;
//    while(i <= n){
//        printf("%10d%10d\n", i, i * i);
//        i++;
//    }
//    return 0;
//}
//程序：数列求和
//sum.c
//Sums a series of numbers
//#include <stdio.h>
//int main(void)
//{
//    int n, sum = 0;
//    printf("This program sums a series of integers.\n");
//    printf("Enter integers(0 to terminate)：");
//    scanf("%d",&n);
//    while(n){
//        sum+=n;
//        scanf ("%d",&n);
//    }
//    printf("The sum is :%d\n",sum);
//
//    return 0;
//}
//6.2do语句
//do至少会执行一次语句
//程序；计算整数的位数
//numdigit.c
//Calculates the number of digits in an integer
//#include <stdio.h>
//int main(void)
//{
//    int digits =0,n;
//
//    printf("Enter a nonnegative integer:");
//    scanf ("%d",&n);
//
//    do{
//    n/=10;
//    digits++;
//    }while(n>0);
//    printf("The number has %d digits.\n",digits);
//    return 0;}
//当输入为0时，while不管用
//6.3for语句
//6.3.1 for的自增自建惯用法
//6.3.2 for省略表达式
//6.3.3 for在C99中
//可用int i做一个只在循环内访问的变量
//6.3.4 逗号运算符
//可两个表达式粘成一个表达式
//程序：平方表改进版
//square3.c允许在不适用乘法条件下打印出连续的平方值
//Prints a table of squares using an odd method
//#include <stdio.h>
//
//int main(void)
//{
//    int i, n, odd, square;
//
//    printf("This program prints a table of squares.\n");
//    printf("Enter number of entries in table:");
//    scanf ("%d",&n);
//
//    i = 1;
//    odd = 3;
//    for (square = 1; i <= n; odd+=2){
//        printf("%10d%10d\n", i, square);
//        i++;
//        square += odd;
//    }
//    return 0 ;
//}
//6.4 退出循环
//6.4.1 break语句
//6.4.2 continue语句
//6.4.3 goto语句（不常用，在嵌套循环中有用
//程序：账簿结算
//checking.c
//Balances a checkbook
//#include <stdio.h>
//int main(void)
//{
//    int cmd;
//    float balance = 0.0f, credit, debit;
//
//    printf("***ACME checkbook-balancing program***\n");
//    printf("Commands: 0=clear, 1=credit, 2=debit,"
//    "3=balance, 4=exit\n\n");
//    for(;;){
//        printf("Enter command:");
//        scanf ("%d",&cmd);
//        switch(cmd){
//    case 0:
//        balance = 0.0f;
//        break;
//    case 1:
//        printf("Enter amount of debit :");
//        scanf ("%f",&credit);
//        balance += credit ;
//        break;
//    case 2:
//        printf("Enter amount of debit:");
//        scanf ("%f",&debit);
//        balance -= debit;
//        break;
//    case 3:
//        printf("Current balance:$%.2f\n",balance);
//        break;
//    case 4:
//        return 0;//使用return来跳出switch与for的死循环
//    default :
//        printf("Commands: 0=clear, 1=credit, 2=debit,"
//    "3=balance, 4=exit\n\n");
//        break;
//                    }
//    }
//}
//6.5空语句
//可以编写空循环体的循环
//寻找素数
//for(d=2;d<n,d++){
//if(n%d==0)
//    break;
//}
//变成
//for(d=2;d<n&&n%d==0/!=0;d++);
///////////////编程题//////////////////
//1、
//#include <stdio.h>
//
//int main(void)
//{
//    double input = 0, max = 0;
//    for(;;){
//    printf("Enter a number:");
//    scanf("%lf",&input);
//    if(input==0){break;}
//    max = max > input ? max : input;
//    }
//    printf("The largest number is:");
//    printf("%.2lf",max);
//    return 0;
//}
//2、最大公约数
//#include <stdio.h>
//#define max(a,b) a>b?a:b
//int main(void)
//{
//    int a, b, t, temp;
//    printf("Enter two integers:");
//    scanf("%d%d",&a, &b);
//    t = a;
//    a = max(a,b);
//    b = t;
//    for(;b!=0;){
//     temp = a % b;
//     a = b;
//     b = temp;
//    }
//    printf("%d",a);
//    return 0;
//}
//3、约分分数
//#include <stdio.h>
//#define max(a,b) a>b?a:b
//int Gcd(int a, int b);
//int main(void)
//{
//    int sum1, sum2;
//    printf("Enter a fraction:");
//    scanf("%d/%d", &sum1, &sum2);
//    int sum3, sum4;
//    int gcd;
//    gcd = Gcd(sum1, sum2);
//    sum3 = sum1 / gcd;
//    sum4 = sum2 / gcd;
//    printf("In lowest terms:%d/%d", sum3, sum4);
//    return 0;
//}
//int Gcd(int a, int b)
//{
//    int t = a, temp;
//    a = max(a,b);
//    b = t;
//    for(;b!=0;){
//    temp = a % b;
//     a = b;
//     b = temp;
//    }
//    return a;
//}
//4、输出所有0-n的偶数平方值
//#include <stdio.h>
//
//int main(void)
//{
//    int n, i=2, sum;
//    scanf("%d",&n);
//    for(;(sum = i * i)<=n;i+=2){
//        printf("%d\n",sum);
//    }
//    return 0 ;
//}
//5、打印当月的日历
//#include <stdio.h>
//
//int main(void)
//{
//    int day, startDay, i;
//    printf("Enter number of days in month:");
//    scanf("%d",&day);
//    printf("Enter starting day of the week(1=Sun, 7=Sat):");
//    scanf("%d",&startDay);
//    for(i = 0;i < startDay - 1;i++){
//     printf("   ");
//    }
//    for(i = 1; i <= 31; i++){
//        printf("%3d",i);
//        if((i + startDay - 1) % 7 == 0){
//            printf("\n");
//        }
//    }
//    return 0;
//}sum = i * i
//6、e的无穷级数计算
//#include <stdio.h>
//int factorial(int a);
//int main(void)
//{
//    int n, i;
//    double sum = 0;
//    scanf("%d",&n);
//    //printf("%d",n);
//    for(i = 0; i < n; i++){
//    double t = 1.0f/factorial(i);
//     sum += t;
//     //printf("%lf\n",sum);
//    }
//    printf("%lf",sum);
//    //printf("%d",factorial(n));
//    return 0;
//}
//    int factorial(int a){
//    int sum =1;
//    if(a==1||a==0){
//    return sum;
//    }else{
//    sum = a *factorial(a-1);
//    }
//    }
//7、修改6程序
//#include <stdio.h>
//int factorial(int a);
//int main(void)
//{
//    int  i;
//    double sum = 0;
//    double input;
//    scanf("%lf",&input);
//    //printf("%d",n);
//    for(i = 0; ; i++){
//    double t = 1.0f/factorial(i);
//    if(t<input){
//        break;
//    }
//     sum += t;
//     //printf("%lf\n",sum);
//    }
//    printf("%lf",sum);
//    //printf("%d",factorial(n));
//    return 0;
//}
//    int factorial(int a){
//    int sum =1;
//    if(a==1||a==0){
//    return sum;
//    }else{
//    sum = a *factorial(a-1);
//    }
//    }






































