/*Keith’s Sheet Music needs a program to implement its music teacher’s discount policy.
The program prompts the user to enter the purchase total and indicate whether the purchaser
 is a teacher. Music teachers receive a 10% discount on their sheet music purchases unless
  the purchase total is $100 or higher. In that case, the discount is 12%. The discount
   calculation occurs before the addition of the 5% sales tax. Here are two sample 
   outputs —one for a teacher and one for a nonteacher. Use necessary manipulators to format
    your output.
    (For Teacher)
Total purchases       $122.00
Teacher's discount   (12%) 14.64
Discounted total      107.36
Sales tax           (5%) 5.37
Total               $112.73
(For Non-teacher)
Total purchases     $ 24.90
Sales tax          (5%) 1.25
Total               $ 26.15*/
#include<iostream>
using namespace std;
int main()
{
    int i;
    float sales_tax,total,purchases,teacher_discount;
    cout<<"Enter the 1 for teacher and 0 for non_teacher ";
    cin>>i;
    cout<<"enter the purchases";
    cin>>purchases;
    if(i==1)
    {     cout<<"\t***teacher_discount***";
        if(purchases<100)
        {    
            teacher_discount=(10*purchases)/100;
            cout<<"\ntotal purchases\t\t"<<purchases;
            cout<<"\teacher_discount (10%)\t\t "<<teacher_discount;
            sales_tax=(5*(purchases-teacher_discount))/100;
            cout<<"\nsales_tax (5%) \t\t\t:"<<sales_tax;
            cout<<"\tdiscounted amount\t\t\t"<<purchases-teacher_discount;
            cout<<"\ntotal \t\t\t"<<(purchases-teacher_discount)+sales_tax;

        }
        else if(purchases>=100)
          teacher_discount=(12*purchases)/100;
            cout<<"\ntotal purchases\t\t\t"<<purchases;
            cout<<"\nteacher_discount (12%)\t\t "<<teacher_discount;
            sales_tax=(5*(purchases-teacher_discount))/100;
            cout<<"\nsales_tax (5%) \t\t\t:"<<sales_tax;
            cout<<"\ndiscounted amount\t\t"<<(purchases-teacher_discount);
            cout<<"\ntotal \t\t\t"<<(purchases-teacher_discount)+sales_tax;

    }
    else if(i==0)
    {  
        cout<<"\t****non_teacher*****";
    cout<<"\ntotal purchases \t\t\t:"<<purchases<<endl;
     cout<<"sales_tax (5%) \t\t\t:"<<sales_tax;
     total=purchases+sales_tax;
     cout<<"\ntotal \t\t\t\t:"<<total;
    }
}