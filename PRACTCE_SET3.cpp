// 1. Take a 3-digit number and check if all digits are distinct.
// 2. Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.
// 3. Take a 4-digit number and check if the first and last digits are equal.
// 4. Check whether a given integer is single-digit, double-digit, or multi-digit.
// 5. Check if a number is a multiple of 7 or ends with 7.
// 6. Take coordinates (x, y) and determine which quadrant the point lies in.
// 7. Check if an amount can be evenly divided into 2000, 500, and 100 currency notes.5
// 8. Check if a number lies within the range [100, 999].
// 9. Take two angles of a triangle and compute the third angle.
// 10. Check whether a number is a perfect square (without using the square root function).





// // 1. Take a 3-digit number and check if all digits are distinct.
// #include<iostream>
// using namespace std;
// int main(){
//     int abc;
//     cout<<"ENter a three digit number:";
//     cin>>abc;
//     int a=abc/100;
//     int b=(abc/10)%10;
//     int c=abc%10;
//     if(a!=b&& b!=c && a!=c){
//         cout<<"All digits are distinct";        
//     }
//     else{
//         cout<<"Digits are not distinct";
//     }
// }
// 2. Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.
// #include<iostream>
// using namespace std;
// int main(){
//     int abc;
//     cout<<"ENter a three digit number:";
//     cin>>abc;
//     int a =abc/100;
//     int b=(abc/10)%100;
//     int c = abc%10;
//     if(b>a && b>c){
//         cout<<"MIDDLE DIGIT IS LARGEST";
//     }
//     else if(b<a&& b<c){
//         cout<<"MIDDLE DIGIT IS SMALLEST";
//     }
//     else
//      {
//         cout<<"MIDDLE DIGIT IS NEITHER SMAALLEST OR LARGEST";
//     }

// }
// 3. Take a 4-digit number and check if the first and last digits are equal.
// #include<iostream>
// using namespace std;
// int main(){
//     int abcd;
//     cout<<"ENter a four digit number:";
//     cin>>abcd;
//     int a=abcd/1000;
//     int d=abcd%10;
//     if(a==d){
//         cout<<"first and last digits are equal";
//     }
//     else{
//         cout<<"FOrst and last digits are not equal";
//     }

// }
// 4. Check whether a given integer is single-digit, double-digit, or multi-digit.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"ENter a number:";
//     cin>>a;
//     if(a>=0 && a<=9){
//         cout<<"Single digit";
//     }
//     else if(a>=10 && a<=99){
//         cout<<"Double digit";
//     }
//     else{
//         cout<<"Multi digit";
//     }
// }
// 5. Check if a number is a multiple of 7 or ends with 7.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a number";
//     cin>>a;
//     if(a%7==0 || a%10==7){
//         cout<<"A is a multiple of 7 or ends with 7";
//     }
//     else{
//         cout<<"A is not multiple of 7 and does not end with 7";

//     }
// }
// 6. Take coordinates (x, y) and determine which quadrant the point lies in.
// # include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter coordinates (x):";
//     cin>>x;
//     cout<<"Enter coordinates (y):";
//     cin>>y;
//     if(x>0 && y>0){
//         cout<<"Point lies in first quadrant";
//     }
//     else if(x<0 && y>0){
//         cout<<"Point lies in second quadrant";
//     }
//     else if(x<0 && y<0){
//         cout<<"Point lies in third quadrant";
//     }
//     else if(x>0 && y<0){
//         cout<<"Point lies in fourth quadrant";
//     }
//     else if(x==0 && y!=0){
//         cout<<"Point lies on Y axis";
//     }
//     else if(y==0 && x!=0){
//         cout<<"Point lies on X axis";
//     }
//     else{
//         cout<<"Point is at the origin";
//     }
// }
// 7. Check if an amount can be evenly divided into 2000, 500, and 100 currency notes.
// #include<iostream>
// using namespace std;
// int main(){
//     int amount;
//     cout<<"Enter an amount:";
//     cin>>amount;
//     if(amount%2000==0 && amount%500==0 && amount%100==0){
//         cout<<"Amount can be evenly divide";
//     }
//     else{
//         cout<<"Amount can't be divide evenly";
//     }
// }
// 8. Check if a number lies within the range [100, 999].
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a number:";
//     cin>>a;
//     // if (a>=0&& a>=99){
//     //     cout<<"PLEASE ENTER ANUMBER BETWEEN 100 AND 999";
//     // }
//     if(a>=100 && a<=999){
//         cout<<"NUMBER LIES BETWEEN 100 and 999";

//     }
//     else{
//         cout<<"NUMBER DON'T LIES BETWEEN 100 AND 999 ";
//         }
// }
// 9. Take two angles of a triangle and compute the third angle.
// #include<iostream>
// using namespace std;
// int main(){
//     int angle1, angle2;
//     cout<<"Enter first angle of triangle:";
//     cin>>angle1;
//     cout<<"Enter value of angle 2 of triangle:";
//     cin>>angle2;
//     if(angle1>0 && angle2>0 && (angle1+angle2)<180){
//         int angle3=180-(angle1+angle2);
//         cout<<"The third angle of triangle is:"<<angle3;
//     }
//     else{
//         cout<<"INVALID INPUT";
//     }
//     }
// 10. Check whether a number is a perfect square (without using the square root function).
// # include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a number:";
//     cin>>a;
//     int i=1;
//     while(i*i<a){
//         i++;
//     }
//     if(i*i==a){
//         cout<<"Number is a perfect square";
//     }
//     else{
//         cout<<"Number is not a perfecet square";
//     }
// }