//2.1��дһ���򵥵�C����
//������ʾ˫����
//pun.c
//#include <stdio.h>
//
//int main(void)
//{
//    printf("To C, or not to C: that is the questio.\n");
//    return 0;
//}
//2.1.1���������
//�ѳ���ת��Ϊ��������ִ�е���ʽ
//Ԥ����Ԥ������ִ��ָ�#��ͷ�����preprocessor
//���룺�޸ĺ�ĳ�����������������ɻ���ָ�Ҳ����Ŀ����룩����������������compiler
//���ӣ���������Ŀ�������������Ӵ���������һ�𣬰����⺯��linker
//UNIXϵͳ����������
//2.1.2���ɿ�������
//IDE
//2.2�򵥳����һ����ʽ
//2.2.1ָ��
//2.2.2����
//���������Ĺ����飬�⺯���ͳ���Ա��д�ĺ�����һϵ�������һ���ұ��������ֵ���䡣
//main������������ϵͳ���Զ�����
//2.2.3���
//���˸�����䶼��Ҫ�ֺŽ�β
//2.2.4��ʾ�ַ���
//printf��ʾ��һ���ַ���������
//2.3ע��comment
//������*/��һ��
/*Name: pun.c
  Purpose: Prints a bad pun.
  Author: K.N.King
*/
//����
/********************************
 *Name: pun.c                   *
 *Purpose: Prints a bad pun.    *
 *Author: K.N.King              *
 ********************************/
 //Ҳ�ɺ��������߿�
 /*Name: pun.c
  *Purpose: Prints a bad pun.
  *Author: K.N.King
  */
//2.4�����͸�ֵ
//2.4.1���� int Ϊinteger�ļ�д��floatΪflorting-point�ļ�д
//2.4.2����
//int height;
//float profit;
//2.4.3��ֵ ��ֵ������ұ�Ϊһ�����ʽ{���г���������������Ĺ�ʽ}
//2.4.4��ʾ������ֵ
//���򣺼������ӵĿռ�����
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
//    volume = height * length * width;//���ź�ո������ǰ��ո�
//    weight = (volume + 165) / 166;//����ȡ���ķ���
//
//    printf("Dimensions: %dx%dx%d\n", length, width, height);
//    printf("Volume (cubic inches): %d\n",volume);
//    printf("Dimension weight (pounds): %d\n", weight);
//
//    return 0;
//}
//2.4.5��ʼ��
// int height = 8;
//8��һ����ʼ��ֵ
// int height = 8, length = 12, width = 10;
//2.4.6��ʾ���ʽ��ֵ
//���κ���Ҫ��ֵ�ĵط���������ʹ�þ�����ͬ���͵ı��ʽ

//2.5 ��������
//��ȡ�����Ҫ�õ�scanf����
//f�Ǹ�ʽ������˼����printfһ����Ҫʹ�ø�ʽ������Ҫ֪������ĸ�ʽ
//���򣺼������ӵĿռ��������Ľ��棩
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
//2.6 ���峣��������
//�궨�壨macro definition��
//#define INCHES_PER_POUND 166 (���һ���֮꣬��ᱻ�����滻
//weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
//�淶���궨��ֻ���˴�д��ĸ
//���򣺻����¶�ת��Ϊ�����¶�
//celsius.c
/*Converts a Fahrenheit temperature to Celsius*/
//#include <stdio.h>
//
//#define FREEZING_PT 32.0f
//#define SCALE_FACTOR (5.0f / 9.0f)//��������������������ȡ��
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
//2.7��ʶ��
//��ʶ�����Ժ�����ĸ���ֺ��»��ߣ����Ǳ�������ĸ�����»��߿�ͷ��
//��ʶ�����ִ�Сд
//�ؼ���
//������Ϊ��ʶ��ʹ�ã������ϸ�Сд������c99�ļ���
//2.8C�������д�淶
//���ܰ�����C����ѹ����һ���У���ΪԤ����ָ�Ҫ���������
//��1�����Էֿ���
//e.g.printf("Dimensional weight(pounds):%d\n",
//           (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);
//��2�Ǻż�Ŀո�ͨ����ÿ���������ǰ��һ���ո�
//��3����������ʶ�����Ƕ�ף�ͬһ�������ŷ���ͬһ��
//��4���аѳ����Ϊ���ɸ��߼���Ԫ
//ע�⣺�ѻ��з��ӽ��ַ������ǷǷ���,��Ҫһ�����ⷽ��
//e.g.printf("To C, or not to C:
//           that is the question.\n");
//��main�����exit(0)��return 0�ǵȼ۵�
//return���Ǳ����++
//��ͳ����ע�Ͳ�����Ƕ��/**/
//C89ֻҪ���������סǰ31���ַ��������ⲿ���ӵı�ʶ����ֻ��סǰ6�����Ҳ����ִ�Сд
////////�κ�ϰ��///////////////
//2.1��
//��������hello��world����
//#include <stdio.h>
//
//int main(void)
//{
//    printf("hello,world\n");
//}
///////////////�����//////////////////
//1��print a ��
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
//2��calculate the volume of a ball
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
//3��let the user to input the r of the ball
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
//4��tax 5%
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
//5������ʽ��ֵ����
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
//6��Honrner����
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
//7��Enter an amount of dollars,calculate how to use the least 20$ 10$ 5$ and 1$ to pay.
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
//8����ʾ�������ʣ����
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













