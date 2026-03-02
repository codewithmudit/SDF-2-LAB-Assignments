#include<iostream>
using namespace std ;
class rectangle {
    public :
    int length ;
    int breadth ;
    int area (){
        return length * breadth ;
    }
    int parameter(){
        return 2*(length + breadth);
    }
};
int main(){
    rectangle r1;
    cout << "Enter length of the rectangle : " ;
    cin >> r1.length ;
    cout << "Enter breadth of the rectangle : " ;
    cin >> r1.breadth ;
    cout << "Area of the rectangle is  : " << r1.area() << endl ;
    cout << "Parameter of the rectangle is : " << r1.parameter() << endl ;
}
