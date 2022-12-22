#include <bits/stdc++.h>
using namespace std;

int main() {
  int szInByte = 1000000;
  int fileCount = 50;
  string fileSz = "1mb_";

  string content = "";
  for (int i = 0; i < szInByte; i++) {
    int x = rand() % 10;
    x += 48;
    char c = x;
    content += c;
  }

  map<int, int> used;

  for (int idx = 1; idx <= fileCount; idx++) {
    int randIdx = -1;

    while(true) {
      randIdx = rand() % szInByte;
      if(used[randIdx] != -1) {
        used[randIdx] = -1;
        break;
      }
    }

    while(true) {
      int x = rand() % 10;
      x += 48;
      char c = x;

      if(content[randIdx] != c) {
        content[randIdx] = c;
        break;
      }
    }

    // cout << content << endl;


    string fileName = fileSz + to_string(idx) + ".txt";
    // cout << fileName << endl;

    // Create and open a text file
    ofstream MyFile(fileName);

    // Write to the file
    MyFile << content;

    // Close the file
    MyFile.close();
  }




    //
  

  
  //

  
}