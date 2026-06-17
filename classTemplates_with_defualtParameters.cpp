#include <iostream>
using namespace std;
template <class T1=int, class T2=float, class T3=char>
class himaksh{
    public:
       T1 a;
       T2 b;
       T3 c;
       himaksh(T1 a, T2 b, T3 c){
        this->a=a;
        this->b=b;
        this->c=c;
       }
       void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
       }
};
int main (){
    himaksh <>h(4,4.4,'f');
    h.display();
    cout<<endl;
    himaksh <char, char,char>g('i','l','u');
    g.display();
    return 0;
}