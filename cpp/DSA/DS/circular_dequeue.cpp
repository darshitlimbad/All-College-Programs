// circular dequeue
#include <iostream>
using namespace std;
const int size=5;

template <class T>
class dequeue {
    int front=-1 , rear=-1;
    T arr[size];

    int isempty() {
        if(front == -1 && rear == -1)   {
            return 1;
        }   else    {
            return 0;
        }
    }

    void p_isempty()    {
        cout << "queue is empty!!" << endl;
    }

    int isfull()    {
        if ((front == 0 && rear == size-1) || (rear == front-1))   {
            return 1;
        }   else    {
            return 0;
        }
    }
    void p_isfull()    {
        cout << "queue is Full!!" << endl;
    }

    void added()    {
        cout<< "Node addded succesfully." << endl;
    }

    void deleted()    {
        cout<< "Node deleted succesfully." << endl;
    }

    void doempty()  {
        rear = -1 , front = -1;
    }

    // current node values
    void p_rear() {
        cout    <<  "[-- " << arr[rear] << " --] " << endl;
    }
    void p_front() {
        cout    <<  "[-- " << arr[front] << " --] " << endl;
    }

    //display
    void display_straight()   {

        for( int i=front ; i<=rear ; i++ )  {
                cout << "[--------]" << "\t";
            }

            cout << endl;
            
            for( int i=front ; i<=rear ; i++ )  {
                cout << "[-- " << arr[i] <<" --]" << "\t";
            }
            
            cout << endl;
            
            for( int i=front ; i<=rear ; i++ )  {
                cout << "[--------]" << "\t";
            }
            
            cout << endl << endl;

    }

    void display_circular() {

        for( int i=front ; i<=size-1 ; i++ )  {
            cout << "[--------]" << "\t";
        }

        for( int i=0 ; i<=rear ; i++ )  {
            cout << "[--------]" << "\t";
        }

        cout << endl;
        
        for( int i=front ; i<=size-1 ; i++ )  {
            cout << "[-- " << arr[i] <<" --]" << "\t";
        }
        for( int i=0 ; i<=rear ; i++ )  {
            cout << "[-- " << arr[i] <<" --]" << "\t";
        }
        
        cout << endl;
        
        for( int i=front ; i<=size-1 ; i++ )  {
            cout << "[--------]" << "\t";
        }
        for( int i=0 ; i<=rear ; i++ )  {
            cout << "[--------]" << "\t";
        }
        
        cout << endl << endl;

    }

    public:

    void InsertAtRear(T node)    {
        
        if(isfull())   {
        
            p_isfull();
            return;
        
        }   else if(isempty())   {

            front = 0 , rear = 0;
        
        }   else if(rear == size-1) {

            rear=0;

        }   else    {

            rear++;

        }

        arr[rear] = node;
        added();

    }
    
    void InsertAtFront(T node)    {
        
        if(isfull())   {
        
            p_isfull();
            return;
        
        }   else if(isempty())   {

            front = 0 , rear = 0;
        
        }   else if(front == 0) {

            front=size-1;

        }   else    {

            front--;

        }

        arr[front] = node;
        added();

    }

    void DeletionAtRear()   {

        if( isempty() ) {

            p_isempty();
            return;

        }   
        
        p_rear();
        cout << "Rear " ; deleted();

        if( rear == front ) {

            doempty();

        }   else if(rear == 0)   {
            
            rear = size-1;

        }   else {

            rear--;
                      
        }

    }

    void DeletionAtFront()  {

        if( isempty() ) {

            p_isempty();
            return;

        }

        p_front();
        cout << "Front " ; deleted();

        if ( front == rear )    {

            doempty();

        }   else if( front == size-1)   {

            front = 0;

        }   else    {

            front++;

        }

    }

    void display()  {
        if(isempty())   {

            p_isempty();

        }   else if(rear > front)   {

            display_straight();

        }   else    { //rear<front

            display_circular();

        }

    }
    
};

int main()  {
    dequeue<int> marks;
    int action,temp;

    while(action != 10) {
    cout << "\t\t --------Marks Management Menu--------- " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout<< "enter number for below action :" << endl;
    cout << "1-insert at rear , 2- insert at front , 3- display , 4 - deltetion at rear , 5 - deletion at front ,  any key - to exit " << endl;
    cin >> action;

        switch(action) {
            case 1 :
                cout<<"enter marks for add:";
                cin>>temp;

                marks.InsertAtRear(temp);
            break;

            case 2 :
                cout<<"enter marks for add:";
                cin>>temp;

                marks.InsertAtFront(temp);
            break;
            
            case 3:
                marks.display();
            break;

            case 4:
                marks.DeletionAtRear();
            break;

            case 5:
                marks.DeletionAtFront();
            break;

            default:
                action = 10;
        }
    }
    return 0;
}