#include <iostream>
#include <string>
#include <map>
#include <vector>

void display(int i, std::string list[])
{
	//std::map<int, std::string>;
	std::map<int, std::string> rankings{std::make_pair(0, "st"), std::make_pair(1,"nd"), std::make_pair(2,"rd"), std::make_pair(3,"th"), std::make_pair(4,"th"), std::make_pair(5,"th"), std::make_pair(6,"th"), std::make_pair(7,"th"), std::make_pair(8,"th"), std::make_pair(9,"th"), std::make_pair(10,"th")};
	std::cout<< "The " << i+1 << rankings[i] << " member of the list is: " << list[i] << std::endl;
}


void rankList(std::string list[], int listsize)
{
	//std::string position = " ";
	for(int i=0; i< listsize; i++)
	{
		switch(i)	
		{
			case 0:
			display(i, list);
			break;
			case 1:
			display(i, list);
			break;
			case 2:
			display(i, list);
			break;
			case 3:case 4:case 5:case 6:case 7:case 8:case 9:
			display(i, list);
			break;
			default:
			break;
		}

	}

}

struct studentType    // lets implement a struct 
{
	char name[26];
	double gpa =34.24;
	int sID = 34;
	char grade = 'A';

};   //  end of struct


void gp()
{
		std::cout << "************************************" << std::endl;
		studentType *p = new studentType;     // create an instance of the struct varibale

		p->gpa = 3.45; 
		p->sID = 34;  
		p->grade = 'A';   

		std::cout << "The current gpa is: " <<  p->gpa << std::endl;
		std::cout << "The current sID is: " << p->sID << std::endl;
		std::cout << "The current grade is: " << p->grade << std::endl;


		std::cout << "************************************" << std::endl;
		
}



int main()
{	
	std::string HyperiaEmployee[] = {"Bola", "Tunji", "Seyi", "Rahul", "Yemi","Obiora", "Banji", "Charles", "Elohor"}; 

	rankList(HyperiaEmployee, 9);
	gp();

}
