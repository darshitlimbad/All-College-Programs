//stack prog

#include<iostream>
using namespace std;
#define size 10

template <class T>
class queue{
    T arr[size];
    int front = -1 , rear=-1;

    int isfull() {
        if( rear >= size-1 ) {
            cout<<"queue is full" << endl;;
            return 1;
        }   else    {
            return 0;
        }
    }
    int isempty()   {
        if( rear == -1 && front == -1 ) {
            cout<<"queue is empty" << endl;;
            return 1;
        }   else    {
            return 0;
        }
    }

    void total() {
        if(isempty())   {
            return;
        }   else    {
            int temp=0;
            for (int i=front ; i<=rear ; i++)   {   temp++; }
            cout << "total $node count is " << temp << endl;
        }
    }

    public:

    void enqueue(T node) {
        if(isfull())    {
            return;
        }   else    {
            if( rear == -1 && front == -1 )/*isempty() */ {
                front++ , rear++;
                arr[rear] = node;
                cout << "Node added sucessfully." << endl;
            }   else    {
                rear++;
                arr[rear] = node;
                cout << "Node added sucessfully." << endl;
            }
        }
    }   

    void dequeue()  {
        if( isempty() ) {
            return;
        }   else    {
            if( front == rear ) {
                front = -1 , rear = -1 ;
                cout << "Node deleted sucessfully." << endl;
            }   else    {
                front++;
                cout << "Node deleted sucessfully." << endl;
            }
        }
    }

    void display() {
        if(isempty()) {
            return;
        }   else    {
            for(int i=front ; i<=rear ; i++) {
                cout << " -- " << arr[i] << " -- " << endl;
            }
            total();
        }
    }

    void peek() {
        if(isempty())   {
            return;
        }   else    {
            cout << "First element of the queue is " << arr[front] << " ."<< endl;
        }
    }
};

int main() {
    queue<int> marks;
    int action,temp;

    while(action != 5) {
    cout << "\t\t --------Marks Management Menu--------- " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout<< "enter number for below action :" << endl;
    cout << "1-enqueue , 2-dequeue , 3- display , 4 - peek first element , any -exit code" << endl;
    cin >> action;
        switch(action) {
            case 1 :
                cout<<"enter value for marks:";
                cin>>temp;

                marks.enqueue(temp);
            break;
            
            case 2:
                marks.dequeue();
            break;

            case 3:
                marks.display();
            break;

            case 4:
                marks.peek();
            break;

            default:
                action = 5;
        }
    }
    return 0;
}
