/*
���ڵ���ĩ����С�����������Ľֵ���׼�������ѾۻᣬͻȻ��������������,С����Ҫ�����ع�˾�޸��������bug������������һ�����޴������ÿ���ֵ�����������(X��Y)��С�׵�ǰ��(0��0)�ֵ����칫����(gx,gy)�ֵ��ϡ�С����Χ�ж�����⳵�򳵵㣬С�׸�ȥ�칫��������ѡ��һ�־�����·ȥ��˾������һ�־����ߵ�һ�����⳵�򳵵㣬Ȼ��Ӵ򳵵��λ�������⳵ȥ��˾��ÿ���ƶ������ڵĽֵ�(�����������)��·���Ứ��walkTimeʱ�䣬�򳵽�����taxiTimeʱ�䡣С����Ҫ����ϵ���˾ȥ������С����֪���������Ҫ���Ѷ���ʱ��ȥ��˾��
��������:
�������ݰ�������:

��һ��Ϊ��Χ���⳵�򳵵�ĸ���n(1 �� n �� 50)

�ڶ���Ϊÿ�����⳵�򳵵�ĺ�����tX[i] (-10000 �� tX[i] �� 10000)

������Ϊÿ�����⳵�򳵵��������tY[i] (-10000 �� tY[i] �� 10000)

������Ϊ�칫������gx,gy(-10000 �� gx,gy �� 10000),�Կո�ָ�

������Ϊ��·ʱ��walkTime(1 �� walkTime �� 1000)��taxiTime(1 �� taxiTime �� 1000),�Կո�ָ�


�������:
���һ��������ʾ��С������ܸϵ��칫�ҵ�ʱ��

��������1:
2
-2 -2
0 -2
-4 -2
15 3

�������1:
42
*/
#include<iostream>
using namespace std;
int main()
{
	int n, tx[60], ty[60], gx, gy, walkTime, taxiTime;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tx[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> ty[i];
	}
	cin >> gx;
	cin >> gy;
	cin >> walkTime;
	cin >> taxiTime;

	int min = 20000 * (taxiTime + walkTime);
	int temp;
	for (int i = 0; i < n; i++)
	{
		temp = (abs(tx[i]) + abs(ty[i]))*walkTime + (abs(tx[i] - gx) + abs(ty[i] - gy))*taxiTime;
		if (temp < min)
		{
			min = temp;
		}
	}
	if (walkTime < taxiTime)
	{
		min = (abs(gx) + abs(gy))*walkTime;
	}
	cout << min;

	system("pause");
	return 0;
}