// Star Pattern//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(j == 1 || j == 5 || i == 1 || i == 5){
                cout << "*";
            } 
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}