#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int count = 0;
    for(int i = c; i >= 0; i--){
        if(a+i > b+c-i)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}