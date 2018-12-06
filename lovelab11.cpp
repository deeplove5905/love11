#include<iostream>
#include "stdio.h"
#include<math.h>
using namespace std;

void addition()

{
    int x,y;
    int add;
    cout<<"----------------"<<endl;
    cout<<"Addition"<<endl;
    cout<<"----------------"<<endl;

    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    add=x+y;
    cout<<"The addition of "<<x<< "and"<<y<<"is"<<add<<endl;



}
void subtraction()
{
    int x,y;
    int sub;
    cout<<"-----------------"<<endl;
    cout<<"Subtraction"<<endl;
    cout<<"----------------"<<endl;

    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    sub=x-y;
    cout<<"The subtraction of "<<x<< "and"<<y<<"is"<<sub<<endl;

}
void product()
{
    int x,y;
    int product;
    cout<<"-----------------"<<endl;
    cout<<"Product"<<endl;
    cout<<"----------------"<<endl;

    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    product=x*y;
    cout<<"The product of "<<x<< "and"<<y<<"is"<<product<<endl;
}
void divide()
{
    int x,y;
    int divide;
    cout<<"-----------------"<<endl;
    cout<<"Division"<<endl;
    cout<<"----------------"<<endl;

    cout<<"Enter numerator: "<<endl;
    cout<<"enter demoniator"<<endl;
    cin>>x>>y;
    divide=x/y;
    cout<<"The division of "<<x<< "and"<<y<<"is"<< divide<<endl;
}
void square ()
{
    int x;
    int square;
    cout<<"-----------------"<<endl;
    cout<<"Square root"<<endl;
    cout<<"----------------"<<endl;

    cout<<"Enter any number: "<<endl;
    cin>>x;
    square =pow(x,0.5);

    
    cout<<"The square root of "<<x<< "is"<< square <<endl;

}


void exponential()
{
    double number;
    double exp;
    double result;
   
    cout<<"-----------------"<<endl;
    cout<<"Exponential"<<endl;
    cout<<"----------------"<<endl;
 

    cout<<"Enter any number to find the exponential of: "<<endl;
    cin>>number;
    cout<<"Find the exponential of the number:"<<endl;
    cin>>exp;
    result=pow(number,exp);


    
    cout<< number <<"^"<<number<< "is"<< result<<endl;

}
void exit()

{
    cout<<"Exit"<<endl;
}


int main()
{
    cout<<"----------------------"<<endl;
    cout<<"Calculator"<<,endl;;
    cout<<"-----------------------"<<endl;
    cout<<"press 0 for exit"<<endl;
    cout<<"press 1 for Addition"<<endl;;
    cout<<"press 2 for Subtraction"<<endl;
    cout<<"press 3 for product"<<endl;
    cout<<"press 4 for Division"<<endl;
    cout<<"press 5 for Square root"<<endl;
    cout<<"press 6 for Exponential"<<endl;



int choice;
cin>>choice;

 if(choice==0)

 {
     exit();

 }
 else if(choice==1)
 {
     addition();

 }
 else if(choice==2)
 {
     subtraction();

 }
else if(choice==3)
 {
     product();

 }
 else if(choice==4)
 {
     divide();
     
 }
else if(choice==5)
 {
     square();

 }
 else if(choice==6)
 {
     exponential();
     
 }
return 0;
}
