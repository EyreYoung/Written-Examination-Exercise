/*
С����һ������Ϊn���У�С�����Ƴ���������ظ�Ԫ�أ�����С�����Ƕ���ÿ��Ԫ�ر��������ֵ��Ǹ���С������������,ϣ��������������
��������:
����������У�
��һ��Ϊ���г���n(1 �� n �� 50)
�ڶ���Ϊn����sequence[i](1 �� sequence[i] �� 1000)���Կո�ָ�


�������:
��������ظ�Ԫ��֮������У��Կո�ָ�����ĩ�޿ո�

��������1:
9
100 100 100 99 99 99 100 100 100

�������1:
99 100
*/
#include"iostream"
using namespace std;
int main(){
	int n, seq[51], p[51];
	int flag;
	int x = 0;
	cin >> n;
	int y = n;
	for (int i = 0; i < n; i++){
		cin >> seq[i];
	}
	for (int i = n - 1; i >= 0; i--){
		flag = 0;
		for (int j = 0; j < x; j++){
			if (p[j] == seq[i]){
				flag = 1;
			}
		}
		if (flag == 0){
			p[x] = seq[i];
			x++;
		}
		else{
			for (int j = i; j < y; j++){
				seq[j] = seq[j + 1];
			}
			y--;
		}
	}
	for (int i = 0; i < y - 1; i++){
		cout << seq[i] << " ";
	}
	cout << seq[y - 1];

	system("pause");
	return 0;
}