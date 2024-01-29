// circuler linked list
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

        node* list = new node{data , head} ;

        if(head)   {

            node* temp=head;
            while(temp->next != head)   {
                temp=temp->next;
            }
            temp->next=list;

        }   else    {
            list->next=list;
        }

        head = list;
        added();

    }

    void InsertAtEnd( T data )    {

        if(!head)   {      
            InsertAtBeginning(data);
            return;
        }

        node* list = new node{data , head};

        node* temp = head;

        while(temp->next != head)   {
            temp= temp->next;
        }

        temp->next = list;

        added();
    }

    void traverse() {

        if(!head)   {
            p_isempty();
            return;
        }

        node* list = head;
        do{

            for(int i = 1 ; i<=2 ; i++)    {
            
                if(i!=2)   {
                    cout << " -             " << endl;
                } else {
                    cout << " -     " << list->data << "       " << endl;
                }

            }
            cout << " - - - - - - - " << endl;
            list=list->next;

        }while(list != head);

    }

    void search( T data )  {

        if(!head)   {
            p_isempty();
            return;
        }

        node* temp = head;
        while(temp->data != data)  {
            temp = temp->next;

            if(temp == head) {
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

        node *first=head , *temp=head;
        head = (head!=head->next) ? head->next : nullptr ;

        if(head)    {
            while(temp->next != first)   {
                temp=temp->next;
            }
            temp->next=head;
        }
        
        delete(first);
        deleted();

        traverse();

    }

    void DeletionAtEnd() {
        
        if(!head)   {
            p_isempty();
            return;
        }

        if(head!=head->next)    {

            node* temp = head;
            while(temp->next->next != head)    {
                temp=temp->next;
            }

            delete(temp->next);
            temp->next = head;

        }  else {
            delete(head);
            head=nullptr;
        }

        deleted();
        traverse();

    }

    ~list() {
        node *list;
        while(head->next != head)  {
            
            list=head;
            while (list->next->next!=head)  {
                list=list->next;
            }

            delete(list->next);
            list->next=head;
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

                marks.InsertAtBeginning( temp );
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
