#include <iostream>
#include <string>
#include <fstream>

using namespace std;
 
int main()
{
    ofstream F("my_file.txt"); 
    string s = "Stroka texta", s2;
    F << s;
    F.close();
    ifstream F2("my_file.txt");
    getline(F2, s2);
    cout << s2;
    cin.get();
    return 0;
}