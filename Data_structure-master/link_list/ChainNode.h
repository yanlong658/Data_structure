/*
陣列（Array）

優點：
1.可支援循序及隨機存取
2.可靠度高，不會因為鏈結斷裂而遺失資料
3.循序存取速度快

缺點：
1.因占用連續的記憶體空間可能會浪費不必要之記憶體
2.刪除或插入新元素造成資料移動頻繁（在大多數程式語言中陣列大小是固定的）
3.各元素型態皆相同
4.不支援串列之共享

--------------------------------------------------
鏈結串列（Linked List）
優點：
1.元素在記憶體中可以非連續
2.方便動態刪除或插入新元素
3.各節點資料型態不必一定相同
4.支援串列之共享

缺點：
1.僅支援循序存取
2.指標斷裂，資料就遺失
3.循序存取速度慢，因需要先讀取指標
*/
#include <iostream>
#pragma once
class ChainNode
{
	friend class chain;

public: 
	ChainNode(int element = 0, ChainNode *next = 0)
	{
		data = element;
		link = next;
	}
	
	void create2()
	{
		//自行配置記憶體，使用 new
		ChainNode* second = new ChainNode(20, 0);
		first = new ChainNode(10, second);
		std::cout << "first的adress : " << first << std::endl;
		std::cout <<"first->data : "<< first->data<<std::endl;
		std::cout << "first->link : " << first->link << std::endl;
		std::cout << "second的adress : " << second << std::endl;
		std::cout << "second->data 的資料 : " << second->data << std::endl;
		std::cout <<"second->link 指向0 表示結束 : "<< second->link << std::endl;
	}
	
public:
	int data;

	ChainNode *link ,*first;
};