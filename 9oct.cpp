// references
int main() {
    int x = 7;
    int &y = x; // y is a reference to x
    x++;        // both will increment the value of x
    y++;        // same as x++
}
class Rectangle {
    int length, breadth;
public:
   Rectangle(){}// default constructor
   Rectangle(int L,int B){ // parameterized constructor
       length = L;
       breadth = B;
    }
    Rectangle(const Rectangle &R){ // copy constructor
        length = R.length;
        breadth = R.breadth;
    }
};
int main() {
    Rectangle r1; // default constructor
    Rectangle r2(7,3);   // parameterized constructor
    Rectangle r3(r1) ;  // copy constructor
}
