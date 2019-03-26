#pragma once
#ifndef __CHAIN2_H__
#define __CHAIN2_H__
#include <iostream>

struct node
{
	int data;
	node *next;
	node *pre;
};

class Chain2
{
public:
	Chain2();
	~Chain2();
	void CreateChain(int n);
	/*
	 * ���������е�һ��Ԫ�ص�����
	 */
	int& front();

	/*
	 * �������������һ��Ԫ�ص�����
	 */
	int& back();

	/*
	 * �������һ��Ԫ��ǰ���Ԫ��e
	 */
	bool push_front(int& e);

	/*
	 * ɾ�������һ��Ԫ��
	 */
	bool pop_front();

	/*
	 * ���������һ��Ԫ�غ����Ԫ��e
	 */
	bool push_back(int& e);

	/*
	 * ɾ���������һ��Ԫ��
	 */
	bool pop_back();

	/*
	 * ������ĵ�index + 1��Ԫ��ǰ����Ԫ��e
	 */
	bool insert(unsigned int index, int& e);

	/*
	 * ɾ������λ��Ԫ��
	 */
	bool erase(unsigned int index, int n);

	/*
	 * �������
	 */
	bool clear();

	/*
	 * ����Ԫ���Ƿ����
	 */
	bool contain(int& e);

	/*
	 * ����������Ԫ�ص�����
	 */
	unsigned int size();
	/*
	 * ��������, ��ÿ��Ԫ�ص���visitָ��ĺ���
	 */
	bool traverse(void(*visit2)(node *p));

	/*
	 * ��ת����1234��ת����4321
	 */
	bool reverse();

	/*
	 * �����л�
	 */
	bool isLoop();

	/*
	 * ż�ڵ㷴ת��1234��ת����2143
	 */
	bool reverseEven();

	/*
	 * �����м�ڵ�
	 */
	int& middleElem();
	node *head;
	node *next;
	node *tail;
	node *last;
};
#endif