//������ ��ʽ������/���
//3.1printf������
//printf������ʾ��ʽ�������ݣ���ʽ��������ͨ�ַ���ת��˵����ת��˵����%��ͷ
//C���Ա�����������ת��˵���Ƿ����������ƥ�䣬�������ٶ��������
//Ҳ�������Ƿ��ʽ��ȷ������Ļ����ֵ������
//3.1.1ת��˵��
//�ṩ�˴����Ŀ��������ʽ�ķ���
//%m.pX;(��û��pʱ��С����Ҫȥ��)
//��С�ַ����(minimum field width)m:�������ַ����������Ҷ�����ʾ�ո���С�ڣ�����Զ���չΪ��ǰ����Ҫ�ߴ�
//���ȣ�precision��:������ת��˵����X��ѡ��
//��d��ʮ����������pָ���˴���ʾ���ֵ����ٸ���
//��e����ʾָ����ʽ����ѧ�������ĸ�������pָ����С�������ĸ������Ĭ��Ϊ6
//��f�����Ϣڣ�����ʮ����
//��g����ʾָ����ʽ���߶���ʮ���Ƹ�������p��ʾ��ʾ��û��С����֮������ָ�λ����f��ͬ��g������ʾС������ߺ����0
//������printf������ʽ����
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
//    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);//-5d����������˼
//    printf("|%10.3f|%10.3e|%-10g|/n",x,x,x);
//
//    return 0;
//}
//һ��ʼֻ����һ��i��x,û�б�������ֵû������
//5.3d����Ҫ��������Ч���֣�����5��λ��
//3.1.2ת������
//\n����ת�����У�ʹ�ַ�������һЩ�����ַ�
// \aΪ�������\bΪ���˷���/tΪtab��ˮƽ�Ʊ����
//\��Ϊ˫���ţ�\Ϊ��ʾб��
//3.2scanf����
//Ҳ�����������Ƿ�ƥ��
//&�����Ǳ�Ҫ��
//��Ч���ǲ�����ķ�����Ӧ�ñ���ʹ��scanf�������ַ���ʽ��ȡ���ݣ�Ȼ��ת��
//��Ѱ��������ʼλ��ʱ������Կհ��ַ�������tab���ո�
//��Ѳ����ܳ��ֵķ��ŷŻ�ԭ��������֮ǰ��
//3.2.2��ʽ���е���ͨ�ַ�
//scanf�У���\Ҳ�ᱻ��ȥƥ��
//3.2.3�׻�����printf��scanf
//scanf��ò�Ҫ\n

//���򣺷������
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
//���û��Լ��
//TIPs��
//��%iҲ���Զ�д��������printf��û��������scanf��%dֻ����ʮ����ƥ�䣬��%i����������
//����ƥ�䣬����076��Ϊ�˽������֣�0x��0Xǰ׺Ϊʮ����������
//��/t��Ч�������ڲ���ϵͳ
////////////�����/////////////
//1����mm/dd/yy��ʽ���룬�����������
//#include <stdio.h>
//
//int main(void)
//{
//    int month, day, year;
//    printf("Enter a date (mm/dd/yy):");
//    scanf("%d/%d/%d", &month, &day, &year);
//
//    printf("You entered the date %4d%.2d%2d", year, month, day);//ǰ��0�����Ҫ��.2d
//
//    return 0;
//}
//2����¼��Ĳ�Ʒ��Ϣ���и�ʽ��
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
//3���ֽ�ISBN��(��֪��Ҫ��Ҫ���0)
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
//4������绰���������
//#include <stdio.h>
//
//int main(void)
//{
//    int f, s, t;
//    printf("Enter phone number[(xxx) xxx-xxxx]: ");//�ո�Ӱ�죿
//    scanf("(%d) %d-%d",&f, &s, &t);
//
//    printf("You entered %.3d.%.3d.%.4d", f, s, t);
//
//    return 0;
//}
//5��������������������Լ��к��еĺ�
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
//            scanf("%d",&matrix[i][j]);//���˿ո�����ֹͣ����
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
//�÷���shiɽ����...





























