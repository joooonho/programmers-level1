#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    for(int i = 0; i < phone_number.size() - 4; i++)
        phone_number[i] = '*';
    cout << phone_number << endl;
    
    return phone_number;
}
