#include <iostream>
using namespace std;
class laptop
{
public:
    string brand;
    int ram;
    int price;
    void modify(string b, int r, int p)
    {
        brand = b;
        ram = r;
        price = p;
    }
    void display()
    {
        cout << brand << " " << ram << " Gb " << price << endl;
    }
};
int main()
{
    laptop *l1 = new laptop;
    *(l1.brand) = "lenevo";
    l1->ram = 16;
    l1->price = 154000;
    l1->modify("asus", 16, 140000);
    l1->display();
    return 0;
}
