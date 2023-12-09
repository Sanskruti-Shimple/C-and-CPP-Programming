#include<iostream>
using namespace std;

class Acc{
    int id;
    static int BranchNo;

    public:

    Acc(int id){
        this->id = id;
    }

    void display(){
        cout<<id<<'\t'<<BranchNo<<endl;
    }

    void change(){
        BranchNo = 105;
    }
};

int Acc::BranchNo=101;
 
int main(){
    Acc a(5), b(10);
    a.display();
    b.display();
    
    a.change();

    a.display();
    b.display(); 
    return 0;
}
