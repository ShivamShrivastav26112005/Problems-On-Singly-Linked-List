// Practice 1st vedio -> how we delete a node 

#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};


// Delete Node
void deletenode(Node *head, Node *target)
{
    Node *temp = head;
    while (temp->next != target)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}


// Delete Value 
void deletenode2(Node *head, int target)
{
    Node *temp = head;
    while (temp->next->val != target)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}



// // ye head node ko hi delete kar dega agar hmara target head hua to 
// // head ko delete karne ke liye void wala code nhi kaam karga 
// // head node ko delete karne ke liye eska return type Node* bna dete h
// // hm apna pahle node delete kar rhe h head node
// // head = target h to head=head->next karte h and return apne head ko kara dete h


// // head ka node delete karne ka code h ye
// // exception hai ye 
// Node* deletenode3(Node* head, Node* target)
// {
//     // condition -:
//     if(head==target)
//     {
//         head=head->next;
//         return head;
//     }
//     // agar mera head target ke equal nhi h to ye code/condition fir chalega
//     Node *temp = head;
//     while (temp->next != target)
//     {
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
//     return head; // new head jo delete hone ke bad bna h usko hm return kara rhe h last me 

// }


void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);

    // Delete Node 
    deletenode(a, c); // a is head node , c node ko delete karna h
    display(a);

    // Delete Value 
    deletenode2(a, 40); // a is head node , 40 is target value/node and hme 40 node ko delete karna h
    display(a);
    


// //  head ka node delete karne ke liye
//     Node* head = a;
//     head=deletenode3(head,a); 
//     display(head);


// // done delete hua head ka hi node
// // 10 20 30 40 50 
// // 20 30 40 50 


}


