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
		//오른쪽으로 이동(+방향)
		x++;
		if (x >= 20)
		{
			myType = MoveType::Up;
		}
		break;
	case MoveType::Up:
		//오른쪽으로 이동(+방향)
		y++;
		if (y >= 20)
		{
			myType = MoveType::Left;
		}
		break;
	case MoveType::Left:
		//오른쪽으로 이동(+방향)
		x--;
		if (x <= 0)
		{
			myType = MoveType::Down;
		}
		break;
	case MoveType::Down:
		//오른쪽으로 이동(+방향)
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
