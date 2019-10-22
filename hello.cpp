#include <iostream>
#include <string>

class Hello
{
	
private:
	std::String name;
	std::String age;
	std::String sex;
public:
	void sayHello(){
		std::cout <<"name:"
			<< this.name <<"\t"
			<< "Age:"
			<< this.age << "\t"
			<< "Sex:"
			<< this.sex<<std::endl;
	}
	Hello(std::String name,std::String age,sdt::String sex){
		this.name = name;
		this.age = age;
		this.sex = sex;
	}
}

int main()
{
	std::cout << "hello world"<<std::endl;
	return 0;
}
