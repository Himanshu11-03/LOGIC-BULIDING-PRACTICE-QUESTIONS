/*Conditions
1. Take three sides and check if they form a valid triangle.
2. If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene.
3. Take marks (0–100) and print the corresponding grade (A/B/C/D/F).
4. Check if one of two given numbers is a multiple of the other.
5. Take the hour of the day (0–23) and print “Good Morning”, “Good Afternoon”, “Good Evening”, or “Good Night”.
6. Check voting eligibility for a given age (18+).
7. Take two numbers and determine whether both are even, both are odd, or one is even and one is odd.
8. Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’.
9. Take a day number (1–7) and print the corresponding day name.
10. Take a month number (1–12) and print the number of days in that month (ignore leap years).*/




//1. Take three sides and check if they form a valid triangle.
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"ENTER THREE SIDES OF TRIANGLE:";
//     cin>>a>>b>>c;

// if(a+b>c && b+c>a && c+a>b){
//     cout<<"VALID TRIANGLE";
// }
// else{
//     cout<<"NOT A VALID TRIANGLE";
// }
// }

//2. If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene.

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter value of a";
//     cin>>a;
//     cout<<"Enter value of b";
//     cin>>b;
//     cout<<"Enter value of c";
//     cin>>c;
//     if (a==b && b==c){
//         cout<<"Isosceles Triangle";
    
//     }
//         else if(a==b&& b==c && c==a){
//         cout<<"EQULATERAL TRIANGLE";
//         }
//         else{
//             cout<<"SCALNE TRIANGLE";
//         }
//     }    
// 3. Take marks (0–100) and print the corresponding grade (A/B/C/D/F).
//    #include<iostream>
//    using namespace std;
//    int main(){
//     int marks;
//     cout<<"Enter marks:";
//     cin>>marks;
//     if (marks>=90 && marks<=100){
//         cout<<"GRADE A";
//     }
//     else if (marks>=80 && marks<=90){
//         cout<<"GRADE B";
//     }
//     else if (marks>=70 && marks<=80){
//         cout<<"GRADE C";
//     }
//     else if (marks>=60 && marks<=70){
//         cout<<"GRADE D";
//     }
//     else if (marks>=50 && marks<=60){
//         cout<<"GRADE E";
//     }
//     else{cout<<"GRADE F";}
//    } 
// 4. Check if one of two given numbers is a multiple of the other
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"ENTER A AND B:";
//     cin>>a>>b;
//     if(a%b==0 || b%a ==0){
//         cout<<"MULTIPLE TO EACH OTHER";
//     }
//     else{
//         cout<<"NOT MULTIPLE TO EACH OTHER";
//     }
// }

// 5. Take the hour of the day (0–23) and print “Good Morning”, “Good Afternoon”, “Good Evening”, or “Good Night”.
// # include<iostream>
// using namespace std;
// int main(){
//     int hour;
//     cout<<"Enter HOur in (0-24)";
//     cin>>hour;
//         if (hour==0&& hour<=12){
//             cout<<"Good morning";
//         }
//         else if (hour<=13&& hour<=17){
//             cout<<"GOOD AFTERNOON";
//         }
//         else if(hour<=18 && hour<=20){
//         cout<<"GOOD EVENNING";
//         }
//         else {
//             cout<<"GOOD NIGHT";
//         }
//         }
        
// 6. Check voting eligibility for a given age (18+).
    
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"ENter your age";
//     cin>>age;
//     if(age>=18){
//         cout<<"ELIGLIBLE TO VOTE";

//     }
//     else {
//         cout<<"NOT ELIGBLE TO VOTE";
//     }
    
// }


// 7. Take two numbers and determine whether both are even, both are odd, or one is even and one is odd.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"ENter a and b";
//     cin>>a>>b;
//     if(a%2==0 && b%2==0){
//         cout<<"BOTH ARE EVEN";
//     }
//     else if(a%2!=0 && b%2!=0){
//         cout<<"BOTH ARE ODD";
//     }
//     else {
//         cout<<"ONE IS EVEN AND ONE IS ODD";
//     }
//     }


// 8. Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’.
// #include<iostream>
// using namespace std; 
// int main(){
//     char ch;
//     cout<<"Enter a charcter";
//      cin >>ch;
//      if(char(ch)>='a' && char(ch)<='m'){
//          cout<<"CHARCTER LIES BETWEEN A AND M";
//      }
//      else if(char(ch)>='n' && char(ch)<='z')
//      {
//         cout<<"CHARTER LIES BETWEEN N AND Z";
//      }
//      else{
//         cout<<" NOT A APLHABET";
//      }
// }

// 9. Take a day number (1–7) and print the corresponding day name.
// #include <iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"ENTER A DAY NUMBER(1-7)";
//     cin>>day;
//     switch(day){
//         case 1:
//         cout<<"SUNDAY";
//         break;
//         case 2:
//         cout<<"MONDAY";
//         break;
//         case 3:
//         cout<<"TUESDAY";
//         break;
//         case 4:
//         cout<<"WEDNESDAY";
//         break;
//         case 5:
//         cout<<"THURSDAY";
//         break;
//         case 6:
//         cout<<"FRIDAY";
//         break;
//         case 7:
//         cout<<"SATURDAY";
//         break;
//         default:
//         cout<<"INVALID DAY CHOICE";
//     }
// }
// 10. Take a month number (1–12) and print the number of days in that month (ignore leap years).
// #include<iostream>
// using namespace std;
// int main(){
//     int month;
//     cout<<"Enter month number(1-12):";
//     cin>>month;
//     switch(month){
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//         cout<<"31 DAYS";
//         break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//         cout<<"30 DAYS";
//         break;
//         case 2:
//         cout<<"28 DAYS";
//         break;
//         default:
//         cout<<"INVALID MONTH NUMBER";
//     }

// }