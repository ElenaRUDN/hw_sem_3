
#include <iostream>
//компания
class Dogwalk {
public:
	Dogwalk() {
		nameofDog = "f";
	};
	Dogwalk(std::string nameofEmployee) {
		this->nameofEmployee = nameofEmployee;
		
	}
	Dogwalk(std::string nameofDog, std::string dogBreed) {
		this->nameofDog= nameofDog;
		this->dogBreed = dogBreed;
	}
	//std::string ratingofCompany = "10";
	void print() 
	{
		std::cout << "Employee's name: " << nameofEmployee << "Dog's name: " << nameofDog << std::endl;
	}
	
private:
	
	std::string nameofEmployee;
	std::string nameofDog;
	std::string dogBreed;
};

//сотрудник
class Employee: public Dogwalk {
	// из Dogwalk берем имя сотрудника
public:
	Employee(std::string nameofEmployee, std::string ratingofEmployee, std::string has_penalties) : Dogwalk(nameofEmployee) {
		this->ratingofEmployee = ratingofEmployee;
		this->has_penalties = has_penalties;
	}
	void print(){
		std::cout << "Penalties: " << has_penalties << "\tRating: " << ratingofEmployee << std::endl;
	}
private:
	std::string ratingofEmployee;
	std::string has_penalties;
	
};

//"Машины", в моем случае услуга
class Service : public Dogwalk {
public:
	//Из Dogwalk берем имя собаки
	Service(std::string nameofDog, std::string dogBreed, unsigned timeofService, std::string is_it_a_difficult_dog, std::string costofService) : Dogwalk(nameofDog, dogBreed) {
		this->timeofService = timeofService;
		this->is_it_a_difficult_dog = is_it_a_difficult_dog;
		this->costofService = costofService;
		
	}
	
	void print(){
		
		std::cout  << "Difficult Dog?: " << is_it_a_difficult_dog << std::endl;
		std::cout << "Time of service in mins: " << timeofService <<"\tCost: " << costofService << std::endl;
	}
private:
	unsigned timeofService;
	std::string is_it_a_difficult_dog;
	std::string costofService;
	

};

//"Грузовые машины", в моем случае услуга ситтинга
class Sitting: public Service {
public:
	Sitting(std::string nameofDog, std::string dogBreed, unsigned timeofService, std::string is_it_a_difficult_dog, std::string costofService, std::string need_a_walk, std::string feedingTime) : Service(nameofDog, dogBreed, timeofService, is_it_a_difficult_dog, costofService) {
		this->need_a_walk = need_a_walk;
		this->feedingTime = feedingTime;
		std::cout << "Service sitting created" << std::endl;
		
	}
	~Sitting() {
		std::cout << "Service sitting completed" << std::endl;
	}
	void print()
	{
		std::cout << "Need a walk?: " << need_a_walk << "\tFeeding time: " << feedingTime << std::endl;
	}
private:
	std::string need_a_walk;
	std::string feedingTime;
};

//"Легковые машины", в моем случае услуга выгула
class Walk : public Service {
public:
	Walk(std::string nameofDog,std::string dogBreed, unsigned timeofService, std::string is_it_a_difficult_dog, std::string costofService, std::string interaction_with_other_dogs, std::string need_to_know) : Service(nameofDog, dogBreed, timeofService, is_it_a_difficult_dog, costofService) {
		this->interaction_with_other_dogs = interaction_with_other_dogs;
		this->need_to_know = need_to_know;
		std::cout << "Service walk created" << std::endl;

	}
	~Walk() {
		std::cout << "Service walk completed" << std::endl;
	}
	void print()
	{
		std::cout << "Interaction with other dogs?: " << interaction_with_other_dogs << "\tNeed to know: " << need_to_know << std::endl;
	}
private:
	std::string interaction_with_other_dogs;
	std::string need_to_know;
};

int main() {
	Dogwalk dogwalk1{"Helen"};
	dogwalk1.print();
	Dogwalk dogwalk2{ "Chili", "Bull terrier"};
	dogwalk2.print();
	Employee employee{"Helen","10","No"};
	employee.print();
	Service service{ "Chili", "Bull terrier", 45,"No", "300 rub" };
	service.print();
	Sitting sitting{ "Chili","Bull terrier", 45,"No", "300 rub", "Yes", "11:00 and 21:00" };
	sitting.print();
	Walk walk{ "Chili","Bull terrier", 45, "No", "300 rub", "Yes", "Dont like snow and rain, you can come home" };
	walk.print();
}