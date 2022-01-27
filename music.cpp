#include<iostream>
using namespace std;
int main()
{
    int i;
    double purchases,teacher_discount,sales_tax;
    cout<<"Enter the 1 for teacher and 0 for non_teacher ";
    cin>>i;
    cout<<"enter the purchases";
    cin>>purchases;
    if(i==1)
    {
        if(purchases<100)
        {    
            teacher_discount=10*purchases/100;
            cout<<"total purchases\t\t\t"<<purchases;
            cout<<"teacher_discount (10%)\t\t "<<teacher_discount;
            sales_tax=5*purchases/100;
            cout<<"sales_tax (5%) \t\t\t:"<<sales_tax;
            cout<<"discounted amount\t\t\t"<<purchases-teacher_discount;
            cout<<"total \t\t\t"<<(purchases-teacher_discount)+sales_tax;

        }
    }
}