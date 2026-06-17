#include <iostream>
using namespace std;
template <class T1, class T2>
class myClass{
    T1 data1;
    T2 data2;
    public:
        myClass(T1 a, T2 b){
            data1=a;
            data2=b;
        }
        void display(){
            cout<<data1<<data2;
        }
};
int main(){
    myClass<int,char>obj(3,'g');
    obj.display();
    
    
    return 0;
}