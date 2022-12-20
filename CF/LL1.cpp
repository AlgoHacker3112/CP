/**
*     author:  AlgoHacker3112
*    created: 2022-11-30 17:58:32
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
    int data ;
    Node* next;
};
Node* reversedLinkedlist(Node*& head){
     Node *new_node = new Node();
     while(head != NULL){
        Node *next = head -> next;
        head -> next = new_node;
        new_node = head;
        head = next;
     }
}
void mergeTwoSortedLL(Node* l1 ,Node *l2){
    
     if(l1 == NULL) return l2;
     if(l2 == NULL) return l1;
     Node *res_head = NULL;
     if(l1 -> data <= l2 -> data) res_head = l1;
     else res_head = l2;
     Node *tmp = res_head;
     while(l1 != NULL && l2 != NULL){
     Node *new_node = new Node();
        if(l1-> data <= l2 -> data){
            new_node -> data = l1 -> data ;
            tmp -> next = new_node;
            tmp = new_node;
            l1 = l1 -> next;
        }
        else{
            new_node -> data = l2 -> data;
            tmp -> next = new_node;
            tmp = new_node;
            l2 = l2 -> next;
        }
     }
     return res_head;
    
}
void merge(Node *l1 , Node *l2){
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    Node *res_head = NULL;
    if(l1 -> data > l2 -> data) swap(l1 ,l2);
    res_head = l1;
    while(l1 != NULL && l2 != NULL){
        Node *tmp = NULL;
        while(l1 != NULL && l1 -> data <= l2 -> data){
            tmp = l1 ;
            l1 = l1 -> next;
        }
        tmp -> next = l2;
        swap(l1,l2);
    }
    return res_head;
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 

 while(t--){


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}