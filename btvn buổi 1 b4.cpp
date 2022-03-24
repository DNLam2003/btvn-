#include <iostream>
using namespace std;
 
int main()
{
    int soDong;
    cout << "Nhap so dong: ";
    cin >> soDong;
    for(int i = 1; i <= soDong; i++) {

        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
