
#include <iostream>

class Service {
public:
	std::string nameofService;
	unsigned timeofService;
	std::string nameofDog;
	std::string is_it_a_difficult_dog;
	std::string costofService;
};

class Sitting: public Service {
	std::string need_a_walk;
	std::string feedingTime;
};

class Walk : public Service {
	std::string interaction_with_other_dogs;
	std::string need_to_know;
};

class Dogwalk {
	std::string nameofDog;//???Service
	std::string nameofEmployee; //?Employee
	std::string ratingofCompany;


};

class Employee {
	std::string ratingofEmployee;
	std::string has_penalties;


};