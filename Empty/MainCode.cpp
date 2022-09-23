#include<iostream>
#include<string>

using namespace std;

typedef struct
{
	int Number;
	string Name;
}Test_t;





int main()
{
	Test_t Test;
	Test.Name = "6666";
	Test.Number = 123;

	cout << Test.Name<<"======" << Test.Number<< endl;

	system("pause");

}












