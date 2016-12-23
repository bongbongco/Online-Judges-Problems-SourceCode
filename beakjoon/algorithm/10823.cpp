//
//  10823.cpp
//  algorithm
//
//  Created by Seungyong Lee on 2016. 12. 20..
//  Copyright © 2016년 Seungyong Lee. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    string line;
    while(cin >> line) {
        s += line;
    }
    
    istringstream sin(s);
    string number = "";
    int sum = 0;
    
    while (getline(sin, number, ',')) {
        sum += stoi(number);
    }
    cout << sum << '\n';
    
    return 0;
}
