//������ ���ʽ
//4.1 ��������
//��Ԫ�������Ҫ����������
//һԪ�����+�ھ���c�в����ڣ�ֻ����ǿ������
//%Ϊ����������ģ�����
//%Ҫ��������������Ϊ����
//int��float��ϣ�������Ϊfloat
///%��/�ұ�Ϊ0�����δ������Ϊ
//����׼��%��/���и���ʱ�������ȷ��
//��������ȼ���һԪ�����>��Ԫ�����
//��Ԫ������������ϵ�
//һԪ����������ҽ�ϵ�
//���򣺼���ͨ�ò�Ʒ�����У��λ
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
//%1dΪ����һλ����
//4.2��ֵ�����
//4.2.1�򵥸�ֵ
//�����ֵ�����Ͳ�ͬ����ת���������������
//�򵥸�ֵ�����и����ã���Ϊ���ı������������ֵ
//=�ҽ��
//i = ��j=  ��k= 0����;(�������Ķ�
//4.2.2��ֵ
//��ֵ����Ҫ���������Ϊ��ֵ(lvalue)-i������i+j������
//4.2.3���ϸ�ֵ
//+=��-=��*=��\=,
//�ҽ��
//��a=a+e,���ȼ�
//4.3.3������������Լ������
//i++��׺������ȡi
//++iǰ׺����������
//k = i++ + --j ֮�������
//��׺�����Ÿ������ȼ���
//ǰ׺�����������ȼ���ͬ
//4.4���ʽ��ֵ
//���ȼ���
//�ӱ��ʽ����ֵ˳����ò�Ҫ���ӱ��ʽ���ø�ֵ���ʽ
//δ������Ϊ�������Ԥ��
//4.5���ʽ���
//�κα��ʽ�������������
//i+j-1;����ʽ��û�����ã�
//��%���ڸ���������ʹ��fmod����
//��v+=1��һ��vֵ��v=v+1������
//��++��--Ҳ�������ڸ�����
/////////////�����//////////////////
//1��������λ�����������
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
//}(͵������)
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
//2����չ������λ��
//3�����±�дʹ�䲻�������ָ�
//4����������������˽���
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
//int main(void)//����������
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
//5����дupc.c����һ��������11λ��
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
//6��ŷ����Ʒ����
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














