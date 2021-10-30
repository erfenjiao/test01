#include<stdio.h>
#include<math.h>
/*思路:十进制中,1234 = 1*10^3 + 2*10^2 + 3*10^1 + 4*10^0,去掉了一个数字7,变成了9进制,模拟进制转换
注意点:因为处理的数据范围是(n≤2^32-1),所以说需要用到long long int类型来储存,为了防止出错,全部设为lld类型
*/
int main()
{
	long long int num, n;//定义临时变量num和总数字n
	scanf_s("%lld", &n);

	for (int i = 0; i < n; i++)//边读取边处理
	{
		scanf_s("%lld", &num);
		long long int sum = 0, count = 0, temp;//每次处理前将相关数据重新定义,赋值
		while (num)//当num不为0的时候进行处理
		{
			temp = num % 10;//取num的最右边位数字(第一次取的是个位)
			if (temp < 7)//分支判断,决定计算公式
				sum += temp * pow(9, count);
			else
				sum += (temp - 1) * pow(9, count);
			num /= 10;//最右位的数字被处理后就舍去,倒数第二右位变成最右位
			count++;//指数自增
		}
		printf("%lld\n", sum);//输出结果
	}
	return 0;
}