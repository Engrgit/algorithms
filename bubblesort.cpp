#include <iostream>
#include <vector>;


//Implementing prototypes
void bubbleSort(int list[], int length);




// Implementing bubble sort algorithms
 int x = 5;
 int * xptr = &x;

int main()
{
    std::cout<< ".........................................." << std::endl;
    std::cout << "This is the address of x: " << &x << std::endl;
    std::cout << "This is the address of xptr: " << &xptr << std::endl;
    std::cout << "This is the value of xptr: " << xptr << std::endl;
    std::cout << "This is the value of referencing xptr: " << *xptr << std::endl;
    std::cout << "..........................................." << std::endl;


    std::cout << "This is the implementation of bubble sort" << std::endl;

    int list[] = { 20,36,24,65,78,45,58,90,2,15};

    bubbleSort(list, 10);

    std::cout<< "After sorting, the list "
        << "elements are: " << std::endl;

    for (int i=0; i<10; i++)
        std::cout << list[i] << " ";

    std::cout << std::endl;


    std::cout<< "............................................"<< std::endl;

    std::cout<< "This is the implementation of the vector list" << std::endl;

    std::vector<int> vectorlist;

    unsigned int i;

    vectorlist.push_back(24);
    vectorlist.push_back(39);
    vectorlist.push_back(90);
    vectorlist.push_back(66);


    std::cout << "The elements of the list are as follows: ";

    for(i=0; i<vectorlist.size(); i++)
        std::cout<<vectorlist[i] << " ";
    std::cout << std::endl;


     std::cout<< "............................................"<< std::endl;

    for(i=0; i<vectorlist.size(); i++)
        vectorlist[i] = vectorlist[i]*2;

    std::cout<< "The value of array multiplied by 2 is: ";

    for(i=0; i< vectorlist.size(); i++)
        std::cout<<vectorlist[i] << " ";

    std::cout << std::endl;

    return 0;
}


void bubbleSort(int list[], int length){

int temp;

for (int iteration =1; iteration <length; iteration++){

    for (int index =0; index < length-iteration; index++)
        if (list[index] > list[index + 1]){

            temp = list[index];
            list[index] = list[index +1];
            list[index + 1] = temp;
        }
}
}
