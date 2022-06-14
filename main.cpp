#include <iostream>
#include <Windows.h>
#include "Actor.h"

using namespace std;
/*
enum class MoveType {
	Right,
	Up,
	Left,
	Down
};*/

// �Լ� �̸� : printTo100
// ���� : 0~100���� ���
// �Է°� : ����
// ��°� : ����
void printTo100()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

// �Լ� �̸� : printToEven
// ���� : 0~100���� ¦�� ���
// �Է°� : ����
// ��°� : ����
void printToEven()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 50; ++i)
	{
		// i     = 0,  1,  2, 3, 4,  5,   6,  7,  8,  9, 10...
		// i * 2 = 0,  2,  4, 6, 8, 10, 12, 14, 16,

		number[i] = i * 2;
		cout << number[i] << endl;
	}
}

// �Լ� �̸� : printToOdd
// ���� : 0~100���� Ȧ�� ���
// �Է°� : ����
// ��°� : ����
void printToOdd()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 50; ++i)
	{
		// i     = 0,  1,  2, 3, 4,  5,   6,  7,  8,  9, 10...
		// i * 2 = 0,  2, 4, 6, 8, 10, 12, 14, 16,
		// i * 2 + 1 = 1, 3, 5, 7, 9, 11, 13, 15, 17,

		number[i] = i * 2 + 1;
		cout << number[i] << endl;
	}
}

// �Լ� �̸� : printTo3Dra
// ���� : 0~100���� 3��� ���
// �Է°� : ����
// ��°� : ����
void printTo3Dra()
{
	int number[1000] = { 0 };

	//number�� 0~100���� 3�� ��� ���
	for (int i = 0; i < 34; ++i)
	{
		// i     = 0,  1,  2, 3, 4,  5,   6,  7,  8,  9, 10...
		// i * 2 = 0,  2,  4, 6, 8, 10, 12, 14, 16,

		number[i] = i * 3;
		cout << number[i] << endl;
	}
}

// �Լ� �̸� : printTo3multi
// ���� : 0~100���� 3�¼� ���
// �Է°� : ����
// ��°� : ����
void printTo3multi()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 10; ++i)
	{
		number[i] = 1;
		// 3//1��, 3*3//2��, 3*3*3//3��, 3*3*3*3//4�� 
		for (int j = 0; j < i; ++j)// j�� i������ �����ϸ鼭 3�� �����ش�.
		{
			number[i] *= 3;
		}
		cout << number[i] << endl;
	}

	//// i0 = 3
	//// i1 = i0 * 3//i0=3
	//// i2 = i1 * 3//i1=9
	//// i3 = i2 * 3//i2=27
	//// i4 = i3 * 3//
	//// i5 = i4 * 3//
	//number[0] = 3;
	//for (int i = 1; i < 10; ++i)
	//{
	//	number[i] = number[i - 1] * 3;
	//	cout << number[i - 1] << endl;
	//}
}
// �Լ� �̸� : printToGogodan
// ���� : n�� ������ * 9 ���� ���
// �Է°� : int n
// ��°� : ����
void printToGogodan(int n)
{
	for (int i = 2; i <= 9; ++i)
	{
		int result = n * i;
		cout << n << " * " << i << " = " << result << endl;
	}
	/*
	// cout << number[i] << endl;
	// "2 * " << i << " = " <<  <<
	// 2 * 1 = 2
	// 2 * 2 = 4
	// 2 * 3 = 6
	// 2 * 4 = 8
	// 2 * 5 = 10
	// 2 * 6 = 12
	// 2 * 7 = 14
	// 2 * 8 = 16
	// 2 * 9 = 18
	for (int j = 2; j <= 9; ++j)
	{
		for (int i = 1; i <= 9; ++i)
		{
			int result = j * i;
			cout << j << " * " << i << " = " << result << endl;
		}
	}
	// ���� �ϳ��� �Է� �޾Ƽ�
	// �� ���ڿ� 2~9 ������ ���
	// 10�� �Է� �޾Ҵٰ� �Ѵٸ�
	// 10 * 1 = 10
	// 10 * 2 = 20
	// 10 * 3 = 30
	// 10 * 4 = 40
	// 10 * 5 = 50
	// 10 * 6 = 60
	// 10 * 7 = 70
	// 10 * 8 = 80
	// 10 * 9 = 90
	int a = { 0 };
	cin >> a;
	for (int i = 2; i <= 9; ++i)
	{
		int result = a * i;
		cout << a << " * " << i << " = " << result << endl;
	}
	*/
}
// �Լ� �̸� : printFactorial
// ���� : n!�� ���� ������� ��ȯ�Ѵ�.
// �Է°� : int n
// ��°� : int
int printFactorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}

	return result;
}

