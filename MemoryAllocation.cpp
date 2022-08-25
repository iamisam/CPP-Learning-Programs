#include <iostream>
using namespace std;

class Shop
{
    private:
    int itemID[100];
    int counter;
    int itemPrice[100];

    public:
        void initCounter(void)
        {
            counter=0;
        }
        void displayPrice(void);
        void setPrice(void);
};

void Shop :: setPrice(void)
{
    cout<<"Enter the ID of your item "<<(counter+1)<<endl;
    cin>>itemID[counter];
    cout<<"Enter the Price of your item "<<(counter+1)<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"The Price of item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}