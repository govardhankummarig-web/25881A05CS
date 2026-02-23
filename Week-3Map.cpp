#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>students;
    sudents[101]="Ansh";
    students[102]="Hemanth";
    students[103]="Ravi";
    cout<<"student details:\n";
    for(map<int,string>::iterator it=students begin();it!=students.end();it++){
        cout<<"Id:"<<it->first<<"Name:"<<it->second
    }

}
