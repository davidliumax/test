#include <string>

class student {
public:
	student(const std::string &name, int age)
		: _name(name), _age(age){
	}

private:
	std::string _name;
	int _age;
}
