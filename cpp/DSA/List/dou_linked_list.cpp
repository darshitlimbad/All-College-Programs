//doubly linked list
#include <iostream>
using namespace std;

template <class T>
class list {

    struct node {
        node* prev;
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

    void InsertAtBeginning( node* &head , T data )   {

        node* new_node = new node{nullptr , data , nullptr} ;

        if(head)    {
            new_node -> next = head;
            head -> prev = new_node;
        }

        head = new_node;
        added();
    }

    void InsertAtEnd( node* &head , T data)    {

        node* new_node = new node{nullptr , data , nullptr} ;
        if(!head)   {
            
            head = new_node;
            added();
            return;

        }

        node* list = head;

        while(list->next != nullptr)   {
            list= list->next;
        }

        list->next = new_node;
        new_node -> prev = list;

        added();
    }

    void traverse(node* head) {

        if(!head)   {
            p_isempty();
            return;
        }

        node* list = head;
        while(list) {

            for(int i = 1 ; i<=2 ; i++)    {
            
                if(i!=2)   {
                    cout << " -             " << endl;
                } else {
                    cout << " -     " << list->data << "       " << endl;
                }

            }
            cout << " - - - - - - - " << endl;
        list=list->next;
        }

    }

    void search( node* haad , T data )  {

        if(!head)   {
            p_isempty();
            return;
        }

        node* list = head;
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

    void DeletionAtBeginning(node* &head)   {

        if(!head)   {
            p_isempty();
            return;
        }

        node* list=head;
        head = head->next;
        head->prev = nullptr;

        delete(list);
        deleted();

        traverse(head);

    }

    void DeletionAtEnd(node* &head) {
        
        if(!head)   {
            p_isempty();
            return;
        }

        node* list = head;
        while(list->next->next != nullptr)    {
            list=list->next;
        }

        delete(list->next);
        list->next = nullptr;
        deleted();

        traverse(head);

    }

    ~list() {
        node *list=head;
        while (list->next!=nullptr)
        {
            list=list->next;
        }
        while(list){
            list=list->prev;
            delete(list->next);
            list->next=nullptr;
        }
            
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

                marks.InsertAtBeginning( marks.head , temp);
            break;

            case 2 :
                cout<<"enter marks for add:";
                cin>>temp;

                marks.InsertAtEnd( marks.head , temp );
            break;
            
            case 3:
                marks.traverse(marks.head);
            break;

            case 4:
                cout<<"enter marks to search:";
                cin>>temp;

                marks.search(marks.head , temp);
            break;

            case 5:
                marks.DeletionAtBeginning(marks.head);
            break;

            case 6:
                marks.DeletionAtEnd(marks.head);
            break;

            default:
                action = 10;
        }
    }
    return 0;
}
