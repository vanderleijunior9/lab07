//
//  main.cpp
//  lab07 functions
//
//  Created by Vanderlei Junior on 10/17/24.
//


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void getMajorMinor (int);

int main() {
    ifstream inputFile;
        
    inputFile.open ("/Users/vanderleijunior/Desktop/school/csci-01 (2024)/lab07/getminor.txt");
    
    string number;
    string major;
    int num;
    while (inputFile >> number >> major) {
        num = stoi(number);
        cout << num << " " << endl;
        
    }
    

}

