// 1. Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the origin.
// 2. Take three numbers and check if they can form a Pythagorean triplet.
// 3. Take day and month and check if it forms a valid calendar date (ignoring leap years).
// 4. Take time (hours and minutes) and print the smaller angle between the hour and minute hands.
// 5. Take three numbers and check if they are in arithmetic progression.
// 6. Take three numbers and check if they are in geometric progression.
// 7. Take a 3-digit number and check if the sum of the first and last digit equals the middle digit.
// 8. Take an integer (1–9999) and check if the sum of its digits is greater than the product of its digits.
// 9. Take two dates (day and month) and determine which one comes first in the calendar.
// 10. Take a year and print the corresponding century (e.g., “19th century”, “20th century”)


// 1. Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the origin.
// #include<iostream>
// using namespace std;
//  int main(){
//     int x, y;
//     cout<<"Enter X";
//     cin>>x;
//     cout<<"Enter Y";
//     cin>>y;
//     if(y==0){
//         cout<<"The piont lies in x axis";
//     }
//     else if(x==0){
//             cout<<"The piont lies between y axis";
//         }
//         else if (x==0 && y==0 ){
//                 cout<<"The piont is at origin";
//             }
//                 else{
//                     cout<<"The point lies bwtween x and y axis";
//                 }
//             }

// 2. Take three numbers and check if they can form a Pythagorean triplet.


// #include<iostream>
// using namespace std;
// int main(){
//      int a ,b,c;
//      cout<<"Enter a";
//      cin>>a;
//      cout<<"Enter b";
//      cin>>b;
//      cout<<"Enter c";
//      cin>>c;
//      if(a>b)swap(a,b);
//       if(b>c)swap(b,c);
//        if(a>c)swap(a,c);
//  if(a*a+b*b==c*c){
//     cout<<"YES it's a pyhotgorean triplet";
//  }else{
//     cout<<"NO IT'S not a pythogorean triplet";
//  }

// }


// / 3. Take day and month and check if it forms a valid calendar date (ignoring leap years).
// #include <iostream>
// using namespace std;

// int main() {
//     int day, month;

//     cout << "Enter day: ";
//     cin >> day;

//     cout << "Enter month: ";
//     cin >> month;

//     bool valid = false;

//     if (month >= 1 && month <= 12) {

//         if (month == 2) {
//             valid = (day >= 1 && day <= 29);
//         }
//         else if (month == 4 || month == 6 ||
//                  month == 9 || month == 11) {
//             valid = (day >= 1 && day <= 30);
//         }
//         else {
//             valid = (day >= 1 && day <= 31);
//         }

//         if (valid)
//             cout << "Valid date";
//         else
//             cout << "Not valid date";
//     }
//     else {
//         cout << "Enter a valid month";
//     }

//     return 0;
// }


// / 4. Take time (hours and minutes) and print the smaller angle between the hour and minute hands.

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int hours, minutes;
//   cout << "Enter hours and minutes: ";
//     cin >> hours >> minutes;
//     if (hours == 12)
//         hours = 0;
//     double hourAngle = 30 * hours + 0.5 * minutes;
//     double minuteAngle = 6 * minutes;
//     double angle = abs(hourAngle - minuteAngle);
//     if (angle > 180)
//         angle = 360 - angle;
//     cout << "Smaller angle = " << angle << " degrees";

// }

// 5. Take three numbers and check if they are in arithmetic progression.

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter a";
//     cin>>a;
//     cout<<"Enter b";
//     cin>>b;
//     cout<<"ENter c";
//     cin>>c;
//     if((b-a)==(c-b)){
//         cout<<"THis is in AP";

//     }
//     else{
//         cout<<"not in ap";
//     }
// }


// 6. Take three numbers and check if they are in geometric progression.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter a";
//     cin>>a;
//     cout<<"Enter b";
//     cin>>b;
//     cout<<"ENter c";
//     cin>>c;
//     if(b*b==a*c){
//         cout<<"Given numbers are in GP";

//     }
//     else{
//         cout<<"Given numbers are not in GP";
//     }

// }
// 7. Take a 3-digit number and check if the sum of the first and last digit equals the middle digit.


// #include<iostream>
// using namespace std;
// int main(){
//         int a,b,c;
//     cout<<"Enter a";
//     cin>>a;
//     cout<<"Enter b";
//     cin>>b;
//     cout<<"ENter c";
//     cin>>c;
//     if(b==a+c){
//         cout<<"YES";

//     }
//     else{
//         cout<<"NOO";
//     }

// }

// 8. Take an integer (1–9999) and check if the sum of its digits is greater than the product of its digits.

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number (1-9999): ";
//     cin >> n;
//     int temp = n;
//     int sum = 0;
//     int product = 1;
//     while (temp > 0) {
//         int digit = temp % 10;
//         sum += digit;
//         product *= digit;
//         temp /= 10;
//     }
//     if (sum > product) {
//         cout << "Sum of digits is greater than product of digits.";
//     } else {
//         cout << "Sum of digits is NOT greater than product of digits.";
//     }
//     return 0;
// }

// 10. Take a year and print the corresponding century (e.g., “19th century”, “20th century”)


// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter year";
//     cin>>year;
//     if(year>=1900&& year<=1999){
//         cout<<"IT's 19 Centurary";
//     }
//     else if(year<=2000&& year>=2999){
//         cout<<"2000 centurary";
//     }
//     else{
//         cout<<"invalid year";
//     }
// }
