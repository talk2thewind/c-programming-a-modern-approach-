//第四章 表达式
//4.1 算数表达符
//二元运算符需要两个操作数
//一元运算符+在经典c中不存在，只用来强调正数
//%为求余数，求模运算符
//%要求两个操作数均为整数
//int与float混合，计算结果为float
///%与/右边为0会产生未定义行为
//各标准中%与/中有负数时结果难以确定
//运算符优先级：一元运算符>二元运算符
//二元运算符都是左结合的
//一元运算符都是右结合的
//程序：计算通用产品代码的校验位
//upc.c
/*Computes a Universal Product Code check digit*/
//#include <stdio.h>
//
//int main(void)
//{
//    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
//
//    printf("Enter the first (single) digit:");
//    scanf("%1d", &d);
//    printf("Enter first group of five digits:");
//    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
//    printf("Enter second group of five digits:");
//    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
//
//    first_sum = d + i2 + i4 + j1 + j3 + j5;
//    second_sum =i1 + i3 + i5 + j2 + j4;
//    total = 3 * first_sum + second_sum;
//
//    printf("Check digit: %d\n",9 - (total - 1) % 10);
//
//    return 0;
//}
//%1d为输入一位整数
//4.2赋值运算符
//4.2.1简单赋值
//如果赋值的类型不同，会转换称他本身的类型
//简单赋值运算有副作用，因为他改变了左操作数的值
//=右结合
//i = （j=  （k= 0））;(不便于阅读
//4.2.2左值
//赋值运算要求左操作数为左值(lvalue)-i，或者i+j都不对
//4.2.3复合赋值
//+=，-=，*=，\=,
//右结合
//与a=a+e,不等价
//4.3.3自增运算符与自减运算符
//i++后缀自增先取i
//++i前缀自增先自增
//k = i++ + --j 之类的问题
//后缀比正号负号优先级高
//前缀与正负号优先级相同
//4.4表达式求值
//优先级表
//子表达式的求值顺序，最好不要在子表达式中用赋值表达式
//未定义行为后果不可预料
//4.5表达式语句
//任何表达式都可以用作语句
//i+j-1;这样式子没有作用，
//①%用于浮点数可以使用fmod函数
//②v+=1求一次v值，v=v+1求两次
//③++与--也可以用于浮点数
/////////////编程题//////////////////
//1、输入两位数，输出逆序
//#include <stdio.h>
//
//int main(void)
//{
//    int ten, single;
//    printf("Enter a tow-digit numnber:");
//    scanf("%1d%1d",&ten, &single);
//
//    printf("The reversal is:%d%d",single, ten);
//    return 0;
//}(偷懒方法)
//#include <stdio.h>
//
//int main(void)
//{
//    int number, ten, single, outcome;
//    printf("Enter a tow-digit numnber:");
//    scanf("%d",&number);
//    ten = number / 10;
//    single = number % 10;
//    outcome = single * 10 + ten;
//    printf("The reversal is:%d", outcome) ;
//    return 0;
//}
//2、拓展程序到三位数
//3、重新编写使其不用算数分割
//4、输入整数，输出八进制
//#include <stdio.h>
//
//int main(void)
//{
//    int input;
//    printf("Enter a number between 0 and 32767:");
//    scanf("%d",&input);
//    printf("In octal, your number is:0%o",input);
//    return 0;
//}
//#include <stdio.h>
//
//int main(void)//除法余数法
//{
//    int input;
//    printf("Enter a number between 0 and 32767:");
//    scanf("%d",&input);
//    int pos1, pos2, pos3, pos4, pos5;
//    pos1 = input%8;
//    input/=8;
//    pos2 = input%8;
//    input/=8;
//    pos3 = input%8;
//    input/=8;
//    pos4 = input%8;
//    input/=8;
//    pos5 = input%8;
//    printf("In octal, your number is:%.5d",pos5*10000+pos4*1000+pos3*100+pos2*10+pos1);
//}
//
//5、重写upc.c程序，一次性输入11位；
//upc.c
//Computes a Universal Product Code check digit
//#include <stdio.h>
//
//int main(void)
//{
//    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
//
//    printf("Enter a number between 0 and 32767:");
//    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d,&i1,&i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4,&j5);
//
//    first_sum = d + i2 + i4 + j1 + j3 + j5;
//    second_sum =i1 + i3 + i5 + j2 + j4;
//    total = 3 * first_sum + second_sum;
//
//    printf("Check digit: %d\n",9 - (total - 1) % 10);
//
//    return 0;
//}
//6、欧洲商品编码
//#include <stdio.h>
//
//int main(void)
//{
//    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,j6,sumOfSingle,sumOfDouble,sum;
//
//    printf("Enter the fist 12 digits of an EAN:");
//    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d,&i1,&i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4,&j5, &j6);
//
//    sumOfSingle = d + i2+i4+j1+j3+j5;
//    sumOfDouble = i1 + i3+i5+j2+j4+j6;
//    sum = sumOfDouble *3+sumOfSingle-1;
//    printf("Check digit: %d\n",9 - (sum%10));
//
//    return 0;
//}














