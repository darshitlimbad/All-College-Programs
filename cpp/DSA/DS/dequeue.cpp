#include <iostream>
using namespace std;
#define size 5

template <class T>
class dequeue{
    T arr[size] ;
    int front = -1 , rear = -1;

    int isempty()  {
        if(front==-1 && rear==-1)   {
            return 1;
        }   else    {
            return 0;
        }
    }

    int isfull()    {
        if(front == 0 && rear == size-1 )    {
            return 1;
        }   else    {
            return 0;
        }
    }

    void added()    {
        cout<< "Node addded succesfully." << endl;
    }

    void deleted()    {
        cout<< "Node deleted succesfully." << endl;
    }

    // current node values
    void p_rear() {
        cout    <<  "[--Node: " << arr[rear] << " --] " << endl;
    }
    void p_front() {
        cout    <<  "[--Node: " << arr[front] << " --] " << endl;
    }

    public:

    void insertAtRear(T node)    {
        if( isfull() )    {

            cout << "list is full!!"   << endl;
            return;
            
        }   else if( rear==size-1 )    {
            
            cout << "rear side of list is full." << endl;
            return;

        }   else    {
            
            if(isempty())   {
             
                front = 0 ,rear=0;
                arr[rear] = node;
                cout << "rear ";added();
            
            }   else    {
            
                arr[++rear] = node;
                cout << "rear ";added();
            
            }   
        }
    }

    void insertAtFront(T node)   {
        if( isfull() )    {

            cout << "list is full!!"   << endl;
            return;
            
        }   else if( front==0 )    {
            
            cout << "front side of list is full." << endl;
            return;

        }   else    {
            
            if(isempty())   {
             
                front = 0 , rear=0;
                arr[front] = node;
                cout << "front "; added();
            
            }   else    {
            
                arr[--front] = node;
                cout << "front "; added();
            
            }   
        }
    }

    void display()  {
        if(isempty())   {
            cout << "List is empty." << endl;
        }   else    {
            
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
            
            cout << endl;

        }
    }
    
    void deletionAtRear()    {
        if (isempty())   {

            cout << "List is empty." ;
            return;
        
        }  else {
            
            p_rear();
            if(front == rear)   {
                
                front = 0 , rear = 0 ;

            }   else    {
                
                rear--;

            }
            cout << "Rear " ; deleted();

        }
    }

    void deletionAtFront()    {
        if (isempty())   {

            cout << "List is empty." ;
            return;
        
        }  else {
            
            p_front();
            if(front == rear)   {
                
                front = 0 , rear = 0 ;

            }   else    {
                
                front++;

            }
            cout << "Front " ; deleted();
            
        }
    }
};

int main()  {
    dequeue <int> marks;
    int action,temp;

    while(action != 10) {
    cout << "\t\t --------Marks Management Menu--------- " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout<< "enter number for below action :" << endl;
    cout << "1-insert at rear , 2- insert at front , 3- display , 4 - deltetion at rear , 5 - deletion at front ,  any key - to exit " << endl;
    cin >> action;
        switch(action) {
            case 1 :
                cout<<"enter marks for rear:";
                cin>>temp;

                marks.insertAtRear(temp);
            break;
            
            case 2:
                cout<<"enter marks for front:";
                cin>>temp;

                marks.insertAtFront(temp);
            break;

            case 3:
                marks.display();
            break;

            case 4:
                marks.deletionAtRear();
            break;

            case 5:
                marks.deletionAtFront();
            break;

            default:
                action = 10;
        }
    }
    return 0;
}