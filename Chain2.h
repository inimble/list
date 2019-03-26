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
	 * 返回链表中第一个元素的引用
	 */
	int& front();

	/*
	 * 返回链表中最后一个元素的引用
	 */
	int& back();

	/*
	 * 在链表第一个元素前添加元素e
	 */
	bool push_front(int& e);

	/*
	 * 删除链表第一个元素
	 */
	bool pop_front();

	/*
	 * 在链表最后一个元素后添加元素e
	 */
	bool push_back(int& e);

	/*
	 * 删除链表最后一个元素
	 */
	bool pop_back();

	/*
	 * 在链表的第index + 1个元素前插入元素e
	 */
	bool insert(unsigned int index, int& e);

	/*
	 * 删除任意位置元素
	 */
	bool erase(unsigned int index, int n);

	/*
	 * 清空链表
	 */
	bool clear();

	/*
	 * 查找元素是否存在
	 */
	bool contain(int& e);

	/*
	 * 返回链表中元素的数量
	 */
	unsigned int size();
	/*
	 * 遍历链表, 对每个元素调用visit指向的函数
	 */
	bool traverse(void(*visit2)(node *p));

	/*
	 * 反转链表，1234反转后变成4321
	 */
	bool reverse();

	/*
	 * 链表判环
	 */
	bool isLoop();

	/*
	 * 偶节点反转，1234反转后变成2143
	 */
	bool reverseEven();

	/*
	 * 返回中间节点
	 */
	int& middleElem();
	node *head;
	node *next;
	node *tail;
	node *last;
};
#endif