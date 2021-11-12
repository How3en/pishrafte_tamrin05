#include <iostream>
using namespace std;

int main() 
{
   int counter,tmp = 0;
   char s1[100],*p1;
   cout <<"Enter your sentence: ";
   gets(s1);

   for (p1 = s1; *p1; p1++){
 
     if (*p1 == ' ' || *p1 == '\n' || *p1 == '\t'){
         tmp = 0;}

         else if(tmp == 0){
         tmp = 1;
         counter++;}}

    cout<<"\nNumber of words = "<<counter;


  return 0;
}
