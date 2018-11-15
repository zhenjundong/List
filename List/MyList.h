#pragma once
#include "Coordinate.h"
class MyList
{
public:
	MyList(int size);
	~MyList();
	void clcList();//清空
	bool EmptyList();//判空
	int GetLength();//获取表长
	bool GetElement(int i, Coordinate *e);//获取指定元素
	int LocatElement(Coordinate *e);//定位指定元素位置
	bool PreElement(Coordinate *e, Coordinate *preElement);//找前驱
	bool nextElement(Coordinate *e, Coordinate *nextElement);//找后继
	void ListTraverse();//遍历
	bool InsertList(int i, Coordinate *e);//插入
	bool deleteList(int i, Coordinate *e);//删除

private:
	int m_iLength;
	int m_iSize;
	Coordinate *m_pList;
};

