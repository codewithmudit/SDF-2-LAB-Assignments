#include <iostream>
using namespace std;
class book
{
public:
    int bookid;
    string title;
    int price;
    book(int id, string t, int p)
    {
        bookid = id;
        title = t;
        price = p;
    }
    book() {}
    void display()
    {
        cout << bookid << " " << title << " " << price << endl;
    }
};
int main()
{
    int n;
    int id, p;
    string t;
    cout << "Enter the number of book : ";
    cin >> n;
    book *b = new book[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Book ID, Title and Price of the book " << i + 1 << " : ";
        cin >> id >> t >> p;
        b[i] = book(id, t, p);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (b[j].price > b[j + 1].price)
            {
                book temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    cout << "Book details in ascending order based on price are as  give : " << endl;
    for (int i = 0; i < n; i++)
    {
        b[i].display();
    }
}
