#include <iostream>

class base
{
	int x,y;
	public:
	//constructor
	void bas(int a,int b)
	{
		this->x=a;
		this->y=b;
		int sum=x+y;
		std::cout<<"sum of x and y"<< sum<<std::endl;
	}

};
int main()
{
	base obj;
	obj.bas(10,20);


}
