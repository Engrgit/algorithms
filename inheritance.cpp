#include <iostream>
#include <string>

// lets declare a function prototype
void the_display_code(std::string password);
void addFirst(int&, int&);
void passingMode(int&, int);
//void arraySystem(string, int);



class softwareengineers{
public:
    int salary;
    string framework;
    double paycheck;
    double calculate_time(double);
    void estimate_error();
    int noframeworks;
    std::string passkey;


private:
    std::string adminPassword;

};


class aiengineers: public softwareengineers
{
public:
    std::string laptoptype;
    int years_of_experience;

private:
    std::string password;
    bool ways_of_deployement();

};


class machinelearning: public aiengineers
{
public:
    std::string frameworks;
    bool ways_of_working();
    bool ways_of_datalabelling();
    std::string yourname;

private:
    std::string mlmodel;
    int project_duration;

};


struct Credentials{

    string firstname;
    string lastname;
    string address;
    string date_of_birth;

}me;


 // lets create an instance of the class
    //Credentials met;

    //assigning the value of the credentials

    cout <<"Kindly enter your firstname" << endl;
    cin >> firstname;
    cout "The entered name is " << me.firstname << endl;



int main()
{
    //char workerList = {"Ibrahim", "Obaloluwa", "Balikis","Lateefat","Nurudeen"};
    //arraySystem(workerList, 5);
    machinelearning engineer1;

    std::cout << "Kindly Enter your name here:";
    std::cin>> engineer1.yourname;
    std::cout<< "Hello " << engineer1.yourname<< std::endl;

    std::cout << "Kindly Enter your framework here:";
    std::cin>> engineer1.frameworks;
    std::cout<< "Your preferred framework is " << engineer1.frameworks << std::endl;


    // ....................................................
    int num = 5;
    int numb = 6;

    addFirst(num, num);

    std::cout << "............................................"<<std::endl;
    passingMode(numb,numb);
    std::cout << "............................................"<< std::endl;

    aiengineers newcomers;

    newcomers.salary = 40000;
    newcomers.paycheck = 32000.00;
    // lets try to use other variable in the class
    std::cout<< "This is the salary of the best of the newest newcomer #" << newcomers.salary << std::endl;
    std::cout<<"This is actually the paycheck of the customers #" << newcomers.paycheck << std::endl;
    std::cout<< "Kindly enter your password: ";
    std::cin >> newcomers.passkey;
    std::cout<<"The inputed password is: "<< newcomers.passkey <<std::endl;


    // Lets try to create an instance of the classes

    newcomers.estimate_error();
    std::cout<<"The current time in hours is: " << newcomers.calculate_time(73.45)<< std::endl;


    return 0;
}

// Lets experiment with classes
void the_display_code(string password)
{
    std::cout<<"This is the second code running"<< std::endl;
    std::cout<<"Lets try to access the private variable "<< password << std::endl;
    password = "35832787832";
    std::cout<<"Lets try to access the private variable "<< password <<std::endl;

}

// lets declare a method for the class
void softwareengineers::estimate_error()
{
    double error;
    double Actual_value = 1.00;
    std::cout<< "Kindly tell us your error: ";
    std::cin >> error;

    // lets say am estimating the error
    error = (error/Actual_value)* 30;

   std::cout << "The actual error is: " << error << std::endl;
}


    double softwareengineers::calculate_time(double current_time){

    current_time = current_time/60;

return current_time;

}


void addFirst(int& first, int& second){


std::cout<< "The first of the number "<< first<< std::endl;

first = first +2;

std::cout<< "The sum of both numbers is " << second << std::endl;

second = second *2;

std::cout<< "The final second number is " << second << std::endl;
std::cout<< "The first number is "<< first << std::endl;

}


void passingMode(int& refr, int value){

std::cout<< "The reference value is "<< refr << std::endl;

refr = refr +2;

std::cout << "The new value of the reference variable is: "<< refr << std::endl;
std::cout << "Lets check out the second number "<< value <<std::endl;
value = value *2;

std::cout<< "The final check of the value variable is "<< value << std::endl;

std::cout << "The new value of the reference variable is: "<< refr << std::endl;

}
 
