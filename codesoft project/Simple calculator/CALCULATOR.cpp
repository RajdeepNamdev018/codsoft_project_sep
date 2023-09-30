#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

void addition();
void subtraction();
void multiplication();
void division();

int main()  {
    system("Color 13"); 
    cout<<"\n\t*********** This calculator created by  RAJDEEP NAMDEV ***********\n\t "<<endl;
    cout<<"\n\t*********** Welcome to the Simple calculator!!! ***********\n\t"<<endl;
    int choice;
    while (1)   {
        cout<<"\n\t******* Press 0 to quit the program ********\n\t"<<endl;
        cout<<"\n\t\t\t Enter 1 for Addition \n"<<endl;
        cout<<"\n\t\t\t Enter 2 for Subtraction \n"<<endl;
        cout<<"\n\t\t\t Enter 3 for Multiplication \n"<<endl;
        cout<<"\n\t\t\t Enter 4 for Division \n"<<endl;
        cout<<"\n\tEnter the operation you want to do:\n "<<endl;
        cin>>choice;
        switch (choice) {
        case 0 :
            exit(0);
        case 1 :
            addition();
            break;
        case 2 :
            subtraction();
            break;
        case 3 :
            multiplication();
            break;
        case 4 :
            division();
            break;
        default:
            cout<<"!! please enter valid operation";
        }
    }
    return 0;
}

void addition() {
        int a, b;
        cout<<"\nEnter the numbers you want to addition :\n "<<endl;
        cin>>a>>b;
        cout<<"The sum of a and b is = "<< a + b<<endl;
}

void subtraction() {
    int a, b;
    cout<<"\nEnter the numbers you want to subtraction :\n "<<endl;
    cin>>a>>b;
    cout<<"The subtraction of a and b is = "<< a - b<<endl;
}

void multiplication() {
    int a, b;
    cout<<"\nEnter the numbers you want to multiplication :\n "<<endl;
    cin>>a>>b;
    cout<<"The multiplication of a and b is = "<< a * b<<endl;
}

void division() {
    cout<<"\nEnter the numbers you want to division: \n"<<endl;
    float a, b;
    cin>>a>>b;
    cout<<"The division of a and b is = "<< a/b <<endl;
}
