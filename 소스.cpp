#include<iostream>
using namespace std;

class Rectangle
{
	int x, y;
public:
	Rectangle():x(0),y(0){}	//�ʱ�ȭ �ʼ�
	Rectangle(int x,int y):x(x),y(y){}
	void ShowAreaInfo() { cout << "����: " << x * y << endl; }
};

class Square:public Rectangle
{
	Rectangle* a;
public:
	Square(int x) { a = new Rectangle(x, x); }
	void ShowAreaInfo() { a->ShowAreaInfo(); }
	~Square() { delete a; }	//������ ��� �Ŀ� ����
};

int main()
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}