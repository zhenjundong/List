// List.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "MyList.h"
#include "Coordinate.h"
using namespace std;

int main()
{
	Coordinate e1(2,5);
	Coordinate e2(1,4);
	Coordinate e3(7, 9);
	Coordinate temp(10, 0);
	MyList *l1 = new MyList(11);

	//l1->InsertList(1, &e1);
	//l1->InsertList(2, &e2);
	//l1->InsertList(3, &e3);
	//l1->ListTraverse();
	delete l1;
	l1 = NULL;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
