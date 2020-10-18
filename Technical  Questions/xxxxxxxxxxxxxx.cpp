#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main() {
char n[10];
ofstream outf ("xxx.txt");
outf<<"Welcome to the great outdoors!";
outf.close();
ifstream bf("xxx.txt");
bf>> n;
bf.close();
cout << n;
}
