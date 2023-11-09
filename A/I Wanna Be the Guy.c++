#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
   /*
   4
 3 1 2 3
 2 2 4
   */

    int n,p,q;
    cin>>n>>p;

    vector<bool> numbers(n,false);

    for(int i=0;i<p;i++){
        int x;
        cin>> x;
        numbers[x-1]=true;
    }

    cin>>q;
    for(int i=0;i<q;i++){
        int y;
        cin>> y;
        numbers[y-1]=true;
    }

    for(int i=0;i<n;i++){
        if(!numbers[i]){
            cout<< "Oh, my keyboard!";
            return 0;
        }
    }
    cout<< "I become the guy.";
    return 0;

}

