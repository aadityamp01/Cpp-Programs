#include<iostream>
#include<stdlib.h>
using namespace std;
int no;//global variable for length of list

class LinkedList
{   
    private:
    struct node
    {
        int data;
        struct node *next;
    }*head;
    public:
    LinkedList()
    {
        head=NULL;
    }
    void create(int val)
    {
        struct node *temp,*q;
        temp=(node *)malloc(sizeof(struct node));
        temp->data=val;//creating a new node in linked list
        temp->next=NULL;
        if(head==NULL)//for 1st node
        {
            head=temp;
        }
        else//adding new node after previously created node
        {
            q=head;
            while(q->next!=NULL)
                q=q->next;
            q->next=temp;
        }    
    }
    void insert_ele()
    {
        struct node *nn,*temp;

        int sel;
        int ch;

        nn = (struct node *) malloc(sizeof(struct node));
        cout<<"Enter element : \n";
        cin>>nn->data;
        nn->next = NULL;

        if(head== NULL)
        {
        head = nn;
        }
        else
        {
            cout<<"Where you want to insert this new node?\n";
            cout<<"1 - At the beginning\n";
            cout<<"2 - At the end\n";
            cout<<"3 - At selected position\n";
            cout<<"Provide your choice\n : ";
            cin>>ch;

            switch(ch)
            {
                case 1: // inserting new node at first position / at beginning
                    nn->next = head;
                    head = nn;
                    break;
                case 2: // inserting new node at last position / at the end
                    temp = head;
                    while(temp->next != NULL)
                    {
                    temp = temp->next;
                    }//at the end temp points to last node
                    nn->next = NULL;
                    temp->next = nn;
                    break;
                case 3: // inserting new node after selected node / at selected position
                    cout<<"Enter element of that node, after which you want to insert new node :\n ";
                    cin>>sel;
                    temp = head;
                    while(temp->next != NULL)
                    {
                        if(temp->data == sel)
                        {
                        break;
                        }
                        temp = temp->next;
                    } //end of while

                    if(temp->next == NULL)
                    {
                    cout<<"no such element found\n";
                    }
                    else
                    {
                        nn->next = temp->next;
                        temp->next = nn;
                    }
                    break;
                default:cout<<"wrong input...\n";
            } //end of switch

        } //end of else
    } //end of insert_ele()
    void remove_ele()
    {
        int ch,sel;
        struct node *temp, *temp2;

        if(head == NULL)
        {
        cout<<"List is not created ....enter '1' to create List\n";
        }
        else
        {
            cout<<"\nWhich node you want to remove?\n";
            cout<<"1 -> first node\n2 -> last node\n3 - >selected node\nProvide your choice \n:";
            cin>>ch;       
            switch(ch)
            {
            case 1: // removing first node
                temp = head;
                head = head->next;
                free(temp);
                break;
            case 2: // removing last node
                temp=head;
                while(temp->next != NULL)
                {
                temp = temp->next;
                } //at the end temp points to last node

                temp2 = head;
                while(temp2->next != temp)
                {
                temp2 = temp2->next;
                } //at the end temp2 points to second last node
                temp2->next = NULL;
                free(temp);
                break;
            case 3: //removing selected node
                cout<<"Enter element of that node, which you want to remove :\n";
                scanf("%d",&sel);
                temp=head;
                while(temp->next != NULL)
                {
                    if(temp->data== sel)
                    {
                    break;
                    }
                    temp = temp->next;
                } //end of while
                if(temp->next == NULL)
                {
                cout<<"there is nothing to remove ....\n";
                }
                else
                {
                temp2 = head;
                while(temp2 -> next != temp)
                {
                temp2 = temp2 -> next;
                } //at the end temp2 points to second last node

                temp2->next = temp->next;
                free(temp);
                } //end of else
                break;
            default:cout<<"wrong input.......\n";
                break;
            }// end of switch
        } //end of outer else
    } //end of remove_ele()
    int display()
    {
        struct node *q;
        if(head==NULL)//if list is not created....
        {
            cout<<"list is empty......Enter '1' to create list\n";
            return 0;
        }
        q=head;
        cout<<"the elements of list are....\n";
        while(q!=NULL)
        {
            cout<<"\t"<<q->data<<"\n";
            q=q->next;
        }//printing the data of LinkedList
    }
    int  search()
    {
        int i, se;
        struct node *q;
        q=head;
        cout<<"Enter element to search:\n";
        cin>>se;
        for (int i=1; i < no+1; i++)//Using linear search Algorithm
        {
            /*
            *this function returns value 1 if element is found 
            *Otherwise it will return value 0
            */
            if(se==q->data)
            {
                cout<<"the element is present at "<<i<<" position and it is "<<q->data<<"\n";
                return 1;
            }
            q=q->next;
        }
        return 0;       
    }
};
int main()
{ 
    int i=0;
    int c,ele,res;
    LinkedList L;
    do
    {
        cout<<"1->Create\n2->Display\n3->Search\n4->Insert Element\n5->Remove Element\n0->Exit\n";
        cout<<"Enter your choice";
        cin>>c;
        switch(c)
        {
            case 1:
                cout<<"enter number of elements to add\n";
                cin>>no;
                cout<<"Enter Elements to add in LinkedList\n";
                while(i<no)
                {
                    
                    cin>>ele;
                    L.create(ele);
                    i++;
                }
            break;
            case 2:
                L.display();
                break;
            case 3:
                res=L.search();
                if(res==0)//if element is not found then value of res becomes '0
                {
                    cout<<"ohh sorry we can't find element....if you want to add it,plz Enter '4'\n";
                }
                break;
            case 4:
                L.insert_ele();
                break;
            case 5:
                L.remove_ele();
                break;
            case 0:exit(0);//this will stop the infinite while loop;
            default:cout<<"You  Enter a wrong number .....\n";
        }
    } while(1);//'1' will make the while loop infinite ....'caz '1' is always true....
    
    return 0;
}
