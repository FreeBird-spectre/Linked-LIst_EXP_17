//Abir Seth
//PRN-24070123003
//ENTC A1

#include <iostream>
using namespace std;


    class Link{
        public:
        int data;
        Link* next;
        
        Link(int num){
        data = num;
        next = NULL;
    }
};

int main(){
    Link* l1 = new Link(9);
    cout<<l1 ->data<<" "<<l1->next;
    return 0;
}

9 0

=== Code Execution Successful ===
