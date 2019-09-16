/*
시공의 폭풍은 87명의(편의상1~87번까지 번호가 매겨져 있다고 하자)들 중 각 팀별로 5명씩 골라 총 10명이 플레이하는 게임이다. 
당신의 팀원들이 선택한 4명의 영우들과 당신이 선택하길 원하는 영웅 5명의 번호가 주어졌을 때, 선택할 수 있는 영웅이 몇 명인지 세어보자!

예시1)
입력
1 5 7 10
1 2 3 4 5

출력
3

예시2)
입력
1 2 3 4
1 2 3 4 5

출력
1
################밑에는 처음에 내가 작성한 코드################

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


######해설###############

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

밑에 소스랑 차이점이라고는 전역변수설정과 지역변수의 차이인데 전역변수로 변수를 선언하게되면 배열이 0으로 초기화가 된다.
하지만 지역변수로 선언할 시 초기화를 해주지 않으면 쓰레기 값이 들어가기 때문에
지역변수에서 선언하려면 ={0}으로 초기화를 해주어야 한다.
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

