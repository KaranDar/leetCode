#include <iostream>

using namespace std;

int reverse(int x){
    int reverse = 0, temp = 0;
    int sign = 1;
    if(x<0){
        sign = -1;
        x *= sign;
    }
    while(x>0){
        temp = x%10;
        reverse = reverse*10 + temp;
        x=x/10;
    }
    reverse *= sign;
    return reverse;
}

int main(){

    int num1 = 45;
    cout << "Number is: " << num1 << " and Reverse is: " << reverse(num1) << endl;

    num1 = 121;
    cout << "Number is: " << num1 << " and Reverse is: " << reverse(num1) << endl;

    num1 = -25;
    cout << "Number is: " << num1 << " and Reverse is: " << reverse(num1) << endl;

    num1 = -36383492;
    cout << "Number is: " << num1 << " and Reverse is: " << reverse(num1) << endl;

    return 0;
}