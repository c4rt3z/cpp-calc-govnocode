#include <iostream>
using namespace std;

int main(){
    int i;
    int j;
    int s;
    int n;
    cout << "first number: ";
    cin >> i;
    cout << "second number: ";
    cin >> j;
    printf("select action\n1. +\n2. -\n3. *\n4. / : ");
    cin >> s;
    switch (s){
        case 1:
           n = i + j;
           printf("%d + %d = %d", i, j, n);
           break;
        case 2:
           n = i - j;
           printf("%d - %d = %d", i, j, n);
           break;
        case 3:
           n = i * j;
           printf("%d * %d = %d", i, j, n);
           break;
        case 4:
           n = i / j;
           printf("%d / %d = %d", i, j, n);
           break;
        default:
           printf("wrong number.");
           break;
    }
}