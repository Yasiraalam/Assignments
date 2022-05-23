# Assignments 
/*Q1.Write a program that calculates the user’s body mass index (BMI) and categorizes it as 
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

/*Q2. a program that takes the x – y coordinates of a point in the Cartesian plane and prints
 a message telling either an axis on which the point lies or the quadrant in which it is found.
Sample lines of output:
(-1.0, -2.5) is in quadrant III
(0.0, 4.8) is on the y-axis*/


   
/*1.Q3. Write a program that will find the smallest, largest, and average values in a collection of 
N numbers. Get the value of N before scanning each value in the collection of N numbers.2. Modify your program 
to compute and display both the range of values
in the data collection and the standard deviation of the data collection. To compute the standard deviation, accumulate the sum 
of the squares of the data values ( sum_squares ) in the main loop.*/

/*Q4.Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
X
XXX
XXXXX
XXXXXXX
XXXXXXXXX
except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
loop that steps down the screen from line to line.*/
 
/*Q5.Keith’s Sheet Music needs a program to implement its music teacher’s discount policy.
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

/*Q6.Write a program that interacts with the user like this:
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

/*Q7.Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a function called circarea() that finds the area of a circle
in a similar way. It should take an argument of type float and return an argument of the same type. Write a main() function that gets a radius
value from the user, calls circarea(), and displays the result.

*Q8.. Raising a number n to a power p is the same as multiplying n by itself p times. Write a function called power() that takes a double value
for n and an int value for p, and returns the result as a double value. Use a default argument of 2 for p, so that if this argument is omitted,
the number n will be squared. Write a main() function that gets values from the user to test this function.

*Q9. Write a function called zeroSmaller() that is passed two int arguments by reference and then sets the smaller of the two numbers to 0.
Write a main() program to exercise this function.
