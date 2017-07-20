/*
小易有一个长度为n序列，小易想移除掉里面的重复元素，但是小易想是对于每种元素保留最后出现的那个。小易遇到了困难,希望你来帮助他。
输入描述:
输入包括两行：
第一行为序列长度n(1 ≤ n ≤ 50)
第二行为n个数sequence[i](1 ≤ sequence[i] ≤ 1000)，以空格分隔


输出描述:
输出消除重复元素之后的序列，以空格分隔，行末无空格

输入例子1:
9
100 100 100 99 99 99 100 100 100

输出例子1:
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