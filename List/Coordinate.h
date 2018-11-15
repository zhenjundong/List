#pragma once
//#ifndef COORDINATE_H
//#define COORDINATE_H
#include <iostream>
using namespace std;
class Coordinate
{
	friend ostream &operator<<(ostream &out, Coordinate &coor);//КЏЪ§жиди??????
public:
	Coordinate(int x=0,int y=0);
	~Coordinate();
	void printCoordinate();
	bool operator==(Coordinate &coor);
private:
	int m_iX;
	int m_iY;
};

//#endif

