#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;   

    char ch = s[0];  
    char num = s[1]; 

    int x = ch - 'a' + 1;  
    int y = num - '0';     

    cout << x << y << '\n'; 
    return 0;
}
