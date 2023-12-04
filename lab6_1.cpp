#include<iostream>
using namespace std;

int main(){

    int x = 1, Even = 0, Odd = 0;

    while (x != 0)
    {
        cout << "Enter an integer: ";
        cin >> x;

        if (x % 2 != 0)
        {
            Odd += 1;
        }else{
            if (x != 0)
            {
                Even += 1;
            }
            
        }
        
    }
    
    cout << "#Even numbers = " << Even;
    cout << "\n#Odd numbers = " << Odd;
    return 0;
}
