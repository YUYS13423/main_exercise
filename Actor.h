#pragma once

enum class MoveType {
	Right,
	Up,
	Left,
	Down
};
/*
Actor Ŭ����
�ɹ� ����
private : MoveType myTpe - �ʱⰪ : MoveType::Right
private : int x - �ʱⰪ : 0
private : int y - �ʱⰪ : 0

function(�Լ�)
public : void Tick(); // main() �Լ��� while �� �ȿ��� ȣ���� ����
public : void PrintLocation(); // (x = x, z = z) <==�̷��� ���
*/
class Actor
{
private:
	MoveType myType;
	int x;
	int y;

public:
	Actor();

	void Tick();
	void PrintLocation();
};
