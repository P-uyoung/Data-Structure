/* Euclidean Algorithm �� �̿��� GCD ���ϱ�
(a,b) = (b,r)		a > b, r: a�� b�� ���� ������
(b,0) �� ��, �ִ������� b	*/

#include <iostream>
using namespace std;

int GCD(int a, int b);

int main(void)
{
	int a, b;

	cout << "�ִ����� a b:";
	cin >> a >> b;

	cout << GCD(a, b) << endl;

	return 0;
}

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	
	else 
		return GCD(b, a%b);
}