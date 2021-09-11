#pragma once
#include<iostream>

class CPosition
{
public:
	CPosition();
	const CPosition operator +(const CPosition& pos)
	{//ŽQÆ“n‚µ
		CPosition newpos;
		newpos.x = x + pos.x;
		newpos.y = y + pos.y;

		return newpos;
	};


	const CPosition operator +(const CPosition* pos)
	{//ƒAƒhƒŒƒX“n‚µ
		CPosition newpos;
		newpos.x = x + pos->x;
		newpos.y = y + pos->y;

		return newpos;
	};


	const bool operator ==(const CPosition& pos)
	{
		const bool result = pos.x == x;
		return result;
	}


	const bool operator ==(const CPosition* pos)
	{
		const bool result = pos->x == x;
		return result;
	}


	const void show();

	static CPosition* Instance();
private:
	int y;
	int x;
};


CPosition::CPosition()
{
	CPosition::x = 10;
	CPosition::y = 20;
}

const void 
CPosition::show()
{
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}

CPosition*
CPosition::Instance()
{
	static CPosition Instance;
	return &Instance;
}