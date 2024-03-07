#include <iostream>
#include <string>
using namespace std;

void print_binary_str (std :: string decimal_number)
{
    int num = stoi(decimal_number);
    int *binary = new int[32];
    int i = 0;

    while (num != 0)
    {
        binary[i] = num % 2;
        num = num/2;
        i++;
    }

    for (int i = i-1; i >= 0; i--)
    {
        cout << binary[i];
    }
    cout << endl;
    delete [] binary;


}

int main(){
    print_binary_str("20");
}