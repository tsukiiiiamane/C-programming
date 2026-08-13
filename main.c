#include <stdio.h>
#include <stdlib.h>

struct Book
{
  char title [100];
  float price;
  int stock_quantity;
};
int sellBook(struct Book *b, int quantityRequested)
{
  if(quantityRequested <= b->stock_quantity)
    {
      b->stock_quantity -= quantityRequested;
      return 1;
    }
  else
    {
      return 0;
    }
}
void restockBook(struct Book *b, int quantityAdded)
{
  b->stock_quantity += quantityAdded;
}

int main()
{
    struct Book B = {"The C Programming Language",400.23,2};
    if(sellBook(&B, 3)==1)
      {
        printf("Successful Purchase!\n");
      }
    else
      {
        printf("Stock Unavailable\n");
      }
    restockBook(&B, 5);
    sellBook(&B, 3);
    if(sellBook(&B, 3)==1)
      {
        printf("Successful Purchase!\n");
      }
    else
      {
        printf("Stock Unavailable\n");
      }
    return 0;
}
