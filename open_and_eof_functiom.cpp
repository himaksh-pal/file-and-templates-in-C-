#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream out;
    out.open("sample.text");
    out<<"happy birthday\n";
    out<<"yesterday";
    out.close();

    ifstream in;
    string text;
    in.open("sample.text");
    while(in.eof()==0){
        getline(in,text);
        cout<<text<<endl;
    }
    in.close();
    
    return 0;
}