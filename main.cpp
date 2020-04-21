//
//  main.cpp
//  RomanToInt
//
//  Created by Vruthik Thakkar on 4/21/20.
//  Copyright © 2020 Vruthik Thakkar. All rights reserved.
//

#include <iostream>
#include <unordered_map>

using namespace std;

class RomanToInt{
public:
    void readRoman(){
        cout << "What Roman numeral would you like to convert?\n";
        cin >> Roman;
    }
    
    void hashConstruct(){
        values.reserve(7);
        pair<string, int> p;
        p = make_pair("M", 1000);
        values.insert(p);
        p = make_pair("D", 500);
        values.insert(p);
        p = make_pair("C", 100);
        values.insert(p);
        p = make_pair(<#_T1 &&__t1#>, <#_T2 &&__t2#>)
    }
    
private:
    
    string Roman;
    int integer;
    unordered_map<string, int> values;
    
};


int main() {
    
}
