//������ ѡ�����
//5.1�߼����ʽ
//5.1.1��ϵ�����
//> < >= <=
//0Ϊ�٣�1Ϊ��
//���ԱȽ�����������߻������
//��ϵ��������ȼ��������������
//���� i<j<k�ǺϷ��ĵ���˼���ܻ᲻һ��
//5.1.2�е������
//==�룡=
//Ҳ�ǲ���0��1����ֵ
//5.1.3�߼������
//�ǣ���&&��||
//&&��||�ж�·����
//����һԪ���������ֵһ����&&��||��һ��
//�����ϣ�&&�ҽ��
//5.2if���
//if�����ʽ�����
//5.2.1�������
//{�������}
//5.2.2else�Ӿ�
//����
//5.2.3����ʽif���
//if...else if
//���򣺼����Ʊ�����˵�Ӷ��
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
//5.2.4���յ�else����
//else ǰ������ ��if
//5.2.5�������ʽ
//���ʽ1 �� ���ʽ2 �� ���ʽ3
//��Ԫ�������c��Ψһһ������������
//printf��return����ֵ������������
//�궨��
//5.2.6C99����ֵ
//_Bool flag;
//stdbool.h,����ֱ��bool flag
//����true��false������
//5.3switch���
//�����֧��ſɷ���ͬһ������ǰ��
//break������
//������ʾ������ʽ������
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

/////////////������//////////////////
//1��ȷ��һ������λ��
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
//2����дһ�������û�����24Сʱ��ʱ�䣬��ʾʮ��Сʱ�ĸ�ʽ
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
//7�����ĸ��������ҳ����ֵ����Сֵ
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
//8��
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




















