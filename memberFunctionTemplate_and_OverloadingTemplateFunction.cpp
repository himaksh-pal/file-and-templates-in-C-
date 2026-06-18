#include <iostream>
using namespace std;
template <class T>
class himaksh{
    public:
    T data ;
    himaksh(T a){
        data=a;
    }
    void display();
};
template<class T>
void himaksh<T> :: display(){
    cout<<data<<endl;
}
void func(int b){
    cout<<"the func is invoked "<<b<<endl;
}
template <class T>
void func(T b){
    cout<<"the templatised func is invoked "<<b<<endl;
}

int main(){
    // himaksh<int> h(6);
    // h.display();
    func(4);// the exact match will take the higher priority
    func(9.555);

    return 0;
}