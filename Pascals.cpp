#include <iostream>
using namespace std;
#define MAX 20
int main()
{
    int i,j,n;
    long int arr[MAX][MAX];
    cout << "Enter your number (MAX "<<MAX<<"): ";
    cin >>n;
    for (i = 0; i < n; i++){
    for (j = 0; j <= i; j++){

        if (j == 0 || i == j)
            arr[i][j] = 1;
        else
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        cout << arr[i][j] << " ";}
        cout <<endl;
    }
    return 0;
}
