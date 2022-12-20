/**
*     author «« AlgoHacker3112 ««
*    created «« 2022-11-29 23:44:18 ««
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif

class Node{
    public:
    int data;
    Node *next;
};

void deleteNode(Node ** head_ref, int pos){
    Node* temp = *head_ref;
    if(pos == 0){
        *head_ref = temp -> next;
    }
    pos--;
    while(pos-- && temp != NULL){
        temp = temp -> next;
    }
    if(temp == NULL || temp->next == NULL){
        return ;
    }
     Node* next = temp -> next -> next;
     temp -> next = next;
}

void printList(Node *& n){
    while(n != NULL){
        cout << n->data << " ";
        n = n -> next;
    }
}
void push(Node *& head_ref,int new_data){
    
    Node * new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = head_ref;

    head_ref = new_node;
}
void insertAfter(Node *&prev_node , int new_data){
    if(prev_node == NULL){
        cout << "prev node cannot be empty" << endl;
        return ;
    }
    Node *new_node = new Node();

    new_node -> data = new_data;
    new_node -> next = prev_node -> next;
    prev_node -> next = new_node;
}
void append(Node *& head_ref,int new_data){
    Node* new_node = new Node();
    new_node -> data = new_data;

    Node *last = head_ref;
    if(head_ref == NULL){
      head_ref = new_node;
      return ;
    }
    while( last-> next != NULL){
        last = last -> next;
    }
    last -> next = new_node;
}
int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
 while(t--){


 Node *head = NULL;
 Node *second = NULL;
 Node *third = NULL;
 head = new Node();
 second = new Node();
 third = new Node();

 head -> data = 1;
 head -> next = second;

 second -> data = 2;
 second -> next = third;

 third -> data = 3;
 third -> next = NULL;
 push(head,0);
 insertAfter(second -> next, 9);
 append(head,7);
//  deleteNode(&head,4);
 printList(head);
 
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}