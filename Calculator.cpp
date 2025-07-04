// SIMPLE CALCULATOR
#include <iostream>
using namespace std;

int main() 
{
        int number_1, number_2,answer,option;
        float division;
        cout<<"Enter two integers: "<<endl;
        cin>>number_1>>number_2;
        cout<<"Enter 1 for Addition: "<<endl ;
        cout<<"Enter 2 for Subtraction: "<<endl ;
        cout<<"Enter 3 for Multiplication: "<<endl ;
        cout<<"Enter 4 for Division: "<<endl ;
        cout<<"Enter your option: "<<endl;
        cin>>option;
        switch (option)
        {
                case 1:
                        answer=number_1+number_2;
                        cout<<number_1<<" + "<<number_2<<" = "<<answer;
                break;
                case 2:
                        answer=number_1-number_2;
                        cout<<number_1<<" - "<<number_2<< " = " <<answer;
                break;
                case 3:
                        answer=number_1*number_2;
                        cout<<number_1<<" * "<<number_2<<" = "<<answer;
                break;
                case 4:
                        division=(float)number_1/(float)number_2;
                        cout<<number_1<<" / "<<number_2<<" = "<<division;
                break;
                default:
                        cout<<"wrong input ";
                break;
        }  
        return 0;
}
