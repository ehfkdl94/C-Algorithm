/*
�ð��� ��ǳ�� 87����(���ǻ�1~87������ ��ȣ�� �Ű��� �ִٰ� ����)�� �� �� ������ 5�� ��� �� 10���� �÷����ϴ� �����̴�. 
����� �������� ������ 4���� ������ ����� �����ϱ� ���ϴ� ���� 5���� ��ȣ�� �־����� ��, ������ �� �ִ� ������ �� ������ �����!

����1)
�Է�
1 5 7 10
1 2 3 4 5

���
3

����2)
�Է�
1 2 3 4
1 2 3 4 5

���
1
################�ؿ��� ó���� ���� �ۼ��� �ڵ�################

#include<iostream>
using namespace std;

int main() {
	int x[4];
	int y[5];
	int cnt = 0;
	int i, j;
	for (i = 0; i<4; i++)
	{
		cin >> x[i];
	}

	for (i = 0; i<5; i++)
	{
		cin >> y[i];
	}

	for (i = 0; i<4; i++)
	{
		for (j = 0; j<5; j++)
		{
			if (x[i] == y[j])
			{
				cnt++;
			}

		}
	}
	cout << 5 - cnt;
}


######�ؼ�###############

#include<iostream>
using namespace std;
int chk[100], num, ans;
int main() {
	for (int i = 0; i<4; ++i) {
		scanf_s("%d", &num);
		chk[num] = 1;
	}
	for (int i = 0; i<5; ++i) {
		scanf_s("%d", &num);
		if (chk[num] == 0) ++ans;
		cout << i;
	}
	cout << ans;
	system("pause");
}

�ؿ� �ҽ��� �������̶��� �������������� ���������� �����ε� ���������� ������ �����ϰԵǸ� �迭�� 0���� �ʱ�ȭ�� �ȴ�.
������ ���������� ������ �� �ʱ�ȭ�� ������ ������ ������ ���� ���� ������
������������ �����Ϸ��� ={0}���� �ʱ�ȭ�� ���־�� �Ѵ�.
*/


#include<iostream>
using namespace std;

int main()
{
	int chk[87] = { 0 }, num, cnt = 0;

	for (int i = 0; i < 4; ++i)
	{
		cin >> num;
		chk[num] = 1;
	}
	for (int j = 0; j < 5; ++j)
	{
		cin >> num;
		if (chk[num] == 0)
		{
			++cnt;
		}
	}
	cout << cnt;
	system("pause");
}

