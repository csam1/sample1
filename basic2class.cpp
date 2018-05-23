#include <iostream>
using namespace std;
class time
{
	int hrs,min;
	public:
	time(int t)
	{
		hrs=t/60;
		min=t%60;
	}
	void display()
	{
		cout<<hrs<<"hrs"<<min<<"mins"<<endl;
	}
};
int main()
{
	int a=80;
	time ob1(a);
	ob1.display();
	return 0;
}
