#include <iostream>
#include "string"
using namespace std;
int main()
{
	string A1;
	int i;
	cout << "������һ�仰:" ;
	getline(cin,A1);
	int N;
	cout << "������һ��Nʹ��������ƶ�Nλ;" ;
	cin >> N;
	cout << "����仰��ÿ����ĸ˳������ƶ���" << N << "λ:" << endl;
	for(i = 0 ; i < A1.length() ; i++)
	{
		if((A1[i] >= 'A') && (A1[i] <= 'z'))
		{
			if(A1[i] + N <= 'Z') 
				A1[i] += N;
			else if(A1[i] + N <='z')
				A1[i] += N;
			else
				A1[i] -= 26 - N;
		}
		else
		{
			A1[i] = A1[i];
		}
	}
	for(int j = 0 ; j <= A1.length() ; j++)
	{
		cout << A1[j];
	}
	cout << endl;
	return 0;
}
