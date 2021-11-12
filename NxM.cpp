#include <iostream>
using namespace std;

int main()
{

 int i,j,n,m;

 cout << "Enter your first number: ";
 cin >> n;
 cout << "Enter your second number: ";
 cin >> m;

 for(i = 1; i <= n; i++){

    for(j = 1 ; j <= m; j++){

    cout <<i*j <<'\t';}

    cout <<endl;}

    return 0;
}
