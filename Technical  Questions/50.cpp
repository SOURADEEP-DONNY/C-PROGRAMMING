#include <iostream>
using namespace std;
struct wow {
int x;
};
int main() {
wow a;
a.x = 22;
int c = a.x;
int *b = new int;
cout << c;
return 0;
}
