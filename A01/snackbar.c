#include<stdio.h>
#include<stdlib.h>
  struct SnackBar{
    char name[50];
    float price;
  };
  void buySnack(struct SnackBar snack, float money){
    if(money >= snack.price){
        printf("You bought %s for $%.2f\n", snack.name, snack.price);
    } else {
        printf("You don't have enough money to buy %s\n", snack.name);
    }
  }
int main() {
float money=0;
int choice=0;
struct  SnackBar chips = {"Chips", 1.50};
  struct SnackBar soda = {"Soda", 1.00};
  printf("Snack: %s, Price: $%.2f\n", chips.name, chips.price);
  printf("Snack: %s, Price: $%.2f\n", soda.name, soda.price);
  printf("what do u wanna chosen? [1/2] ");
  scanf("%d", &choice);
  printf("howmuch do u have? ");
  scanf("%f", &money);
  switch(choice){
      case 1:
        buySnack(chips, money);
        break;
      case 2:
        buySnack(soda, money);
        break;
  }
  
  return 0;
}
