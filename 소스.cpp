#include<iostream>
using namespace std;

class Rectangle
{
	int x, y;
public:
	Rectangle():x(0),y(0){}	//초기화 필수
	Rectangle(int x,int y):x(x),y(y){}
	void ShowAreaInfo() { cout << "면적: " << x * y << endl; }
};

class Square:public Rectangle
{
	Rectangle* a;
public:
	Square(int x) { a = new Rectangle(x, x); }
	void ShowAreaInfo() { a->ShowAreaInfo(); }
	~Square() { delete a; }	//포인터 사용 후엔 비우기
};

int main()
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}