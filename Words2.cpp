#include <iostream>
using namespace std;

int main()
{
    char s1[100];
    int counter,tmp = 0;
    cout <<"Enter your sentence: ";
    gets(s1);

    for(int i = 0; s1[i]!= NULL ; ++i){

    if(s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t'){
         tmp = 0;}

         else if(tmp == 0){
         tmp = 1;
         counter++;}}

    cout<<"\nNumber of words = "<<counter;

    return 0;
}

