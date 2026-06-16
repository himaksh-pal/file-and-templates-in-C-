#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //creating the name string and filling the name string by the user
    cout<<"enter your name :";
    string name;
    cin>>name;
    // connecting our file with hout stream
    ofstream hout("sample.text");
    // writing the string to the file 
    hout<<name + " is my name";
    hout.close();

    string context;
    ifstream hin("sample.text");
    getline(hin,context);
    cout<<context;
    hin.close();
    return 0;
}