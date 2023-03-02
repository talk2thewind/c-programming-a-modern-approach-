//2.1编写一个简单的C程序
//程序：显示双关语
//pun.c
//#include <stdio.h>
//
//int main(void)
//{
//    printf("To C, or not to C: that is the questio.\n");
//    return 0;
//}
//2.1.1编译和链接
//把程序转化为机器可以执行的形式
//预处理：预处理器执行指令（#开头的命令）preprocessor
//编译：修改后的程序进入编译器，翻译成机器指令（也就是目标代码），但还不可以运行compiler
//链接：链接器把目标代码和其他附加代码整合在一起，包括库函数linker
//UNIX系统环境（？）
//2.1.2集成开发环境
//IDE
//2.2简单程序的一般形式
//2.2.1指令
//2.2.2函数
//构建函数的构建块，库函数和程序员编写的函数。一系列组合在一起且被赋予名字的语句。
//main函数必须有且系统会自动调用
//2.2.3语句
//除了复合语句都需要分号结尾
//2.2.4显示字符串
//printf显示了一条字符串字面量
//2.3注释comment
//单独把*/放一行
/*Name: pun.c
  Purpose: Prints a bad pun.
  Author: K.N.King
*/
//盒形
/********************************
 *Name: pun.c                   *
 *Purpose: Prints a bad pun.    *
 *Author: K.N.King              *
 ********************************/
 //也可忽略三条边框
 /*Name: pun.c
  *Purpose: Prints a bad pun.
  *Author: K.N.King
  */
//2.4变量和赋值
//2.4.1类型 int 为integer的简写，float为florting-point的简写
//2.4.2声明
//int height;
//float profit;
//2.4.3赋值 赋值运算的右边为一个表达式{含有常量变量和运算符的公式}
//2.4.4显示变量的值
//程序：计算箱子的空间重量
//dweight.c
/*Computes the dimensional weight of a 12" x 10" x 8" box */
//#include <stdio.h>
//
//int main(void)
//{
//    int height, length, width, volume, weight;
//
//    height = 8;
//    length = 12;
//    width = 10;
//    volume = height * length * width;//逗号后空格，运算符前后空格
//    weight = (volume + 165) / 166;//向上取整的方法
//
//    printf("Dimensions: %dx%dx%d\n", length, width, height);
//    printf("Volume (cubic inches): %d\n",volume);
//    printf("Dimension weight (pounds): %d\n", weight);
//
//    return 0;
//}
//2.4.5初始化
// int height = 8;
//8是一个初始化值
// int height = 8, length = 12, width = 10;
//2.4.6显示表达式的值
//在任何需要数值的地方，都可以使用具有相同类型的表达式

//2.5 读入输入
//获取输入就要用到scanf函数
//f是格式化的意思，与printf一样都要使用格式串，需要知道对象的格式
//程序：计算箱子的空间重量（改进版）
//dweight2.c
/*Computes the dimensional weight of a
  box from input provided by the user*/

