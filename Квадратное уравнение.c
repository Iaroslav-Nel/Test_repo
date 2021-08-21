#include <iostream>
#include <cmath>

using namespace std;

int main() {

int a,b,c;
cin >> a >> b >> c;
int d = sqrt(b*b-4*a*b);
int x = (-b+d)/2*a;
int y = (-b-d)/2*a;
cout << x <<" "<< y << endl;
}
