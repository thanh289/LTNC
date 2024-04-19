#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;


int main() {
    string inputFile;
    cin>>inputFile;
    ifstream file(inputFile);


    map<string, int> userCounts;
    string line;
    

    while (file>>line) {
        int t = line.size();
        string userName = "";
        for(int i=0; i<t; i++)
        {
            if(line[i] == ',')
            {
                for(int j=i+1; ; j++)
                {
                    if(line[j]=='@') break;
                    userName += line[j];

                }
                break;
            }
        }
        userCounts[userName]++;
    }

    file.close();

    for (auto& pair : userCounts) {
        {
            if(pair.second>1)
                cout << pair.first << endl;
        }
    }
}
