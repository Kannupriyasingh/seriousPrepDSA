#include <iostream>
using namespace std;
// f(5) => 5*4*3*2*1
// f(5) => 5*f(4)
int fac(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return (n * fac(n-1));  
}

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;
    int res = fac(num);
    cout << "factorial of " << num << " is " << res;
    return 0;
}
