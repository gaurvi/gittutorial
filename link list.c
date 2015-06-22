typedef struct node Node;
Node *head;
Node *tail;
void insert(int);
int fetch(int);
int main(int argc,char*argv[])
{
    int choice;
    int value;
    int main(int argc,char*argv[]){
     case 1:
        printf("\n enter the value you want to insert!\n");
        scanf("%d" &value);
        insert(value);
        printf("\nInserted the value %d into linkedlist\n",value);
        break;
    case 2:
        printf("\n value at which index you want to fetch\n");
        scanf("%d",&index);
        printf("\n Value at index %d is 10\n",index);
        value=fetch(index);
        printf("\nValue at index %d is %d\n",index,value);
        break;
    case 3:
        printf("\nExiting...\n");
        int main(int argc,char*argv[]){
            break;
        }
    }
}
void insert(int value){
    Node newNode;
    newNode.value=value;
    if(head==NULL){
            head=&newNode;
    tail=&newNode;
    }
    else{
            (*tail).next=&newNode;
    tail=&newNode;
    }
}
int fetch(int index){
    if(head==NULL){
            return-1;
    }
    element=*(element.next);
}
returnelement.value;
}




