/*
С��ͬѧ��1��n��n�����ְ���һ����˳�������һ������Q�С��������Զ���Qִ�������³���
while(!Q.empty())              //���в��գ�ִ��ѭ��

{

int x=Q.front();            //ȡ����ǰ��ͷ��ֵx

Q.pop();                 //������ǰ��ͷ

Q.push(x);               //��x�����β

x = Q.front();              //ȡ����ʱ���ͷ��ֵ

printf("%d\n",x);          //���x

Q.pop();                 //������ʱ��Ķ�ͷ

}

��ȡ����ͷ��ֵ������ʱ�򣬲���������ǰ��ͷ��
С��ͬѧ���֣���γ���ǡ�ð�˳�������1,2,3,...,n������С�������㹹���ԭʼ�Ķ��У�����������[ע��ԭ������������5�д�Ӧ��Ϊ3������������]
��������:
��һ��һ������T��T �� 100����ʾ����������ÿ����������һ����n��1 �� n �� 100000�������������n֮�Ͳ�����200000��


�������:
����ÿ�����ݣ����һ�У���ʾԭʼ�Ķ��С�����֮����һ���ո��������Ҫ����ĩ�������Ŀո�.

��������1:
4
1
2
3
10

�������1:
1
2 1
2 1 3
8 1 6 2 10 3 7 4 9 5
*/

/*���Ƿ���
#include"iostream"
using namespace std;
int p[200000];
int main(){
	int T, n[100];
	int temp;
	cin >> T;
	for (int i = 0; i < T; i++){
		cin >> n[i];
	}
	for (int i = 0; i < T; i++){
		for (int j = n[i]; j >= 1; j--){
			for (int k = n[i] - j - 1; k >= 0; k--){
				p[k + 1] = p[k];
			}
			p[0] = j;
			temp = p[n[i] - j];
			for (int k = n[i] - j - 1; k >= 0; k--){
				p[k + 1] = p[k];
			}
			p[0] = temp;
		}
		for (int j = 0; j < n[i] - 1; j++){
			cout << p[j] << " ";
		}
		cout << p[n[i] - 1] << endl;
	}
	system("pause");
	return 0;
}
*/

#include"iostream"
#include"deque"
using namespace std;
int main(){
	int T, n[100];
	int temp;
	cin >> T;
	for (int i = 0; i < T; i++){
		cin >> n[i];
	}
	for (int i = 0; i < T; i++){
		deque<int> p;
		for (int j = n[i]; j>0; j--){
			p.push_front(j);
			temp = p.back();
			p.pop_back();
			p.push_front(temp);
		}
		for (int j = 0; j < n[i]; j++){
			cout << p[j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}