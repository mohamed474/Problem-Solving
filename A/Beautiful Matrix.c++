#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;

    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <= 5; col++){
            cin >> num;
            if(num == 1){
                cout << abs(row - 3) + abs(col - 3);
                return 0;
            }
        }
    }


}

