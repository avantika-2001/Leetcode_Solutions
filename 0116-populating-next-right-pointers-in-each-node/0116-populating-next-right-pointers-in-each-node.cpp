/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void connect(Node* t1, Node* t2){
        t1->next=t2;
        if(t1->right && t2->left)
            connect(t1->right,t2->left);
    }
    void find_next(Node* t){
        if(t==NULL)
            return;
        if(t->left && t->right)
            connect(t->left,t->right);
        else
            return;
        connect(t->left);
        connect(t->right);
    }
    Node* connect(Node* root) {
        if (!root) 
            return NULL;
        find_next(root);
        return root;
    }
};