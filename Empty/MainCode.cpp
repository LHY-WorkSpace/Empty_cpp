#include<iostream>
#include<string>

using namespace std;





class AT
{
public:
	int A =10;
	AT()
	{
		cout << "A ��ַΪ" << &A << endl;
	}
};

class BT : virtual public AT 
{
public:
	BT()
	{
		cout << "B ��ַΪ" << &A << endl;
	}
};

class CT : virtual public AT
{
public:
	CT()
	{
		cout << "C ��ַΪ" << &A << endl;
	}
};

class DT :public BT,public CT
{
public:
	DT()
	{
		cout << "D ��ַΪ" << &(CT::A) << endl;
		cout << "D ��ַΪ" << &(BT::A) << endl;
	}
};

int main()
{
	DT DDD;

	//cout << "���ݣ�" << asd.a << "��СΪ��" << asd.b << endl;

	system("pause");

}












