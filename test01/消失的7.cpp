#include<stdio.h>
#include<math.h>
/*˼·:ʮ������,1234 = 1*10^3 + 2*10^2 + 3*10^1 + 4*10^0,ȥ����һ������7,�����9����,ģ�����ת��
ע���:��Ϊ��������ݷ�Χ��(n��2^32-1),����˵��Ҫ�õ�long long int����������,Ϊ�˷�ֹ����,ȫ����Ϊlld����
*/
int main()
{
	long long int num, n;//������ʱ����num��������n
	scanf_s("%lld", &n);

	for (int i = 0; i < n; i++)//�߶�ȡ�ߴ���
	{
		scanf_s("%lld", &num);
		long long int sum = 0, count = 0, temp;//ÿ�δ���ǰ������������¶���,��ֵ
		while (num)//��num��Ϊ0��ʱ����д���
		{
			temp = num % 10;//ȡnum�����ұ�λ����(��һ��ȡ���Ǹ�λ)
			if (temp < 7)//��֧�ж�,�������㹫ʽ
				sum += temp * pow(9, count);
			else
				sum += (temp - 1) * pow(9, count);
			num /= 10;//����λ�����ֱ���������ȥ,�����ڶ���λ�������λ
			count++;//ָ������
		}
		printf("%lld\n", sum);//������
	}
	return 0;
}