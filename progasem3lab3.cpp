
#include <iostream>
//компания
class Dogwalk {
public:
	std::string nameofDog;//в Service
	std::string nameofEmployee; //в Employee
private:
	std::string ratingofCompany;

};

//сотрудник
class Employee: Dogwalk {
	// из Dogwalk берем имя сотрудника
	std::string ratingofEmployee;
	std::string has_penalties;
	void print()
	{
		std::cout << "Name: " << nameofEmployee << "\tRating: " << ratingofEmployee << std::endl;
	}
};

//"Машины", в моем случае услуга
class Service: Dogwalk {
public:
	//Из Dogwalk берем имя собаки
	unsigned timeofService;
	std::string is_it_a_difficult_dog;
	std::string costofService;
	void print()
	{
		
		std::cout << "Dog name: " << nameofDog << "\tDifficult Dog?: " << is_it_a_difficult_dog << std::endl;
		std::cout << "Time of service: " << timeofService <<"\tCost: " << costofService << std::endl;
	}
};

//"Грузовые машины", в моем случае услуга ситтинга
class Sitting: public Service {
public:
	std::string need_a_walk;
	std::string feedingTime;
	void print()
	{
		std::cout << "Need a walk?: " << need_a_walk << "\tFeeding time: " << feedingTime << std::endl;
	}
};

//"Легковые машины", в моем случае услуга выгула
class Walk : public Service {
public:
	std::string interaction_with_other_dogs;
	std::string need_to_know;
	void print()
	{
		std::cout << "Interaction with other dogs?: " << interaction_with_other_dogs << "\tNeed to know: " << need_to_know << std::endl;
	}
};
