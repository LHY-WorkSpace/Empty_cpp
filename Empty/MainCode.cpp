#include<iostream>
#include<string>

using namespace std;





class AT
{
public:
	int A =10;
	AT()
	{
		cout << "A 地址为" << &A << endl;
	}
};

class BT : virtual public AT 
{
public:
	BT()
	{
		cout << "B 地址为" << &A << endl;
	}
};

class CT : virtual public AT
{
public:
	CT()
	{
		cout << "C 地址为" << &A << endl;
	}
};

class DT :public BT,public CT
{
public:
	DT()
	{
		cout << "D 地址为" << &(CT::A) << endl;
		cout << "D 地址为" << &(BT::A) << endl;
	}
};

int main()
{
	DT DDD;

	//cout << "内容：" << asd.a << "大小为：" << asd.b << endl;

	system("pause");

}












