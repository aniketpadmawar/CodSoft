#include<iostream>
using namespace std;
class simple_calculator{
    public:
        int a,b;
        void getnums(){
            cout<<"enter first number"<<endl;
            cin>>a;
            cout<<"enter second number"<<endl;
            cin>>b;
        }
        void simple_operations(){
            cout<<"Addition: "<<a+b<<endl;
            cout<<"Substraction: "<<a-b<<endl;
            cout<<"Multiplication: "<<a*b<<endl;
            cout<<"Division: "<<(float)a/b<<endl;
        }
};
class sci_calculator:public simple_calculator{
    public:
    void sci_operations(){
        cout<<"Squre of "<<a<<" is :"<<a*a<<endl;
        cout<<"Squre of "<<b<<" is :"<<b*b<<endl;
        cout<<"cube of "<<a<<" is :"<<a*a*a<<endl;
        cout<<"cube of "<<b<<" is :"<<b*b*b<<endl;
    }
};
int main(){
//     simple_calculator simplecalc;
//     simplecalc.getnums();
//     simplecalc.simple_operations();
    sci_calculator scicalc;
    scicalc.getnums();
    scicalc.simple_operations();
    scicalc.sci_operations();
    return 0;
}
