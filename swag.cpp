//
// Created by EasyThree on 2022/7/20.
//

#include "iostream"

using namespace std;

void swag(int* a, int* b);
void swag(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int a = 1, b = 2;
    swag(&a,&b);
    cout << a << " and " << b;
}