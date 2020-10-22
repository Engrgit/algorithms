#include <iostream>
using namespace std;


class listNode
{
public:
    int data;
    listNode *next;
    listNode(int val): data(val), next(NULL){}
};


// creating a list class
class List
{
public:
    listNode *head;
    List():head(NULL){}
    void insertAtBegin(int val);
    void insertAtEnd(int val);
    void insertAtPos(int pos, int val);
    void remove(int val);
    void print();
    ~List();
};

void List::insertAtBegin(int val){

listNode *newnode = new listNode(val);
newnode->next= this->head;
this->head=newnode;

}

void List::insertAtEnd(int val)
{
    if(head==NULL)
    {

        insertAtBegin(val);
        return;
    }

    listNode *newnode = new listNode(val);
    listNode *ptr = this->head;
    while(ptr->next !=NULL)
    {

        ptr= ptr->next;

    }

    ptr->next=newnode;
}

void List::insertAtPos(int pos, int val){
listNode *newnode = new listNode(val);
if(pos==1)
{
    newnode->next= this->head;
    this->head=newnode;
    return;
}
pos--;
listNode *ptr= this->head;
while(ptr!=NULL && --pos)
{

    ptr= ptr->next;
}

if(ptr ==NULL)
{

    return;
    newnode ->next=ptr->next;
    ptr->next= newnode;

}

}
void List::remove(int toBeRemoved)
{
    if(this->head==NULL)
        return;
    if(this->head->data==toBeRemoved)
    {

        listNode *temp=this->head;
        this->head=this->head->next;
        delete(temp);
        return;

    }

    listNode *ptr=this->head;
    while(ptr->next !=NULL && ptr->next->data!=toBeRemoved)
    ptr= ptr->next;
    if(ptr->next==NULL)
    return;
    listNode *temp= ptr->next;
    ptr->next=ptr->next->next;
    delete(temp);

}

//Print the list

void List::print()
{

    listNode *ptr=this->head;
    while(ptr!=NULL)
    {

        cout<< ptr->data<< " ";
        ptr = ptr->next;
    }

    cout <<endl;
}


// lets define the destructor for the code

List::~List()
{

    listNode *ptr= this->head, *next=NULL;
    while(ptr!=NULL)
    {

        next= ptr->next;
        delete(ptr);
        ptr= next;
    }
}

int main()
{
    //cout << "Hello world!" << endl;
    return 0;
}
