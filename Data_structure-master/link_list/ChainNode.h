/*
�}�C�]Array�^

�u�I�G
1.�i�䴩�`�Ǥ��H���s��
2.�i�a�װ��A���|�]���쵲�_���ӿ򥢸��
3.�`�Ǧs���t�ק�

���I�G
1.�]�e�γs�򪺰O����Ŷ��i��|���O�����n���O����
2.�R���δ��J�s�����y����Ʋ����W�c�]�b�j�h�Ƶ{���y�����}�C�j�p�O�T�w���^
3.�U�������A�ҬۦP
4.���䴩��C���@��

--------------------------------------------------
�쵲��C�]Linked List�^
�u�I�G
1.�����b�O���餤�i�H�D�s��
2.��K�ʺA�R���δ��J�s����
3.�U�`�I��ƫ��A�����@�w�ۦP
4.�䴩��C���@��

���I�G
1.�Ȥ䴩�`�Ǧs��
2.�����_���A��ƴN��
3.�`�Ǧs���t�׺C�A�]�ݭn��Ū������
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
		//�ۦ�t�m�O����A�ϥ� new
		ChainNode* second = new ChainNode(20, 0);
		first = new ChainNode(10, second);
		std::cout << "first��adress : " << first << std::endl;
		std::cout <<"first->data : "<< first->data<<std::endl;
		std::cout << "first->link : " << first->link << std::endl;
		std::cout << "second��adress : " << second << std::endl;
		std::cout << "second->data ����� : " << second->data << std::endl;
		std::cout <<"second->link ���V0 ��ܵ��� : "<< second->link << std::endl;
	}
	
public:
	int data;

	ChainNode *link ,*first;
};