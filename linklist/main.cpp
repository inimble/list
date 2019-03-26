#include"main.h"

int main()
{
	int user_num;
	std::cout << "请输入链表的长度：";
	std::cin >> user_num;

	if (std::cin.good() != 1)
	{
		std::cerr << "输入值错误！" << std::endl;
		system("pause");
		return 0;
	}

	Chain list;
	Chain2 list2;

	std::cout << "请输入序号，您希望：" << std::endl << "1.创建单向链表" << std::endl << "2.创建双向链表" << std::endl << std::endl;
	int g;
	std::cin >> g;
	if (g == 1)
	{
		list.CreateChain(user_num);

		int a = 1;

		std::cout << "请输入您想要做的序号" << std::endl;
		std::cout << "1.返回链表中当前第一个元素的引用的值" << std::endl;
		std::cout << "2.返回链表中当前最后一个元素的引用的值" << std::endl;
		std::cout << "3.在链表第一个元素前添加元素" << std::endl;
		std::cout << "4.删除第一个元素" << std::endl;
		std::cout << "5.在链表最后添加一个元素" << std::endl;
		std::cout << "6.删除最后一个元素" << std::endl;
		std::cout << "7.在链表的任意位置前插入元素" << std::endl;
		std::cout << "8.删除任意位置元素" << std::endl;
		std::cout << "9.清空链表并将自动结束" << std::endl;
		std::cout << "10.查找元素是否存在" << std::endl;
		std::cout << "11.返回链表中元素的数量" << std::endl;
		std::cout << "12.遍历链表, 对每个元素调用visit指向的函数" << std::endl;
		std::cout << "13.反转链表，1234反转后变成4321" << std::endl;
		std::cout << "14.链表判环" << std::endl;
		std::cout << "15.偶节点反转，1234反转后变成2143" << std::endl;
		std::cout << "16.返回中间节点" << std::endl;
		std::cout << "0.结束" << std::endl << std::endl;
		while (a != 0)
		{
			std::cin >> a;
			int e;
			int b = 0;

			switch (a)
			{
			case 1:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "返回链表中当前第一个元素的引用的值：0" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "返回链表中当前第一个元素的引用的值：" << list.front() << std::endl << std::endl;
				break;

			case 2:
				if (b = 0) 
				{
					if (user_num == 0)
					{
						std::cerr << "返回链表中当前最后一个元素的引用的值：0" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "返回链表中当前最后一个元素的引用的值：" << list.back() << std::endl << std::endl;
				break;

			case 3:
				b++;
				std::cout << "请输入添加的元素：";
				std::cin >> e;
				if (std::cin.good() != 1)
				{
					std::cerr << "输入值错误！" << std::endl;
					system("pause");
					return 0;
				}
				list.push_front(e);
				std::cout << std::endl;
				break;

			case 4:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "没有可删除的元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "删除第一个元素" << std::endl;
				list.pop_front();
				std::cout << std::endl;
				break;

			case 5:
				b++;
				std::cout << "请输入添加的元素：";
				std::cin >> e;
				if (std::cin.good() != 1)
				{
					std::cerr << "输入值错误！" << std::endl;
					system("pause");
					return 0;
				}
				list.push_back(e);
				std::cout << std::endl;
				break;

			case 6:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "没有可删除的元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "删除最后一个元素" << std::endl;
				list.pop_back();
				std::cout << std::endl;
				break;

			case 7:
				b++;
				std::cout << "您希望将元素插入第几个前：" << std::endl;
				int index;
				std::cin >> index;
				std::cout << "请输入您希望插入的元素：" << std::endl;
				std::cin >> e;
				if (std::cin.good() != 1)
				{
					std::cerr << "输入值错误！" << std::endl;
					system("pause");
					return 0;
				}
				list.insert(index, e);
				std::cout << std::endl;
				break;

			case 8:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "没有可删除的元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "输入你希望删除第几个元素" << std::endl;
				std::cin >> index;
				list.erase(index, user_num);
				std::cout << std::endl;
				break;

			case 9:
				list.clear();
				break;

			case 10:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "没有可查找的元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "请输入您希望查找的元素：";
				std::cin >> e;
				if (list.contain(e)) std::cout << "存在" << std::endl;
				else std::cout << "不存在" << std::endl;
				std::cout << std::endl;
				break;

			case 11:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "链表中元素的数量为：0" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "链表中元素的数量为：" << list.size() << std::endl << std::endl;
				break;

			case 12:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "链表中无元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				void(*visit)(Node *p);
				visit = &print;
				list.traverse(visit);
				std::cout << std::endl;
				break;

			case 13:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "链表中无元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				list.reverse();
				std::cout << "反转已完成" << std::endl << std::endl;
				break;

			case 14:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "链表中无元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				if (b = 1)
				{
					if (user_num == 1)
					{
						std::cerr << "链表中只有一个元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				if (list.isLoop())std::cout << "链表成环" << std::endl;
				else std::cout << "链表不成环" << std::endl;
				std::cout << std::endl;
				break;

			case 15:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "链表中无元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				list.reverseEven();
				std::cout << "反转已完成" << std::endl << std::endl;
				break;

			case 16:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "链表中无元素" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "中间节点为：" << list.middleElem() << std::endl << std::endl;
				break;
			}
		}

		system("pause");
		return 0;
	}
	else
	{
	list2.CreateChain(user_num);

	int a = 1;

	std::cout << "请输入您想要做的序号" << std::endl;
	std::cout << "1.返回链表中当前第一个元素的引用的值" << std::endl;
	std::cout << "2.返回链表中当前最后一个元素的引用的值" << std::endl;
	std::cout << "3.在链表第一个元素前添加元素" << std::endl;
	std::cout << "4.删除第一个元素" << std::endl;
	std::cout << "5.在链表最后添加一个元素" << std::endl;
	std::cout << "6.删除最后一个元素" << std::endl;
	std::cout << "7.在链表的任意位置前插入元素" << std::endl;
	std::cout << "8.删除任意位置元素" << std::endl;
	std::cout << "9.清空链表并将自动结束" << std::endl;
	std::cout << "10.查找元素是否存在" << std::endl;
	std::cout << "11.返回链表中元素的数量" << std::endl;
	std::cout << "12.遍历链表, 对每个元素调用visit指向的函数" << std::endl;
	std::cout << "13.反转链表，1234反转后变成4321" << std::endl;
	std::cout << "14.链表判环" << std::endl;
	std::cout << "15.偶节点反转，1234反转后变成2143" << std::endl;
	std::cout << "16.返回中间节点" << std::endl;
	std::cout << "0.结束" << std::endl << std::endl;
	while (a != 0)
	{
		std::cin >> a;
		int e;
		int b = 0;

		switch (a)
		{
		case 1:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "返回链表中当前第一个元素的引用的值：0" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "返回链表中当前第一个元素的引用的值：" << list2.front() << std::endl << std::endl;
			break;

		case 2:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "返回链表中当前最后一个元素的引用的值：0" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "返回链表中当前最后一个元素的引用的值：" << list2.back() << std::endl << std::endl;
			break;

		case 3:
			b++;
			std::cout << "请输入添加的元素：";
			std::cin >> e;
			if (std::cin.good() != 1)
			{
				std::cerr << "输入值错误！" << std::endl;
				system("pause");
				return 0;
			}
			list2.push_front(e);
			std::cout << std::endl;
			break;

		case 4:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "没有可删除的元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "删除第一个元素" << std::endl;
			list2.pop_front();
			std::cout << std::endl;
			break;

		case 5:
			b++;
			std::cout << "请输入添加的元素：";
			std::cin >> e;
			if (std::cin.good() != 1)
			{
				std::cerr << "输入值错误！" << std::endl;
				system("pause");
				return 0;
			}
			list2.push_back(e);
			std::cout << std::endl;
			break;

		case 6:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "没有可删除的元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "删除最后一个元素" << std::endl;
			list2.pop_back();
			std::cout << std::endl;
			break;

		case 7:
			b++;
			std::cout << "您希望将元素插入第几个前：" << std::endl;
			int index;
			std::cin >> index;
			std::cout << "请输入您希望插入的元素：" << std::endl;
			std::cin >> e;
			if (std::cin.good() != 1)
			{
				std::cerr << "输入值错误！" << std::endl;
				system("pause");
				return 0;
			}
			list2.insert(index, e);
			std::cout << std::endl;
			break;

		case 8:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "没有可删除的元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "输入你希望删除第几个元素" << std::endl;
			std::cin >> index;
			list2.erase(index, user_num);
			std::cout << std::endl;
			break;

		case 9:
			list2.clear();
			break;

		case 10:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "没有可查找的元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "请输入您希望查找的元素：";
			std::cin >> e;
			if (list2.contain(e)) std::cout << "存在" << std::endl;
			else std::cout << "不存在" << std::endl;
			std::cout << std::endl;
			break;

		case 11:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "链表中元素的数量为：0" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "链表中元素的数量为：" << list2.size() << std::endl << std::endl;
			break;

		case 12:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "链表中无元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			void(*visit2)(node *p);
			visit2 = &print2;
			list2.traverse(visit2);
			std::cout << std::endl;
			break;

		case 13:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "链表中无元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			list2.reverse();
			std::cout << "反转已完成" << std::endl << std::endl;
			break;

		case 14:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "链表中无元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			if (b = 1)
			{
				if (user_num == 1)
				{
					std::cerr << "链表中只有一个元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			if (list2.isLoop())std::cout << "链表成环" << std::endl;
			else std::cout << "链表不成环" << std::endl;
			std::cout << std::endl;
			break;

		case 15:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "链表中无元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			list2.reverseEven();
			std::cout << "反转已完成" << std::endl << std::endl;
			break;

		case 16:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "链表中无元素" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "中间节点为：" << list2.middleElem() << std::endl << std::endl;
			break;
		}
	}

	system("pause");
	return 0;
	}
}

void print(Node *p)
{
	std::cout << p->data << std::endl;
}

void print2(node *p)
{
	std::cout << p->data << std::endl;
}