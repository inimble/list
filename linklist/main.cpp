#include"main.h"

int main()
{
	int user_num;
	std::cout << "����������ĳ��ȣ�";
	std::cin >> user_num;

	if (std::cin.good() != 1)
	{
		std::cerr << "����ֵ����" << std::endl;
		system("pause");
		return 0;
	}

	Chain list;
	Chain2 list2;

	std::cout << "��������ţ���ϣ����" << std::endl << "1.������������" << std::endl << "2.����˫������" << std::endl << std::endl;
	int g;
	std::cin >> g;
	if (g == 1)
	{
		list.CreateChain(user_num);

		int a = 1;

		std::cout << "����������Ҫ�������" << std::endl;
		std::cout << "1.���������е�ǰ��һ��Ԫ�ص����õ�ֵ" << std::endl;
		std::cout << "2.���������е�ǰ���һ��Ԫ�ص����õ�ֵ" << std::endl;
		std::cout << "3.�������һ��Ԫ��ǰ���Ԫ��" << std::endl;
		std::cout << "4.ɾ����һ��Ԫ��" << std::endl;
		std::cout << "5.������������һ��Ԫ��" << std::endl;
		std::cout << "6.ɾ�����һ��Ԫ��" << std::endl;
		std::cout << "7.�����������λ��ǰ����Ԫ��" << std::endl;
		std::cout << "8.ɾ������λ��Ԫ��" << std::endl;
		std::cout << "9.����������Զ�����" << std::endl;
		std::cout << "10.����Ԫ���Ƿ����" << std::endl;
		std::cout << "11.����������Ԫ�ص�����" << std::endl;
		std::cout << "12.��������, ��ÿ��Ԫ�ص���visitָ��ĺ���" << std::endl;
		std::cout << "13.��ת����1234��ת����4321" << std::endl;
		std::cout << "14.�����л�" << std::endl;
		std::cout << "15.ż�ڵ㷴ת��1234��ת����2143" << std::endl;
		std::cout << "16.�����м�ڵ�" << std::endl;
		std::cout << "0.����" << std::endl << std::endl;
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
						std::cerr << "���������е�ǰ��һ��Ԫ�ص����õ�ֵ��0" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "���������е�ǰ��һ��Ԫ�ص����õ�ֵ��" << list.front() << std::endl << std::endl;
				break;

			case 2:
				if (b = 0) 
				{
					if (user_num == 0)
					{
						std::cerr << "���������е�ǰ���һ��Ԫ�ص����õ�ֵ��0" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "���������е�ǰ���һ��Ԫ�ص����õ�ֵ��" << list.back() << std::endl << std::endl;
				break;

			case 3:
				b++;
				std::cout << "��������ӵ�Ԫ�أ�";
				std::cin >> e;
				if (std::cin.good() != 1)
				{
					std::cerr << "����ֵ����" << std::endl;
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
						std::cerr << "û�п�ɾ����Ԫ��" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "ɾ����һ��Ԫ��" << std::endl;
				list.pop_front();
				std::cout << std::endl;
				break;

			case 5:
				b++;
				std::cout << "��������ӵ�Ԫ�أ�";
				std::cin >> e;
				if (std::cin.good() != 1)
				{
					std::cerr << "����ֵ����" << std::endl;
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
						std::cerr << "û�п�ɾ����Ԫ��" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "ɾ�����һ��Ԫ��" << std::endl;
				list.pop_back();
				std::cout << std::endl;
				break;

			case 7:
				b++;
				std::cout << "��ϣ����Ԫ�ز���ڼ���ǰ��" << std::endl;
				int index;
				std::cin >> index;
				std::cout << "��������ϣ�������Ԫ�أ�" << std::endl;
				std::cin >> e;
				if (std::cin.good() != 1)
				{
					std::cerr << "����ֵ����" << std::endl;
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
						std::cerr << "û�п�ɾ����Ԫ��" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "������ϣ��ɾ���ڼ���Ԫ��" << std::endl;
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
						std::cerr << "û�пɲ��ҵ�Ԫ��" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "��������ϣ�����ҵ�Ԫ�أ�";
				std::cin >> e;
				if (list.contain(e)) std::cout << "����" << std::endl;
				else std::cout << "������" << std::endl;
				std::cout << std::endl;
				break;

			case 11:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "������Ԫ�ص�����Ϊ��0" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "������Ԫ�ص�����Ϊ��" << list.size() << std::endl << std::endl;
				break;

			case 12:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "��������Ԫ��" << std::endl;
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
						std::cerr << "��������Ԫ��" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				list.reverse();
				std::cout << "��ת�����" << std::endl << std::endl;
				break;

			case 14:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "��������Ԫ��" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				if (b = 1)
				{
					if (user_num == 1)
					{
						std::cerr << "������ֻ��һ��Ԫ��" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				if (list.isLoop())std::cout << "����ɻ�" << std::endl;
				else std::cout << "�����ɻ�" << std::endl;
				std::cout << std::endl;
				break;

			case 15:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "��������Ԫ��" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				list.reverseEven();
				std::cout << "��ת�����" << std::endl << std::endl;
				break;

			case 16:
				if (b = 0)
				{
					if (user_num == 0)
					{
						std::cerr << "��������Ԫ��" << std::endl;
						std::cout << std::endl;
						break;
					}
				}
				std::cout << "�м�ڵ�Ϊ��" << list.middleElem() << std::endl << std::endl;
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

	std::cout << "����������Ҫ�������" << std::endl;
	std::cout << "1.���������е�ǰ��һ��Ԫ�ص����õ�ֵ" << std::endl;
	std::cout << "2.���������е�ǰ���һ��Ԫ�ص����õ�ֵ" << std::endl;
	std::cout << "3.�������һ��Ԫ��ǰ���Ԫ��" << std::endl;
	std::cout << "4.ɾ����һ��Ԫ��" << std::endl;
	std::cout << "5.������������һ��Ԫ��" << std::endl;
	std::cout << "6.ɾ�����һ��Ԫ��" << std::endl;
	std::cout << "7.�����������λ��ǰ����Ԫ��" << std::endl;
	std::cout << "8.ɾ������λ��Ԫ��" << std::endl;
	std::cout << "9.����������Զ�����" << std::endl;
	std::cout << "10.����Ԫ���Ƿ����" << std::endl;
	std::cout << "11.����������Ԫ�ص�����" << std::endl;
	std::cout << "12.��������, ��ÿ��Ԫ�ص���visitָ��ĺ���" << std::endl;
	std::cout << "13.��ת����1234��ת����4321" << std::endl;
	std::cout << "14.�����л�" << std::endl;
	std::cout << "15.ż�ڵ㷴ת��1234��ת����2143" << std::endl;
	std::cout << "16.�����м�ڵ�" << std::endl;
	std::cout << "0.����" << std::endl << std::endl;
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
					std::cerr << "���������е�ǰ��һ��Ԫ�ص����õ�ֵ��0" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "���������е�ǰ��һ��Ԫ�ص����õ�ֵ��" << list2.front() << std::endl << std::endl;
			break;

		case 2:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "���������е�ǰ���һ��Ԫ�ص����õ�ֵ��0" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "���������е�ǰ���һ��Ԫ�ص����õ�ֵ��" << list2.back() << std::endl << std::endl;
			break;

		case 3:
			b++;
			std::cout << "��������ӵ�Ԫ�أ�";
			std::cin >> e;
			if (std::cin.good() != 1)
			{
				std::cerr << "����ֵ����" << std::endl;
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
					std::cerr << "û�п�ɾ����Ԫ��" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "ɾ����һ��Ԫ��" << std::endl;
			list2.pop_front();
			std::cout << std::endl;
			break;

		case 5:
			b++;
			std::cout << "��������ӵ�Ԫ�أ�";
			std::cin >> e;
			if (std::cin.good() != 1)
			{
				std::cerr << "����ֵ����" << std::endl;
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
					std::cerr << "û�п�ɾ����Ԫ��" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "ɾ�����һ��Ԫ��" << std::endl;
			list2.pop_back();
			std::cout << std::endl;
			break;

		case 7:
			b++;
			std::cout << "��ϣ����Ԫ�ز���ڼ���ǰ��" << std::endl;
			int index;
			std::cin >> index;
			std::cout << "��������ϣ�������Ԫ�أ�" << std::endl;
			std::cin >> e;
			if (std::cin.good() != 1)
			{
				std::cerr << "����ֵ����" << std::endl;
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
					std::cerr << "û�п�ɾ����Ԫ��" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "������ϣ��ɾ���ڼ���Ԫ��" << std::endl;
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
					std::cerr << "û�пɲ��ҵ�Ԫ��" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "��������ϣ�����ҵ�Ԫ�أ�";
			std::cin >> e;
			if (list2.contain(e)) std::cout << "����" << std::endl;
			else std::cout << "������" << std::endl;
			std::cout << std::endl;
			break;

		case 11:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "������Ԫ�ص�����Ϊ��0" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "������Ԫ�ص�����Ϊ��" << list2.size() << std::endl << std::endl;
			break;

		case 12:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "��������Ԫ��" << std::endl;
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
					std::cerr << "��������Ԫ��" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			list2.reverse();
			std::cout << "��ת�����" << std::endl << std::endl;
			break;

		case 14:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "��������Ԫ��" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			if (b = 1)
			{
				if (user_num == 1)
				{
					std::cerr << "������ֻ��һ��Ԫ��" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			if (list2.isLoop())std::cout << "����ɻ�" << std::endl;
			else std::cout << "�����ɻ�" << std::endl;
			std::cout << std::endl;
			break;

		case 15:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "��������Ԫ��" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			list2.reverseEven();
			std::cout << "��ת�����" << std::endl << std::endl;
			break;

		case 16:
			if (b = 0)
			{
				if (user_num == 0)
				{
					std::cerr << "��������Ԫ��" << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			std::cout << "�м�ڵ�Ϊ��" << list2.middleElem() << std::endl << std::endl;
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