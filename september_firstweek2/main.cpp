/*
문제)
고대 유적지를 연구하던 인디아나 홍스는 유적지의 벽에 새겨진 엄청난 숫자들을 발견했다.
벽에 새겨진 숫자 중 일부는 비밀스러운 정보를 조회할 수 있는 열쇠 역할을 하는 비밀스러운 수이다.
오랜 연구 끝에 인디아나 홍스느느 엄청난 숫자들이 특별한 규칙을 가지고 있다는 사실을 발견하였다.
엄청난 숫자들 중 의미 있는 숫자들은 항사 2의 k승(0<=k)형태로 적혀 있고, 그 외의 수들은 모두 비밀스러운 정보와는 관련 없다는 것이다.

입력은 첫 번째 줄에 벽에 새겨진 수가 주어진다. 이 수는 10의 18승 이하의 자연수이다.

예시1)
입력
32

출력
Yes

예시2)
입력
1

출력
Yes

예시3)
입력
10

출력
No

#####################내가 작성한 코드######################


#include<iostream>
using namespace std;

int div(int num);

int main()
{
	int num;
	int x;
	cin >> num;
	if (num == 1)
	{
		cout << "Yes";
	}
	else
	{
		if (div(num))
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}

	}
	system("pause");
}

int div(int num)
{
	int x;
	x = num / 2;
	if (x % 2 == 0)
	{
		if (x == 2)
		{
			return 1;
		}
		return div(x);
	}
	else
	{
		return 0;
	}
}


#########해설##############
while동작 조건이 참일때만 반복을 하니깐 num % 2==0으로 나머지가 0이 아니면 while문 나와서 else 값인 "No"를 출력
num % 2 ==0 이 참이면 while문 실행 계속 반복하다가 마지막에 num값이 2이면 2 / 2 = 1이 되면서 반복문 실행하지않고 if문으로 내려와서 "Yes"출력하고 프로그램 종료된다.

#include<iostream>
using namespace std;

int main()
{
	long long num;
	cin >> num;
	while (num % 2 == 0)
		num /= 2;

	if (num == 1)
		cout << "Yes";
	else
		cout << "No";
	

	system("pause");
}
*/