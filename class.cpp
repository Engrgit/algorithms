#include <iostream>
#include <string>

using namespace std;

// lets declare a function prototype
void the_display_code(string password);


class aiengineers{
public:
    int salary;
    string framework;
    double paycheck;
    double calculate_time(double);
    void estimate_error();
    int noframeworks;
    string passkey;
private:
    string password;

};


int main()
{

    aiengineers newcomers;

    newcomers.salary = 40000;
    newcomers.paycheck = 32000.00;
    // lets try to use other variable in the class
    cout<< "This is the salary of the best of the newest newcomer #" << newcomers.salary << endl;
    cout <<"This is actually the paycheck of the customers #" << newcomers.paycheck << endl;
    cout << "Kindly enter your password" << endl;
    cin >> newcomers.passkey;
    cout<<"The inputed password is: "<< newcomers.passkey <<endl;


    // Lets try to create an instance of the classes

    newcomers.estimate_error();
    cout<< "The current time in hours is: " << newcomers.calculate_time(73.45)<< endl;
    return 0;
}



// Lets experiment with classes
void the_display_code(string password)
{
    cout<< "This is the second code running" << endl;
    cout<< "Lets try to access the private variable " << password <<endl;
    password = "35832787832";
    cout<< "Lets try to access the private variable " << password <<endl;

}

// lets declare a method for the class

void aiengineers::estimate_error()
{
    double error;
    double Actual_value = 1.00;
    cout<< "Kindly tell us your error: ";
    cin >> error;

    // lets say am estimating the error
    error = (error/Actual_value)* 30;

   cout << "The actual error is: " << error << endl;
}



double aiengineers::calculate_time(double current_time){

current_time = current_time/60;

return current_time;

}

