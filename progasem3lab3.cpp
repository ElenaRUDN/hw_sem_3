
#include <iostream>
//компания
class Dogwalk {
public:
	Dogwalk(std::string nameofEmployee) {
		this->nameofEmployee = nameofEmployee;
		
	}
	//Dogwalk(std::string nameofDog) {
	//	this->nameofDog= nameofDog;
	//}
	//std::string ratingofCompany = "10";
	void print() const
	{
		std::cout << "Employee's name: " << nameofEmployee << std::endl;
	}
	
private:
	//std::string nameofDog;
	std::string nameofEmployee;
};

//сотрудник
class Employee: public Dogwalk {
	// из Dogwalk берем имя сотрудника
public:
	Employee(std::string ratingofEmployee, std::string has_penalties) :Dogwalk(nameofEmployee) {
		this->ratingofEmployee = ratingofEmployee;
		this->has_penalties = has_penalties;
	}
	/*void print()
	{
		std::cout << "Name: " << nameofEmployee << "\tRating: " << ratingofEmployee << std::endl;
	}*/
private:
	std::string ratingofEmployee;
	std::string has_penalties;
	
};

//"Машины", в моем случае услуга
/*class Service : public Dogwalk {
public:
	//Из Dogwalk берем имя собаки
	Service(unsigned timeofService,	std::string is_it_a_difficult_dog, std::string costofService): Dogwalk(nameofDog) {
		this->timeofService = timeofService;
		this->is_it_a_difficult_dog = is_it_a_difficult_dog;
		this->costofService = costofService;
	}
private:
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
*/
int main() {
	Dogwalk dogwalk1{"Helen"};
	dogwalk1.print();
	Employee employee{ "10","No","Helen"};
	employee.print();
}