#include "Chain.h"

Chain::Chain()
{
	head = new Node;
	if (head == NULL)
	{
		std::cout << "分配存储空间失败" << std::endl;
	}
	head->next = NULL;
}

Chain::~Chain()
{
	Node *p;
	while (head->next != nullptr)
		{
			p = head->next;
			delete head;
			head = p;
		}
	if (head)
	{
		delete head;
	}
	head = nullptr;
	tail = nullptr;
	last = nullptr;
}

void Chain::CreateChain(int n)
{
	Node *p1 = nullptr;
	Node *p2 = nullptr;
	int a = 1;
	std::cout << "请依次输入" << n << "个链表的值(整数):" << std::endl;
	for (int i = 0; i < n; i++)
	{
		if (a == 1) p1 = p2 = head; 
		else
		{
			p2 = new Node;
			p1->next = p2;
		}
		std::cin >> p2->data;
		if (std::cin.good() != 1)
		{
			std::cerr << "输入值错误！" << std::endl;
			break;
		}
		if (i != n - 1)p1 = p2;
		p2->next = nullptr;
		a++;
	}
	last = p1;
	tail = p2;
}

int& Chain::front()
{
	
	return head->data;
}

int& Chain::back()
{
	return tail->data;
}

bool Chain::push_front(int& e)
{
	Node *p;
	p = head;
	head = new Node;
	head->next = p;
	head->data = e;
	return false;
}

bool Chain::pop_front()
{
	Node *p;
	p = head;
	head = head->next;
	free(p);
	return false;
}

bool Chain::push_back(int & e)
{
	last = tail;
	tail = new Node;
	last ->next = tail;
	tail->data = e;
	return false;
}

bool Chain::pop_back()
{
	Node *p;
	p = head;
	while (p->next)
	{
		if (p->next->next == nullptr)
		{
			tail = p;
		}
		p = p->next;
	}
	delete p;
	tail->next = nullptr;
	return false;
}

bool Chain::insert(unsigned int index, int & e)
{
	Node *p = head;
	if (index == 1)  Chain::push_front(e);
	else
	{
		for (unsigned int i = 1; i < index; i++)
		{
			p = p->next;
			if (p == nullptr)
			{
				std::cerr << "插入的值超过范围！" << std::endl;
				return false;
			}
		}
		Node *p1;
		p1 = new Node;
		p1->next = p->next;
		p->next = p1;
		p1->data = e;
	}
		return false;
}

bool Chain::erase(unsigned int index,int n)
{
	Node *p1 = head;
	Node *p2 = head;
	if (index == 1)Chain::pop_front();
	else if (index == n)Chain::pop_back(),n--;
	else
	{
		for (unsigned int i = 1; i < index; i++)
		{
			p2 = p1->next;
			if (p2 == NULL)
			{
				std::cout << "输入的值超过范围！" << std::endl;
				return 0;
			}
			if (i == index - 1) break;
			p1 = p2;
		}
		p1->next = p2->next;
		free(p2);
	}
	return false;
}

bool Chain::clear()
{
	Node *p;
	if (head == nullptr)
	{
		std::cout << "链表已被清空" << std::endl;
		return false;
	}
	if (head->next == nullptr)
	{
		std::cout << "链表已被清空" << std::endl;
		return false;
	}
	while (head->next)
	{
		p = head->next;
		delete head;
		head = p;
	}
	std::cout << "链表已被清空" << std::endl;
	return false;
}

bool Chain::contain(int & e)
{
	Node *p;
	p = head;
	while (p)
	{
		if (p->data == e) return true;
		p = p->next;
	}
	return false;
}

unsigned int Chain::size()
{
	Node *p = head;
	int a = 0;
	while (p)
	{
		p = p->next;
		a++;
	}
	return a;
}

bool Chain::traverse(void(*visit)(Node *p))
{
	Node *p;
	p = head;
	while (p)
	{
		visit(p);
		p = p->next;
	}
	return false;
}

bool Chain::reverse()
{
	Node *p1;
	Node *p2;
	Node *p3;
	p1 = head;
	tail = head;
	p2 = p1->next;
	while (p2)
	{
		if (p1 == tail) p1->next = nullptr;
		p3 = p2->next;
		p2->next = p1;
		if (p3 == nullptr)
		{
			head = p2;
		}
		p1 = p2;
		p2 = p3;
	}
	return false;
}

bool Chain::isLoop()
{
	Node *slow;
	Node *fast;
	fast = slow = head;
	while (1) 
	{
		fast = fast->next ? fast->next : nullptr;
		if (!fast)return false;
		fast = fast->next ? fast->next : nullptr;
		if (!fast)return false;
		slow = slow->next ? slow->next : nullptr;
		if (!slow)return false;
		if (slow == fast) break;
	}
	return true;
}

bool Chain::reverseEven()
{
	int a = 1;
	int b = 1;
	Node *p1;
	Node *p2;
	Node *p3;
	p1 = p3 = head;
	p2 = p1->next;
	p3 = p2->next;
	while (p2&&p1)
	{
		a++;
		if (a % 2 == 0)
		{
			if (b == 1)
			{
				if (p1 == head)
				{
					head = p2;
				}
				else p3->next = p1;
				p1->next = p2->next;
				p2->next = p1;
				p3 = p1;
			}
			if (b == -1)
			{
				p3->next = p1;
				p2->next = p1->next;
				p1->next = p2;
				p3 = p2;
			}
			b = -b;
		}
		if (b == 1)
		{
			p1 = p2;
			p2 = p2->next;
		}
		if (b == -1)
		{
			p2 = p1;
			p1 = p1->next;
		}
	}
	return false;
}

int& Chain::middleElem()
{
	Node *p = head;
	int i = 0;
	while (p)
	{
		i++;
		p = p->next;
	}
	i /= 2;
	p = head;
	for (int j = 0; j < i; j++)
	{
		p = p->next;
	}
	return p->data;
}
