//第三章 格式化输入/输出
//3.1printf函数、
//printf用来显示格式串的内容，格式串包括普通字符和转换说明。转换说明以%开头
//C语言编译器不会检测转换说明是否与输出项相匹配，过多或过少都会出问题
//也不会检测是否格式正确，错误的话输出值无意义
//3.1.1转换说明
//提供了大量的控制输出格式的方法
//%m.pX;(当没有p时，小数点要去掉)
//最小字符宽度(minimum field width)m:若大于字符数量，则右对齐显示空格，若小于，则会自动拓展为当前所需要尺寸
//精度（precision）:依赖于转换说明符X的选择
//①d：十进制整数，p指明了带显示数字的最少个数
//②e：表示指数形式、科学计数法的浮点数，p指明了小数点后字母个数，默认为6
//③f：如上②，定点十进制
//④g：表示指数形式或者定点十进制浮点数。p表示显示的没有小数点之后的数字个位，与f不同，g不会显示小数点或者后面的0
//程序：用printf函数格式化数
//tprintf.c
/*Prints int and float values in various formats */
//#include <stdio.h>
//
//int main(void)
//{
//    int i;
//    float x;
//
//    i = 40;
//    x = 839.21f;
//
//    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);//-5d是左对齐的意思
//    printf("|%10.3f|%10.3e|%-10g|/n",x,x,x);
//
//    return 0;
//}
//一开始只输了一个i和x,没有报错但是数值没有意义
//5.3d至少要有三个有效数字，至少5个位置
//3.1.2转义序列
//\n就是转义序列，使字符串包含一些特殊字符
// \a为响铃符，\b为回退符，/t为tab，水平制表符号
//\“为双引号，\为显示斜线
//3.2scanf函数
//也必须检查数量是否匹配
//&不总是必要的
//有效但是不理想的方法，应该避免使用scanf，采用字符格式读取数据，然后转化
//在寻找数的起始位置时，会忽略空白字符，包括tab，空格
//会把不可能出现的符号放回原处，储存之前的
//3.2.2格式串中的普通字符
//scanf中，与\也会被拿去匹配
//3.2.3易混淆的printf和scanf
//scanf最好不要\n

//程序：分数相加
//addfrac.c
/*Adds two fractions*/

//#include <stdio.h>
//
//int main(void)
//{
//    int num1, denom1, num2, denom2, result_num, result_denom;
//
//    printf("Enter first fractino:");
//    scanf("%d/%d", &num1, &denom1);
//
//    printf("Enter second fractino:");
//    scanf("%d/%d", &num2, &denom2);
//
//    result_num = num1 * denom2 + num2 * denom1;
//    result_denom = denom1 * denom2;
//    printf("The result is %d/%d\n", result_num, result_denom);
//
//    return 0;
//}
//结果没有约分
//TIPs：
//①%i也可以读写整数，在printf中没有区别，在scanf中%d只能与十进制匹配，而%i可以与其他
//进制匹配，比如076，为八进制数字，0x或0X前缀为十六进制数字
//②/t的效果依赖于操作系统
////////////编程题/////////////
//1、以mm/dd/yy形式输入，以年月日输出
//#include <stdio.h>
//
//int main(void)
//{
//    int month, day, year;
//    printf("Enter a date (mm/dd/yy):");
//    scanf("%d/%d/%d", &month, &day, &year);
//
//    printf("You entered the date %4d%.2d%2d", year, month, day);//前面0填空需要用.2d
//
//    return 0;
//}
//2、对录入的产品信息进行格式化
//#include <stdio.h>
//
//int main(void)
//{
//    int number, year, month, day;
//    float price;
//    printf("Enter item number:");
//    scanf("%d",&number);
//    printf("Enter unit price:");
//    scanf("%f",&price);
//    printf("Enter purchase date (mm/dd/yy) :");
//    scanf("%d/%d/%d", &month, &day, &year);
//
//    printf("\nItem\tUnit\t\tPurchase\n");
//    printf("    \tPrice   \tDate\n");
//    printf("%d \t$%7.2f\t%4d%.2d%2d", number, price, year, month, day);
//
//    return 0;
//}
//3、分解ISBN码(不知道要不要填充0)
//#include <stdio.h>
//
//int main(void)
//{
//    int first, second, third, forth, last;
//    printf("Enter ISBN: ");
//    scanf("%d-%d-%d-%d-%d", &first, &second, &third, &forth, &last);
//    printf("GS1 prefix: %d\n", first);
//    printf("Group identifier: %d\n",second);
//    printf("Publisher code: %d\n",third);
//    printf("Item number: %d\n",forth);
//    printf("Check digit: %d",last);
//    return 0;
//}
//4、输入电话号码再输出
//#include <stdio.h>
//
//int main(void)
//{
//    int f, s, t;
//    printf("Enter phone number[(xxx) xxx-xxxx]: ");//空格影响？
//    scanf("(%d) %d-%d",&f, &s, &t);
//
//    printf("You entered %.3d.%.3d.%.4d", f, s, t);
//
//    return 0;
//}
//5、输入整数，输出矩阵以及行和列的和
//#include <stdio.h>
////16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//int main(void)
//{
//    printf("Enter the numbers form 1 to 16 in any order:\n");
//    int matrix[4][4], i, j;
//    for(i=0; i<4; i++)
//    {
//        for(j=0; j<4; j++)
//        {
//            scanf("%d",&matrix[i][j]);//加了空格输入停止不了
//        }
//    }
//    for(i=0; i<4; i++)
//    {
//        for(j = 0; j < 4; j++)
//        {
//            printf("%3d",matrix[i][j]);
//        }
//        printf("\n");
//    }
//    int rowSum[4] = {0, 0, 0, 0};
//    for(i = 0; i < 4; i++)
//    {
//       for(j=0; j<4; j++)
//       {
//           rowSum[i] += matrix[i][j];
//       }
//    }
//    printf("Row sums:");
//    for(i = 0; i < 4; i++)
//    {
//        printf("%3d", rowSum[i]);
//    }
//    printf("\n");
//    int colSum[4]={0, 0, 0, 0};
//     for(i = 0; i < 4; i++)
//    {
//       for(j=0; j<4; j++)
//       {
//           colSum[i] += matrix[j][i];
//       }
//    }
//    printf("Column sums:");
//    for(i = 0; i < 4; i++)
//    {
//        printf("%3d", colSum[i]);
//    }
//    printf("\n");
//    int xieSum[2]={0, 0};
//    for(i=0; i<4; i++)
//    {
//        xieSum[0]+=matrix[i][i];
//    }
//    for(i=0; i<4;i++)
//    {
//        xieSum[1]+=matrix[i][3-i];
//    }
//    printf("Diagonal sums:%d %d",xieSum[0],xieSum[1]);
//    return 0;
//}
//幻方，shi山代码...





























