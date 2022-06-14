#include "Actor.h"
#include <iostream>

using namespace std;

Actor::Actor(): x(0),y(0), myType{MoveType::Right}
{
}

void Actor::Tick()
{
	switch (myType)
	{
	case MoveType::Right:
		//���������� �̵�(+����)
		x++;
		if (x >= 20)
		{
			myType = MoveType::Up;
		}
		break;
	case MoveType::Up:
		//���������� �̵�(+����)
		y++;
		if (y >= 20)
		{
			myType = MoveType::Left;
		}
		break;
	case MoveType::Left:
		//���������� �̵�(+����)
		x--;
		if (x <= 0)
		{
			myType = MoveType::Down;
		}
		break;
	case MoveType::Down:
		//���������� �̵�(+����)
		y--;
		if (y <= 0)
		{
			myType = MoveType::Right;
		}
		break;
	}
}

void Actor::PrintLocation()
{
	system("cls");
	cout << "(x = " << x << ", y = " << y << ")" << endl;
}
