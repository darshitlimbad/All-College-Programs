// Header Linked List
#include <iostream>
using namespace std;

template<class T>
class list{ 

    struct node{
        int data;
        node *next;
    };

     void added()    {
        cout<< "Node addded succesfully." << endl;
    }

    void deleted()    {
        cout<< "Node deleted succesfully." << endl;
    }

    void p_isempty()    {
        cout << "queue is empty!!" << endl;
    }

    void count()    {
        this->head->data++;
    }

    public:
    node *head = new node{ 0 , nullptr};

    void InsertAtBeginning(T data) {
        
        node *new_node=new node{data , nullptr};
        count();

        if(head->next) {
            new_node->next=head->next;
        }

        head->next=new_node;
        added();

    }

    void InsertAtEnd(T data)  {

        node *new_node=new node{data , nullptr};
        count();

        node *list=head->next;
        while( list->next ) {
            list=list->next;
        }
        
        list->next=new_node;

    }

    void traverse()  {

        if(head->next == nullptr)   {
            p_isempty();
            return;
        }

        node *list=head->next;
        while( list ) {
            for(int i=1 ; i<=2 ; i++)   {

                if(i!=2)    {
                    cout << " -             " << endl;
                }   else {
                    cout << " -     " << list->data << "       " << endl;
                }

            }
            cout << " - - - - - - - " << endl;
            list=list->next;
        }
        cout << " total number of node in the list is :  " << head->data << endl;
    
    }

    void search( T data )  {

        if(!head->next)   {
            p_isempty();
            return;
        }

        node* list = head->next;
        while(list->data != data)  {
            list = list->next;

            if(list == nullptr) {
                cout << "No data found in the list!!!" << endl;
                return;
            }
        }

            for(int i = 1 ; i<=2 ; i++)    {
            
                if(i!=2)   {
                    cout << " -             " << endl;
                } else {
                    cout << " -     " << list->data << "       " << endl;
                }

            }
            cout << " - - - - - - - " << endl;

    }

    void DeletionAtBeginning()   {

        if(!head->next)   {
            p_isempty();
            return;
        }

        node* temp=head->next;
        head->next = head->next->next;

        delete(temp);
        deleted();

        traverse();

    }

    void DeletionAtEnd() {
        
        if(!head->next)   {
            p_isempty();
            return;
        }

        node* temp = head->next;
        while(temp->next->next != nullptr)    {
            temp=temp->next;
        }

        delete(temp->next);
        temp->next = nullptr;
        deleted();

        traverse();

    }

    ~list() {
        node *list;
        while(head->next)  {
            list=head;
            while (list->next->next!=nullptr)
            {
                list=list->next;
            }

            delete(list->next);
            list->next=nullptr;
        }
        delete(head);
        head=nullptr;
        
    }

};

int main()  {
    list<int> marks;
    int action,temp;

    while(action != 10) {
    cout << "\t\t --------Marks Management Menu--------- " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout<< "enter number for below action :" << endl;
    cout << "1-insert at beginning , 2- insert at end , 3- display , 4-search by marks , 5 - deltetion at beginning , 6 - deletion at end ,  any key - to exit " << endl;
    cin >> action;

        switch(action) {
            case 1 :
                cout<<"enter marks for add:";
                cin>>temp;

                marks.InsertAtBeginning(temp);
            break;

            case 2 :
                cout<<"enter marks for add:";
                cin>>temp;

                marks.InsertAtEnd( temp );
            break;
            
            case 3:
                marks.traverse();
            break;

            case 4:
                cout<<"enter marks to search:";
                cin>>temp;

                marks.search( temp );
            break;

            case 5:
                marks.DeletionAtBeginning();
            break;

            case 6:
                marks.DeletionAtEnd();
            break;

            default:
                action = 10;
        }
    }
    return 0;
}