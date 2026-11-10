#include <iostream> 
using namespace std; 

#define MAX 10

class Arr 
{
    int a[MAX];
    int size, maximum, minimum; 

public:
    void get();
    void put();
    void insert();
    void rev_put();
    void maxi();
    void mini();
};

void Arr :: get()
{
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

void Arr :: put()
{
    cout << "\nArray elements are: ";
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl; 
}

void Arr :: insert()
{
    int p, d;
    cout << "\nInsert position & data: ";
    cin >> p >> d;
    
    for(int j = size - 1; j >= p - 1; j--)
    {
        a[j + 1] = a[j];
    }
    
    a[p - 1] = d;
    size = size + 1; 
    cout << endl;
}

void Arr :: rev_put()
{
    cout << "\nArray in reverse order: ";
    for(int j = size - 1; j >= 0; j--)
    {
        cout << a[j] << " ";
    }
    cout << endl;
}

void Arr :: maxi()
{
    maximum = a[0]; 
    for(int j = 1; j < size; j++)
    {
        if(a[j] > maximum)
        {
            maximum = a[j];
        }
    }
    cout << "\nMaximum = " << maximum << endl;
}

void Arr :: mini()
{
    minimum = a[0]; 
    for(int j = 1; j < size; j++)
    {
        if(a[j] < minimum)
        {
            minimum = a[j];
        }
    }
    cout << "\nMinimum = " << minimum << endl;
}

int main() 
{
    Arr a1;
    a1.get();
    a1.put();
    a1.insert();
    a1.put();
    a1.maxi();
    a1.mini();
    a1.rev_put();
    
    return 0;
}