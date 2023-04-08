#include<iostream>
using namespace std;
#include<string>

// 全局函数做友元
// 
//class home
//{
//	friend void test01(home room);
//public:
//	home()
//	{
//		sitting_room = "客厅";
//		bed_room = "卧室";
//	}
//
//public:
//	string sitting_room;
//private:
//	string bed_room;
//};
//void test01(home room)
//{
//	cout << "正在访问->" << room.sitting_room << endl;
//	cout << "正在访问->" << room.bed_room << endl;
////}
//int main()
//{
//	home h;
//	test01(h);
//	return 0;
//}

// 类做友元

//class Room;
//class Guy
//{
//public:
//	Guy();
//	void visit(); // 访问Room中的属性
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
//	bed_room = "卧室";
//	sitting_room = "客厅";
//}
//Guy::Guy()
//{
//	room = new Room; // 创建屋子对象
//}
//void Guy::visit()
//{
//	cout << "正在访问" << room->sitting_room << endl;
//	cout << "正在访问" << room->bed_room << endl;
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

// 成员函数做友元
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
	this->bed_room = "卧室";
	this->sitting_room = "客厅";
}

Guy::Guy()
{
	room = new Room;
}
void Guy::visit()
{
	cout << "正在访问 " << room->sitting_room << endl;
	cout << "正在访问 " << room->bed_room << endl;
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