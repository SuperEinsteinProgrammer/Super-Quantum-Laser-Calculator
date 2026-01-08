//You got some serious math problems? No problem pal, I'll solve 'em for ya.

#include <iostream>

using namespace std;

int main() {
    cout << "Super Mega Epic Science Calc\n Add two numbers\n";
    
    double a, b, c;
    
    //Ok guys, get ready to put in your first number. 
    cout << "First Number:";
    cin >> a;
    
    //Alright fellas, this is where it gets serious. Here you put in ANOTHER number.
    cout << "Second Number:";
    cin >> b;
    
    c = a + b;
    
    if (a == 6 and b == 7){ 
    cout << "6+7 is 67 boiii tuff";
    }
    if (c > 13){
        cout << "i cant count big numbers bro";
    }
    if (c < 13){
        cout << a << " + " << b << " is " << c << " thats easy bro";
    }
}

