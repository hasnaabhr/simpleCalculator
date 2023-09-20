#include <iostream>

using namespace std;
//this function is to add two numbers
float add(float num1,float num2);

//this function is to subtract two numbers
float sub(float num1,float num2);

//this function is to mutiply two functions
float mul(float num1,float num2);

//this function is to divide two numbers
 float div(float num1,float num2);

int main()
{
    int choice;
    float num1,num2;
    float res;
do{
 cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
       if(choice>= 1 && choice<=4)
       {
           cout<<"Enter the first number\n";
           cin>>num1;
           cout<<"Enter the second number\n";
           cin>>num2;
       }
    switch(choice)
    {
    case 1:
        res=add(num1,num2);
        cout<<"num1"<<" "<<"+"<<" "<<"num2"<<" "<<"="<<" "<<res<<"\n";
        break;
    case 2:
        res=sub(num1,num2);
        if(num1>num2)
        {
           cout<<"num1"<<" "<<"-"<<" "<<"num2"<<" "<<"="<<" "<<res<<"\n";
        }
        else
        {
           cout<<"num2"<<" "<<"-"<<" "<<"num1"<<" "<<"="<<" "<<res<<"\n";
        }


        break;
    case 3:
        res=mul(num1,num2);
        cout<<"num1"<<" "<<"*"<<" "<<"num2"<<" "<<"="<<" "<<res<<"\n";
        break;
    case 4:

             res=div(num1,num2);
       cout<<"num1"<<" "<<"/"<<" "<<"num2"<<" "<<"="<<" "<<res<<"\n";
        break;

    case 5:
        return 0;

    default:
     // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;

    }
}while(choice!=5);
cout<<"\n";
    return 0;
}
//this function is to add two numbers
float add(float num1,float num2)
{
    return num1+num2;
}
//this function is to subtract two numbers
float sub(float num1,float num2)
{
       if(num1>num2)
          return (num1-num2);

    return (num2-num1);

}
//this function is to mutiply two functions
float mul(float num1,float num2)
{

    return (num1*num2);
}
//this function is to divide two numbers
 float div(float num1,float num2)
{
   return(num1/num2) ;
}
