/*Write a program that interacts with the user like this:
(1) Carbon monoxide
(2) Hydrocarbons
(3) Nitrogen oxides
(4) Nonmethane hydrocarbons
Enter pollutant number>> 2
Enter number of grams emitted per mile>> 0.35
Enter odometer reading>> 40112
Emissions exceed permitted level of 0.31 grams/mile.
Use the table of emissions limits below to determine the appropriate message.
                             First 50,000 Miles            Second 50,000 Miles
carbon Monoxide            monoxide 3.4 grams/mile           4.2 grams/mile
 hydrocarbons                   0.31 grams/mile              0.39 grams/mile          
 nitrogen oxides                 0.4 grams/mile               0.5 grams/mile
Nonmethane hydrocarbons          0.25 grams/mile              0.31 grams/mile*/          
                                                              
#include <iostream>
using namespace std;
int main()
{
    int pn;
    float distance,grams;
    cout <<"Enter 1 for carbon monoxide 2 for hydrocarbons 3 for Nitrogen oxide and 4 for Non-methane hydogencarbons\n"<<endl;
    cin >>pn;
    cout <<"enter odometer reading"<<endl;
    cin>>distance;

    switch (pn)
    {
        case(1):
        {
            cout <<"enter number of grams emitted per mile"<<endl;
            cin>>grams;
            
            if (distance < 50000)
            {
                if (grams > 3.4F)
                {
                    cout <<"Emission exceed permitted level of 3.4 grams/mile"<<endl;
                }
                else if (grams <= 3.4F)
                {
                    cout <<"Emission within permitted level"<<endl;
                }

            }
            else if (distance > 50000 )
            {
                 if (grams > 4.2F)
                {
                    cout <<"Emission exceed permitted level of 4.2 grams/mile"<<endl;
                }
                else if (grams <= 4.2F)
                {
                    cout <<"Emission within permitted level"<<endl;
                }
            }
              break;
        }
        case(2):
        {
            cout <<"enter number of grams emitted per mile"<<endl;
            cin>>grams;
            
            if (distance <= 50000)
            {
                if (grams > 0.31F)
                {
                    cout <<"Emission exceed permitted level of 0.31 grams/mile"<<endl;
                }
                else if (grams <= 0.31F)
                {
                    cout <<"Emission within permitted level"<<endl;
                }

            }
            else if (distance > 50000 )
            {
                 if (grams > 0.39F)
                {
                    cout <<"Emission exceed permitted level of 0.39 grams/mile"<<endl;
                }
                else if (grams <= 0.39F)
                {
                    cout <<"Emission within permitted level"<<endl;
                }
            }
              break;
    }
    case(3):
        {
            cout <<"enter number of grams emitted per mile"<<endl;
            cin>>grams;
            
            if (distance <= 50000)
            {
                if (grams > 0.4F)
                {
                    cout <<"Emission exceed permitted level of 0.4 grams/mile"<<endl;
                }
                else if (grams <= 0.4F)
                {
                    cout <<"Emission within permitted level"<<endl;
                }

            }
            else if (distance > 50000 )
            {
                 if (grams > 0.5F)
                {
                    cout <<"Emission exceed permitted level of 0.5 grams/mile"<<endl;
                }
                else if (grams <= 0.5F)
                {
                    cout <<"Emission within permitted level"<<endl;
                }
            }
              break;
    }
    case(4):
        {
            cout <<"enter number of grams emitted per mile"<<endl;
            cin>>grams;
            
            if (distance <= 50000)
            {
                if (grams > 0.25F)
                {
                    cout <<"Emission exceed permitted level of 0.25 grams/mile"<<endl;
                }
                else if (grams <= 0.25F)
                {
                    cout <<"Emission within permitted level"<<endl;
                }

            }
            else if (distance > 50000 )
            {
                 if (grams > 0.31F)
                {
                    cout <<"Emission exceed permitted level of 0.31 grams/mile"<<endl;
                }
                else if (grams <= 0.31F)
                {
                    cout <<"Emission within permitted level"<<endl;
                }
            }
              break;
    }
}
}