#include<iostream>
using namespace std;
#include<string>

// ȫ�ֺ�������Ԫ
// 
//class home
//{
//	friend void test01(home room);
//public:
//	home()
//	{
//		sitting_room = "����";
//		bed_room = "����";
//	}
//
//public:
//	string sitting_room;
//private:
//	string bed_room;
//};
//void test01(home room)
//{
//	cout << "���ڷ���->" << room.sitting_room << endl;
//	cout << "���ڷ���->" << room.bed_room << endl;
////}
//int main()
//{
//	home h;
//	test01(h);
//	return 0;
//}

// ������Ԫ

//class Room;
//class Guy
//{
//public:
//	Guy();
//	void visit(); // ����Room�е�����
//	Room* room;
//};
//class Room
//{
//	friend class Guy;
//public:
//	Room();
//	string sitting_room;
//private:
//	string bed_room;
//};
//Room::Room()
//{
//	bed_room = "����";
//	sitting_room = "����";
//}
//Guy::Guy()
//{
//	room = new Room; // �������Ӷ���
//}
//void Guy::visit()
//{
//	cout << "���ڷ���" << room->sitting_room << endl;
//	cout << "���ڷ���" << room->bed_room << endl;
//}
//void test()
//{
//	Guy f;
//	f.visit();
//}
//int main()
//{
//	test();
//	return 0;
//}	

// ��Ա��������Ԫ
class Room;
class Guy
{
public:
	Guy();
	void visit();
	Room* room;
};
class Room
{
	friend void Guy::visit();
public:
	Room();
public:
	string sitting_room;
private:
	string bed_room;
};
Room::Room()
{
	this->bed_room = "����";
	this->sitting_room = "����";
}

Guy::Guy()
{
	room = new Room;
}
void Guy::visit()
{
	cout << "���ڷ��� " << room->sitting_room << endl;
	cout << "���ڷ��� " << room->bed_room << endl;
}
void test()
{
	Guy g;
	g.visit();
}
int main()
{
	test();
	return 0;
}