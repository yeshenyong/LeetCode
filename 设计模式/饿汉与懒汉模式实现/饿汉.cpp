#include <iostream>
#include <stdlib.h>

using namespace std;
/* ����ģʽ */ 
class singleton{
	private:
		singleton()
		{
			cout << "����һ����������" << endl;
		}
		~singleton()
		{
			cout << "����һ����������" << endl;
		}
		static singleton *instance;
	public:
		static singleton *getInstance();
};

/*
	�����ʱ��ʼ���� 
*/
singleton* singleton::instance = new singleton();

singleton* singleton::getInstance()
{
	return instance;
}

int main()
{
	singleton *a1 = singleton::getInstance();
	singleton *a2 = singleton::getInstance();
	if(a1 == a2)cout << "the same class\n";
	
	return 0;
}
 
