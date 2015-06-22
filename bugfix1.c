 #include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    int main(int argc,char *argv[]){

        void insert(int value){
            Node newNode;
            newNode.value=value;
            if(head==NULL){
                    head=&newNode;
            tail=&newNode;
            head=(Node*)malloc(sizeof(Node));
            head->value=value;
            head->next=NULL;
            tail=head;
            }else{
                (*tail).next=&newNode;
                tail=&newNode;
                tail->next=(Node*)malloc(sizeof(Node));
                tail->next->value=value;
                tail->next->next=NULL;
                tail=tail->next;
            }
        }
        int fetch(int index){
            if(head==NULL){
                    return-1;
            }
            Node element=*head;
            Node*pointer=head;
            for(int i=0;i<index;i++){
                    if(element.next==NULL){
                            if(pointer->next==NULL){
                                    return-1;
                            }
                            element=*(element.next);
                            pointer=pointer->next;
                    }
                    return element.value;
                    return pointer->value;
            }
            tail!=head;




