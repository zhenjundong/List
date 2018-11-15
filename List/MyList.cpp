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

bool MyList::EmptyList()//�п�
{
	return m_iLength == 0 ? true : false;
}

int MyList::GetLength()//��ȡ��
{
	return m_iLength;
}
bool MyList::GetElement(int i, Coordinate *e)//��ȡָ��Ԫ��
{
	//��ȡǰ��Ҫ�����ж�
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
int MyList::LocatElement(Coordinate *e)//��λָ��Ԫ��λ��
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

bool MyList::PreElement(Coordinate *e, Coordinate *preElement)//��ǰ��
{
	int temp = LocatElement(e);
	if (temp == -1)//����û�ҵ����Ԫ��
	{
		return false;
	}
	else//����ж����Ԫ���Ƿ���ǰ��
	{
		if (temp == 0)//û��ǰ��
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

bool MyList::nextElement(Coordinate *e, Coordinate *nextElement)//�Һ��
{
	int temp = LocatElement(e);
	if (temp == -1)//����û�ҵ����Ԫ��
	{
		return false;
	}
	else//����ж����Ԫ���Ƿ��к��
	{
		if (temp == m_iLength - 1)//û�к��
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

void MyList::ListTraverse()//����
{
	for (int i = 0;i < m_iLength;i++)
	{
		m_pList[i].printCoordinate();
	}

}

bool MyList::InsertList(int i, Coordinate *e)//����
{
	//���ж�
	if (i<0 || i>m_iLength)
	{
		return false;
	}
	else
	{
		//���ƶ����ٲ���
		for (int temp = m_iLength - 1;temp >= i;temp--)//�Ӻ���ǰ��
		{
			m_pList[temp + 1] = m_pList[temp];//i��Ԫ���Ƶ�i+1λ��
		}
		m_pList[i] = *e;
		m_iLength++;//������Ҫע��
		return true;
	}
}

bool MyList::deleteList(int i, Coordinate *e)//ɾ��
{
	//���ж�
	if (i<0 || i>=m_iLength)
	{
		return false;
	}
	else
	{
		*e = m_pList[i];
		//���ƶ����ٲ���
		for (int temp = i+1;temp < m_iLength;temp++)//��ǰ������
		{
			m_pList[temp - 1] = m_pList[temp];//i+1��Ԫ���Ƶ�iλ��
		}
		m_iLength--;
		return true;
	}
}