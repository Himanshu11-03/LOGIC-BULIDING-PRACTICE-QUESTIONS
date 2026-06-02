// QUESTIONS ON CONDITIONAL STATEMENTS IN C++:




// 1. Take a number and print whether it’s positive, negative, or zero.
// 2. Check if a number is even or odd.
// 3. Check if a number is divisible by 5.
// 4. Check if a number is divisible by both 3 and 5.
// 5. Check if a given year is a leap year.
// 6. Take two numbers and print the larger one.
// 7. Take three numbers and print the largest.
// 8. Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions.
// 9. Take a character and check if it’s a vowel or consonant.
// 10. Take a character and check whether it’s uppercase, lowercase, a digit, or a special character





//SOLUTIONS:-
// 1. Take a number and print whether it’s positive, negative, or zero.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a ";
//     if(a>0){
//         cout<<"a is positive";
//     }
//     else if(a==0){
//         cout<<"a is Zero";
//     }
//     else{
//         cout<<" a is negative";
//     }
//     return 0;
// }
//2:-Check if a number is even or odd.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter value of a: ";
//     cin>>a;
//     if(a%2==0){
//         cout<<"A is even";
//     }
//     else{
//     cout<<" a is odd";
// }
// }
//3/4:-Check if a number is divisible by 5and 3.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a value of A";
//     cin>>a;
//     if(a%5==0 && a%3==0){
//         cout<<"A is divisible by  3 and 5";
//     }
//     else{
//         cout<<" Ais not divisible by 3 and 5"; 
//     }
// } 
//5:-Check if a given year is a leap year.
// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"ENter a year:";
//     cin>>year;
//     if(year%4==0&& year%100!=0 || year% 400==0){
//         cout<<"LeAP yEAR";
//     }
//     else
//     {
//         cout<<"Not a leap year";
        
//     } 
//     }

//6:-Take two numbers and print the larger one
// #include<iostream>
// using namespace std;
// int main(){
//     int a ,b;
//     cout<<"ENTER A AND B:";
//     cin>>a>>b;
//     if(a>b){
//     cout<<"A is greater than b";
//     }
//     else if(a==b){
//      cout<<"BOTH ARE EQUAL";
//     }
//     else{
//      cout<<"b is grsater than a";
//     }
//     }

//7:-Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions.:-
// #include<iostream>
// using namespace std;
// int main(){
//     int Temprature;
//     cout<<"Enter Temprature:";
//     cin>>Temprature;
//     if(Temprature>30){
//         cout<<"HOT";
//     }
//      else if (Temprature>20 && Temprature<=30){
//         cout<<"WARM";
//      }
//         else if(Temprature>10 && Temprature<=20){
//             cout<<"COOL";
//         }
//         else{
//             cout<<"COLD";
//         }
//      }  

//8:-Take a character and check if it’s a vowel or consonant.
//  #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter a charcter";
//     cin>>ch;
//     char a='a',e='e' ,i='i',o='o',u='u', A ='A',E='E',I='I',O='O',U='U';
//      if(ch==a||ch==e||ch==i||ch==o||ch==u||ch==A ||ch==E || ch==I || ch==O || ch==U){
    
//                                           cout<<"VOWEL";
//     }
//     else{
//          cout<<"CONSONENT";
//     }
// }  

//9:-Take a character and check whether it’s uppercase, lowercase, a digit, or a special character

// # include<iostream>
// #include<cctype>
// using namespace std; 
// int main(){
//     char ch;
//     cout<<"Enter a charcter";
//     cin>>ch;
//     if(isupper(ch)){
//         cout<<"Uppercase";
//     }
//     else if(islower(ch)){
//         cout<<"Lowercase";
//     }
//     else if(isdigit(ch)){
//         cout<<"Digit";
//     }
//     else{
//         cout<<"Special charcter";
//     }
//     }