int main()
{
	//x�� Location X��� �����ϰ� +�������� ���ٰ� - �������� ���� �����̰� ������

	/*
	���� ��ǥ

	x,z�� 0,0���� 20,0 -> 20,20 -> 0,20
	*/

	/*
	//1.if�� ����
	int x1 = { 0 };
	int	z1 = { 0 };
	int Way = { 1 };

	while (1)
	{
		system("cls");
		cout << "("<< x1<<", "<< z1 <<")" << endl;

		if (Way == 1)
		{
			//���������� �̵�(+����)
			x1++;
			if (x1 >= 20)
			{
				Way = 2;
			}
		}
		else if(Way == 2)
		{
			//�������� �̵�(-����)
			z1++;
			if (z >= 20)
			{
				Way = 3;
			}
		}
		else if (Way == 3)
		{
			//�������� �̵�(-����)
			x1--;
			if (x1 <= 0)
			{
				Way = 4;
			}
		}
		else if (Way == 4)
		{
			//�������� �̵�(-����)
			z1--;
			if (z1 <= 0)
			{
				Way = 1;
			}
		}

		Sleep(100);
	}

	//2.switch�� ����
	int x2 = { 0 };
	int	z2 = { 0 };
	MoveType myType = MoveType::Right;


	while (1)
	{
		system("cls");
		cout << "(" << x2 << ", " << z2 << ")" << endl;

		switch (myType)
		{
		case MoveType::Right:
			//���������� �̵�(+����)
			x2++;
			if (x2 >= 20)
			{
				myType =MoveType::Up;
			}
			break;
		case MoveType::Up:
			//���������� �̵�(+����)
			z2++;
			if (z2 >= 20)
			{
				 myType = MoveType::Left;
			}
			break;
		case MoveType::Left:
			//���������� �̵�(+����)
			x2--;
			if (x2 <= 0)
			{
				myType = MoveType::Down;
			}
			break;
		case MoveType::Down:
			//���������� �̵�(+����)
			z2--;
			if (z2 <= 0)
			{
				myType = MoveType::Right;
			}
			break;
		}

		Sleep(100);
	}



	//3.�����ϴ� *
	int num = 0;
	cout << "Num is ? ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		if (i == 0 || i == num - 1) {
			for (int j = 0; j < num; j++) {
				cout << "* ";
			}
			cout << "\n";
		}
		else {
			cout << "*";
			for (int j = 0; j < num - 2; j++)
			{
				cout << "  ";
			}
			cout << " * " << endl;
		}
	}
	Sleep(1000);

	int x3 = { 0 };
	int	z3 = { 0 };
	MoveType myType = MoveType::Right;

	while (1)
	{
		system("cls");
		cout << "(" << x3 << ", " << z3 << ")" << endl;

		for (int i = 0; i < z3; i++)
		{
			cout << endl;
		}
		for (int i = 0; i < x3; i++)
		{
			cout << "  ";
		}
		cout <<"*" << endl;
		for (int i = 0; i < num-z3; i++)
		{
			cout << endl;
		}
		cout <<"������ = "<< num << endl;
		switch (myType)
		{
		case MoveType::Right:
			//���������� �̵�(+����)
			x3++;
			if (x3 >= num)
			{
				myType = MoveType::Up;
			}
			break;
		case MoveType::Up:
			z3++;
			if (z3 >= num)
			{
				myType = MoveType::Left;
			}
			break;
		case MoveType::Left:
			x3--;
			if (x3 <= 0)
			{
				myType = MoveType::Down;
			}
			break;
		case MoveType::Down:
			z3--;
			if (z3 <= 0)
			{
				myType = MoveType::Right;
			}
			break;
		default:
				break;
		}
		Sleep(50);
	}


	//4.class�� Ȱ���� ��ǥ
	Actor ac;
while (1)
{
	ac.PrintLocation();
	ac.Tick();

	Sleep(100);
}

*/

//3.�����ϴ� *
int num = 0;
cout << "Num is ? ";
cin >> num;
for (int i = 0; i < num; i++)
{
	if (i == 0 || i == num - 1) {
		for (int j = 0; j < num; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
	else {
		cout << "*";
		for (int j = 0; j < num - 2; j++)
		{
			cout << "  ";
		}
		cout << " * " << endl;
	}
}
Sleep(500);

int x3 = { 0 };
int	z3 = { 0 };
MoveType myType = MoveType::Right;

while (1)
{
	system("cls");
	cout << "(" << x3 << ", " << z3 << ")" << endl;

	for (int i = 0; i < z3; i++)
	{
		cout << endl;
	}
	for (int i = 0; i < x3; i++)
	{
		cout << "  ";
	}
	cout << "*" << endl;
	for (int i = 0; i < num - z3; i++)
	{
		cout << endl;
	}
	cout << "������ = " << num << endl;
	switch (myType)
	{
	case MoveType::Right:
		//���������� �̵�(+����)
		x3++;
		if (x3 >= num)
		{
			myType = MoveType::Up;
		}
		break;
	case MoveType::Up:
		z3++;
		if (z3 >= num)
		{
			myType = MoveType::Left;
		}
		break;
	case MoveType::Left:
		x3--;
		if (x3 <= 0)
		{
			myType = MoveType::Down;
		}
		break;
	case MoveType::Down:
		z3--;
		if (z3 <= 0)
		{
			myType = MoveType::Right;
		}
		break;
	default:
		break;
	}
	Sleep(50);
}

}