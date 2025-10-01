//Abir Seth
//ENTC A1
//PRN-24070123003

#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

int main() {
    Node* n1 = new Node(5);

    cout << "Node value: " << n1->val << endl;
    cout << "Next value: " << n1->next << endl;

    return 0;
}

Node value: 5
Next value: 0


=== Code Execution Successful ===
