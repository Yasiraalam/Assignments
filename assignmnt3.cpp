#include<iostream>
using namespace std;
int main()

{
    int i,no_of_persons,standing,t=1;
    cout<<"Enter the no of persons";
    cin>>no_of_persons;
    cout<<"\nEnter the number of chair available";
    cin>>i;
    standing= no_of_persons-i;

    while( no_of_persons!= standing)
    {
        t=no_of_persons*t;
        no_of_persons--;
    }
      cout<<"the total combination is:"<<t;

}