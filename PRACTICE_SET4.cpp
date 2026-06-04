// 1. Take a character and check if it is a letter, a digit, or neither.
// 2. Take a number and print “Fizz” if divisible by 3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both.
// 3. Take three numbers and print the median value (neither maximum nor minimum).
// 4. Take 24-hour time (hours and minutes) and print whether it is AM or PM.
// 5. Take income and age, and check if eligible for tax (age > 18 and income > 5 L).
// 6. Take two numbers and check if both are positive and their sum is less than 100.
// 7. Take a single digit (0–9) and print its word form (“Zero” to “Nine”).
// 8. Take a weekday number (1–7) and determine if it is a weekday or weekend.
// 9. Take electricity units consumed and calculate the bill as per slabs (using if-else).
// 10. Take a password string and check basic rules (length ≥ 8 and contains at least one digit).





    // 1. Take a character and check if it is a letter, a digit, or neither.



    // #include<iostream>
    // #include<cctype>
    // using namespace std;
    // int main(){
    //  char ch;
    //  cout<<"Enter a character";
    //  cin>>ch;
    //  if(isalpha(ch)){
    //     cout<<"IT'S a character";
    //  }
    //  else if(isdigit(ch)){
    //     cout<<"IT'S a digit";
    //  }
    //  else{
    //     cout<<"It's a special charcter";
    //  }

    // }



    // 2. Take a number and print “Fizz” if divisible by 3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both.

    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int num;
    //     cout<<"Enter a number:";
    //     cin>>num;
    //     if(num%3==0 && num%5==0){
    //         cout<<"FIZZBUZZ";

    //     }
    //     else if(num%5==0){
    //         cout<<"Buzz";
    //     }
    //     else if(num%3==0){
    //         cout<<"Fizz";
    //     }
    //     else{
    //         cout<<"INVALID NUMBER";
    //     }
    // }


// 3. Take three numbers and print the median value (neither maximum nor minimum).

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"ENTER a";
//     cin>>a;
//      cout<<"ENTER b";
//     cin>>b;
//      cout<<"ENTER c";
//     cin>>c;
//     int d;
//     d=a+b+c/2;
//     cout<<"MEDIAN ="<<d;

// }


// 4. Take 24-hour time (hours and minutes) and print whether it is AM or PM.
// #include<iostream>
// using namespace std;
// int main(){
//     int time;
//     cout<<"Enter time in (0-24) foramat";
//     cin>>time;
//     if(time<=0 && time>=12){
//         cout<<"It's AM time";

//     }
//     else if (time>=13 && time <=24){
//         cout<<"It's PM time";
//     }
//     else{
//         cout<<"Invalid time";
//     }
// }

// 5. Take income and age, and check if eligible for tax (age > 18 and income > 5 L).

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter age";
//     cin>>age;
//     int income;
//     cout<<"Enter income";
//     cin>>income;
//     if(age>18 && income>500000){
//         cout<<"YOU HAVE TO PAY 15% TAX";
//     }
//     else{
//         cout<<"Yout dont have to pay tax";
//     }
// }


// 6. Take two numbers and check if both are positive and their sum is less than 100.

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter a";
//     cin>>a;
//     cout<<"Enter b";
//     cin>>b;
//     if(a>0 && b>0 && (a+b)<100){
//         cout<<"BOTH ARE POSITIVE AND SUMIS LESS THAN 100";
//     }
//     else{
//         cout<<"BOTH ARE NOT  POSITIVE ";
//     }
// }

// 7. Take a single digit (0–9) and print its word form (“Zero” to “Nine”).
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a(0-9)";
//     cin>>a;
//     if(a<0 && a>9){
//         cout<<"Invalid number";
//     }
//         switch (a) {
//         case 0: cout << "Zero"; break;
//         case 1: cout << "One"; break;
//         case 2: cout << "Two"; break;
//         case 3: cout << "Three"; break;
//         case 4: cout << "Four"; break;
//         case 5: cout << "Five"; break;
//         case 6: cout << "Six"; break;
//         case 7: cout << "Seven"; break;
//         case 8: cout << "Eight"; break;
//         case 9: cout << "Nine"; break;
//     }
//     }


// / 8. Take a weekday number (1–7) and determine if it is a weekday or weekend.

// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"Enter weekday";
//     cin>>day;
//     if(day<=0 ||day>7){
//         cout<<"Enter a valid weekday";
//     }
//     switch(day){
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//                cout<<"It's a weekday";
//         break;
        
        
//         case 6:
//         case 7:
//         cout <<"It's a weekend";
//         break;
//         default:
//         cout<<"Unexpected error";
//     }
// }


// 9. Take electricity units consumed and calculate the bill as per slabs (using if-else).

// #include <iostream>
// #include <iomanip> 
// using namespace std;

// int main() {
//     int units;
//     double bill = 0.0; 

//     cout << "Enter units consumed: ";
//     cin >> units;

//     if (units < 0) {
//         cout << "Invalid input! Units cannot be negative." << endl;
//     }
//     else if (units <= 99) {
//         cout << "Free from govt" << endl;
//     }

//     else if (units >= 100 && units <= 250) {
        
//         double rate = 2.50; 
//         bill = units * rate;
//         cout << fixed << setprecision(2);
//         cout << "Bill was: $" << bill << endl;
//     }

//     else if (units >= 251 && units <= 350) {
//         double rate = 2.50; 
//         double baseBill = units * rate;
//         double tax = baseBill * 0.15;
//         bill = baseBill + tax; 
        
//         cout << fixed << setprecision(2);
//         cout << "Bill was: $" << bill << " (includes 15% tax)" << endl;
//     }

//     else if (units > 350) {
  
//         double rate = 3.00; 
//         bill = units * rate;
//         cout << fixed << setprecision(2);
//         cout << "Bill was: $" << bill << endl;
//     }
//     else {
        
//         cout << "Please check your input." << endl;
//     }

//     return 0;
// }


// 10. Take a password string and check basic rules (length ≥ 8 and contains at least one digit).



// #include <iostream>
// #include <string>
// #include <cctype> 

// using namespace std;

// int main() {
//     string password;
//     bool hasDigit = false;

//     cout << "Enter a password: ";
//     cin >> password;

    
//     if (password.length() < 8) {
//         cout << "Password is too short! (Must be at least 8 characters)." << endl;
//         return 0; 
//     }

//     for (char ch : password) {
//         if (isdigit(ch)) {
//             hasDigit = true;
//             break; 
//         }
//     }

//     if (!hasDigit) {
//         cout << "Password must contain at least one digit (0-9)." << endl;
//     } else {
//         cout << "Password is valid!" << endl;
//     }

//     return 0;
// }