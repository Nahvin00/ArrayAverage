#include <iostream>
using namespace std;
void printElement(int quant);
void average(int quantityRow[],int row);
void updateQuantity(int newquantity[][3]);
int main()
{
    int quantity[5][3]={{30,25,18},{16,21,51},{19,42,25},{35,26,38},{16,33,22}};
    cout<<"\n\n The original elements in quantity :\n ";
    for(int i=0;i<5;i++)
        for(int j=0;j<3;j++)
            printElement(quantity[i][j]);
    for(int i=0;i<5;i++)
        average(quantity[i],i);
    updateQuantity(quantity);
    return 0;
}

void printElement(int quant)
{
    cout<<" "<<quant;
}

void average(int quantityRow[],int row)
{
    int total=0,ave;
    for(int i=0;i<3;i++)
        total+=quantityRow[i];
    ave=total/3;
    
    cout<<"\n The average value of the elements in row "<<row+1<<" : "<<ave;
}

void updateQuantity(int newquantity[][3])
{
    for(int i=0;i<5;i++)
        for(int j=0;j<3;j++)
            newquantity[i][j]=newquantity[i][j]+20;
}
