//singly linked list
#include <iostream>
using namespace std;

template <class T>
class list {

    struct node {
        T data;
        node* next;
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
    public:
    node* head = nullptr;

    void InsertAtBeginning( T data )   {

        node* temp = new node{ data , nullptr };

        if(!head)   {
            head = temp;
            added();
            return;
        }

        temp->next = head;
        head = temp;
        added();

    }

    void InsertAtEnd( T data)    {

        node* temp = new node{data , nullptr} ;
        if(!head)   {
            
            head = temp;
            added();
            return;

        }

        node* list = head;

        while(list->next != nullptr)   {
            list= list->next;
        }

        list->next = temp;

        added();
    }

    void traverse() {

        if(!head)   {
            p_isempty();
            return;
        }

        node* temp = head;
        while(temp) {

            for(int i = 1 ; i<=2 ; i++)    {
            
                if(i!=2)   {
                    cout << " -             " << endl;
                } else {
                    cout << " -     " << temp->data << "       " << endl;
                }

            }
            cout << " - - - - - - - " << endl;
        temp=temp->next;
        }

    }

    void search( T data )  {

        if(!head)   {
            p_isempty();
            return;
        }

        node* temp = head;
        while(temp->data != data)  {
            temp = temp->next;

            if(temp == nullptr) {
                cout << "No data found in the list!!!" << endl;
                return;
            }
        }

            for(int i = 1 ; i<=2 ; i++)    {
            
                if(i!=2)   {
                    cout << " -             " << endl;
                } else {
                    cout << " -     " << temp->data << "       " << endl;
                }

            }
            cout << " - - - - - - - " << endl;

    }

    void DeletionAtBeginning()   {

        if(!head)   {
            p_isempty();
            return;
        }

        node* temp=head;
        head = head->next;

        delete(temp);
        deleted();

        traverse();

    }

    void DeletionAtEnd() {
        
        if(!head)   {
            p_isempty();
            return;
        }

        node* temp = head;
        while(temp->next->next != nullptr)    {
            temp=temp->next;
        }

        delete(temp->next);
        temp->next = nullptr;
        deleted();

        traverse();

    }

    void mergelist(node *s_head)    {

        if(!head)   {
            p_isempty();
            return;
        }

        node *list=head;
        while(list->next)   {
            list=list->next;
        }

        while(s_head) {
            node *new_node=new node{ 0 , nullptr};
            new_node->data=s_head->data;
            list->next=new_node;
            list=list->next;
            s_head=s_head->next;
        }

        cout<<"list merged succesfully!!!"<<endl;
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
    list<int> marks1,marks2;
    list<int>* point = &marks1;

    int action,temp;

    while(action != 10) {
    cout << "\t\t --------Marks Management Menu--------- " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout<< "enter number for below action :" << endl;
    cout << "1-insert at beginning , 2- insert at end , 3- display , 4-search by marks , 5 - deltetion at beginning ,\n 6 - deletion at end , 7 - merge both list in std:7 , 8 - choose std for mark list ,   any key - to exit " << endl;
    cin >> action;

        switch(action) {
            case 1 :
                cout<<"enter marks for add:";
                cin>>temp;

                point->InsertAtBeginning(temp);
            break;

            case 2 :
                cout<<"enter marks for add:";
                cin>>temp;

                point->InsertAtEnd( temp );
            break;
            
            case 3:
                point->traverse();
            break;

            case 4:
                cout<<"enter marks to search:";
                cin>>temp;

                point->search(temp);
            break;

            case 5:
                point->DeletionAtBeginning();
            break;

            case 6:
                point->DeletionAtEnd();
            break;

            case 7:
                marks1.mergelist(marks2.head);
            break;

            case 8:
                cout<<"1-to std:7 , 2-to std:8 , any-to cancel";
                cin>>temp;
                if(temp==1) {
                    point = &marks1;
                }   else if(temp == 2)   {
                    point = &marks2;
                }
            break;

            default:
                action = 10;
        }
    }
    return 0;
}