//#include <stdio.h>
//
//int main(void)
//{
//    int height, length, width, volume, weight;
//
//    printf("Enter height of box: ");
//    scanf("%d",&height);
//
//    printf("Enter length of box:");
//    scanf("%d",&length);
//
//    printf("Enter width of box:");
//    scanf("%d",&width);
//
//    volume = height * length * width;
//    weight = (volume + 165) / 166;
//
//    printf("Volume (cubic inches): %d\n",volume);
//    printf("Dimensional weight (pounds): %d\n",weight);
//
//    return 0;
//}
//2.6 定义常量的名字
//宏定义（macro definition）
//#define INCHES_PER_POUND 166 (这叫一个宏，之后会被常量替换
//weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
//规范：宏定义只用了大写字母
//程序：华氏温度转换为摄氏温度
//celsius.c
/*Converts a Fahrenheit temperature to Celsius*/
//#include <stdio.h>
//
//#define FREEZING_PT 32.0f
//#define SCALE_FACTOR (5.0f / 9.0f)//两个整数相除，结果向下取整
//
//int main(void)
//{
//    float fahrenheit, celsius;
//
//    printf("Enter Fahrenheit temperature: ");
//    scanf("%f",&fahrenheit);
//
//    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
//
//    printf("Celsius equivan=lent: %.1f\n",celsius);
//
//    return 0;
//}
//2.7标识符
//标识符可以含有字母数字和下划线，但是必须以字母或者下划线开头。
//标识符区分大小写
//关键字
//不能作为标识符使用，必须严格小写，除了c99的几个
//2.8C程序的书写规范
//不能把整个C程序压缩在一行中，因为预处理指令都要求独立成行
//（1语句可以分开放
//e.g.printf("Dimensional weight(pounds):%d\n",
//           (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);
//（2记号间的空格，通常在每个运算符的前后一个空格
//（3缩进有助于识别程序嵌套，同一个大括号放在同一列
//（4空行把程序分为若干个逻辑单元
//注意：把换行符加进字符串中是非法的,需要一种特殊方法
//e.g.printf("To C, or not to C:
//           that is the question.\n");
//在main函数里，exit(0)与return 0是等价的
//return不是必须的++
//传统风格的注释不允许嵌套/**/
//C89只要求编译器记住前31个字符，具有外部链接的标识符，只记住前6个而且不区分大小写
////////课后习题///////////////
//2.1节
//建立运行hello，world程序
//#include <stdio.h>
//
//int main(void)
//{
//    printf("hello,world\n");
//}
///////////////编程题//////////////////
//1、print a √
//#include <stdio.h>
//
//int main(void)
//{
//    printf("       *\n");
//    printf("      *\n");
//    printf("     *\n");
//    printf("*   *\n");
//    printf(" * *\n");
//    printf("  *\n");
//    return 0;
//}
//2、calculate the volume of a ball
//#include <stdio.h>
//#define PI 3.14
//
//int main(void)
//{
//    int r = 10;
//    int volume = 0;
//
//    r = r * r * r;
//    volume = r * PI * (4.0f / 3.0f);
//
//    printf("The volume of the ball is : %d",volume);
//
//    return 0;
//}
//3、let the user to input the r of the ball
//#include <stdio.h>
//#define PI 3.14
//
//int main(void)
//{
//    int r = 0;
//    int volume = 0;
//
//    scanf("%d",&r);
//    r = r * r * r;
//    volume = r * PI * (4.0f / 3.0f);
//
//    printf("The volume of the ball is : %d",volume);
//
//    return 0;
//}
//4、tax 5%
//#include <stdio.h>
//#define TAX_RATE 1.05f
//
//int main(void)
//{
//    printf("Enter an amount:");
//
//    float amount = 0, outcome = 0;
//
//    scanf("%f",&amount);
//
//    outcome = amount * TAX_RATE;
//
//    printf("With tax added: $%.2f",outcome);
//
//    return 0;
//
//}
//5、多项式的值计算
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//    int x = 0, outcome = 0;
//    scanf("%d",&x);
//
//    outcome = 3 * pow(x,5) + 2 * pow(x,4) - 5 * pow(x,3) - pow(x,2) + 7 * x - 6;
//
//    printf("%d",outcome);
//}
//6、Honrner法则
//((((3x+2)x-5)x-1)x+7)x-6
//#include <stdio.h>
//
//int main(void)
//{
//    int x = 0, outcome = 0;
//    scanf("%d",&x);
//
//    outcome = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
//
//    printf("%d",outcome);
//    return 0;
//}
//7、Enter an amount of dollars,calculate how to use the least 20$ 10$ 5$ and 1$ to pay.
//#include <stdio.h>
//
//int main(void)
//{
//    printf("Enter a dollar amount :");
//    int amount = 0;
//    scanf("%d",&amount);
//
//    int cash20=0, cash10 = 0, cash5 = 0, cash1 = 0;
//    cash20 = amount / 20;
//    cash10 = (amount -cash20 * 20) / 10;
//    cash5 = (amount - cash20 * 20 - cash10 * 10) / 5;
//    cash1 = amount -cash20 * 20 - cash10 * 10 - cash5 * 5;
//
//    printf("$20 bills: %d\n",cash20);
//    printf("$10 bills: %d\n",cash10);
//    printf("$5 bills: %d\n",cash5);
//    printf("$1 bills: %d\n",cash1);
//
//    return 0;
//}
//8、显示还贷款的剩余金额
//#include <stdio.h>
//
//int main(void)
//{
//    float amount = 0, rate = 0, monthlyPay = 0;
//    printf("Enter amount of loan:");
//    scanf("%f",&amount);
//    printf("Enter interest rate:");
//    scanf("%f",&rate);
//    printf("Enter monthly payment:");
//    scanf("%f",&monthlyPay);
//
//    float firstRemaining, secondRemaining, thirdRemaining;
//    firstRemaining = amount - monthlyPay + amount * (rate / 1200.0f);
//    secondRemaining = firstRemaining - monthlyPay + firstRemaining * (rate / 1200.0f);
//    thirdRemaining = secondRemaining - monthlyPay + secondRemaining * (rate / 1200.0f);
//
//    printf("Balance remaining after first payment: $%.2f\n",firstRemaining);
//    printf("Balance remaining after second payment: $%.2f\n",secondRemaining);
//    printf("Balance remaining after third payment: $%.2f\n",thirdRemaining);
//
//    return 0;
//}













