#pragma once
#include "Coordinate.h"
class MyList
{
public:
	MyList(int size);
	~MyList();
	void clcList();//���
	bool EmptyList();//�п�
	int GetLength();//��ȡ��
	bool GetElement(int i, Coordinate *e);//��ȡָ��Ԫ��
	int LocatElement(Coordinate *e);//��λָ��Ԫ��λ��
	bool PreElement(Coordinate *e, Coordinate *preElement);//��ǰ��
	bool nextElement(Coordinate *e, Coordinate *nextElement);//�Һ��
	void ListTraverse();//����
	bool InsertList(int i, Coordinate *e);//����
	bool deleteList(int i, Coordinate *e);//ɾ��

private:
	int m_iLength;
	int m_iSize;
	Coordinate *m_pList;
};

