#include <iostream>
#include <cstring>
using namespace std;
int main() {
char n[10];
char x[20];
strcat(n,"0123456");
strcat(x,"01234");
cout << strcmp(x,n);
}
