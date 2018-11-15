#include "pch.h"
#include "MyList.h"
#include <iostream>
#include "Coordinate.h"
using namespace std;


MyList::MyList(int size)
{
	m_iLength=0;
	m_iSize=size;
	m_pList=new Coordinate[m_iSize];
}


MyList::~MyList()
{
delete m_pList;
m_pList = NULL;
}

void MyList::clcList()
{
	m_iLength = 0;
}

bool MyList::EmptyList()//判空
{
	return m_iLength == 0 ? true : false;
}

int MyList::GetLength()//获取表长
{
	return m_iLength;
}
bool MyList::GetElement(int i, Coordinate *e)//获取指定元素
{
	//获取前先要进行判断
	if (i<0 || i>m_iSize)
	{
		return false;
	}
	else
	{
		*e = m_pList[i];
		return true;
	}
}
int MyList::LocatElement(Coordinate *e)//定位指定元素位置
{
	int temp = 0;
	int i = 0;
	for (i = 0;i < m_iLength;i++)
	{
		if (*e == m_pList[i])
		{
			temp++;
			return i;
		}
}
return -1;

}

bool MyList::PreElement(Coordinate *e, Coordinate *preElement)//找前驱
{
	int temp = LocatElement(e);
	if (temp == -1)//首先没找到这个元素
	{
		return false;
	}
	else//其次判断这个元素是否有前驱
	{
		if (temp == 0)//没有前驱
		{
			return false;
		}
		else
		{
			*preElement = m_pList[temp - 1];
			return true;
		}
	}
}

bool MyList::nextElement(Coordinate *e, Coordinate *nextElement)//找后继
{
	int temp = LocatElement(e);
	if (temp == -1)//首先没找到这个元素
	{
		return false;
	}
	else//其次判断这个元素是否有后继
	{
		if (temp == m_iLength - 1)//没有后继
		{
			return false;
		}
		else
		{
			*nextElement = m_pList[temp + 1];
			return true;
		}
	}
}

void MyList::ListTraverse()//遍历
{
	for (int i = 0;i < m_iLength;i++)
	{
		m_pList[i].printCoordinate();
	}

}

bool MyList::InsertList(int i, Coordinate *e)//插入
{
	//先判断
	if (i<0 || i>m_iLength)
	{
		return false;
	}
	else
	{
		//先移动，再插入
		for (int temp = m_iLength - 1;temp >= i;temp--)//从后往前移
		{
			m_pList[temp + 1] = m_pList[temp];//i的元素移到i+1位置
		}
		m_pList[i] = *e;
		m_iLength++;//长度需要注意
		return true;
	}
}

bool MyList::deleteList(int i, Coordinate *e)//删除
{
	//先判断
	if (i<0 || i>=m_iLength)
	{
		return false;
	}
	else
	{
		*e = m_pList[i];
		//先移动，再插入
		for (int temp = i+1;temp < m_iLength;temp++)//从前往后移
		{
			m_pList[temp - 1] = m_pList[temp];//i+1的元素移到i位置
		}
		m_iLength--;
		return true;
	}
}