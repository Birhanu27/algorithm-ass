#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int MAX_FILES = 100; 
string files[MAX_FILES] = {
    "wondays.txt", "birhanus.xls","ahmeds.pptx", "tedys.txt",
    "aklilus.txt","temesgens.xls" };
int fileCount = 5;

void displayFiles() {
    cout << "Files:\n";
    for (int i = 0; i <= fileCount; ++i) {
        cout << files[i] << endl;
    }
}