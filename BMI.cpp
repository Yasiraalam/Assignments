/*Write a program that calculates the user’s body mass index (BMI) and categorizes it as 
underweight, normal, overweight, or obese, based on the following table from the United 
States Centers for Disease Control:
BMI                Weight Status   
Below(18.5)         Underweight     
18.5–24.9           Normal
25.0–29.9          Overweight
30.0 and above      Obese
                    
To calculate BMI based on weight in pounds ( wt_lb ) and height in inches ( ht_in ), use
 this formula (rounded to tenths): 703 * wt_lb /ht_in2
Prompt the user to enter weight in pounds and height in inches*/
#include<iostream>
using namespace std;
int main()
{
    int underweight,normal,overweight,obese;
    float wt_lb,BMI,height;
    cout<<"Enter the weight of a person";
    cin>>wt_lb;
    cout<<"Enter the height of a person in inches";
    cin>>height;
    BMI=703*wt_lb/(height*height);
    cout<<"BMI :"<<BMI<<endl;
    if(BMI<18.5)
    {   
         cout<<"the person is underwight"<<endl;
    }
    else if(BMI>=18.5||BMI<=24.9)
    {
        cout<<"the person is normal"<<endl;
    }
    else if(BMI>=20.0||BMI<=29.9)
    {
        cout<<"the person is overweight"<<endl;
    }
    else if(BMI>=30)
    {
        cout<<"the person is obese"<<endl;
    }
    return 0;
}
