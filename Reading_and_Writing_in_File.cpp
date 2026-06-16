#include<iostream>
#include <fstream>
using namespace std;
int main(){
    string st = "Him ";
    //opening file using constructors and writing in it
    ofstream out("sample.txt"); // write operation
    out<<st;
    
    // string st2 ;
    // // opening the file using constructor and reading it
    // ifstream in("sample2.txt");
    // // in>>st2; --> this code will only read one word
    // getline(in,st2); // this code will read the whole line 
    //   cout<<st2;



    return 0;
}