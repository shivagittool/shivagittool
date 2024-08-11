#include <iostream>
class base
{
	public:
	void hello_func(){ 
	std::cout<<" hello world "<<std::endl;
	}
};
int main()
{
	base obj;
	obj.hello_func();

}
