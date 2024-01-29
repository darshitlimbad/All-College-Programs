#include <iostream>
using namespace std;
const int size=5;

template <class T>
class queue {
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
        if (front == 0 && rear == size-1)   {
            return 1;
        }   else if(  rear == front-1)  {
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

    void enqueue(T node)    {
        
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

    void dequeue()  {

        if(isempty())   {

            p_isempty();
            return;

        }   
        
        p_front();
        deleted();

        if (front == size-1 && rear == 0)  {
            
            front = -1 , rear = -1;

        }   else if(front == size-1 && rear > 0)    {

            front=0;

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
    queue<int> marks;
    int action,temp;

    while(action != 10) {
    cout << "\t\t --------Marks Management Menu--------- " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout<< "enter number for below action :" << endl;
    cout << "1-enqueue , 2- display , 3- dequeue , any other key - to exit " << endl;
    cin >> action;

        switch(action) {
            case 1 :
                cout<<"enter marks for add:";
                cin>>temp;

                marks.enqueue(temp);
            break;
            
            case 2:
                marks.display();
            break;

            case 3:
                marks.dequeue();
            break;

            default:
                action = 10;
        }
    }
    return 0;
}