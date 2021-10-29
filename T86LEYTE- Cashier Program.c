#include <stdio.h>
int main(){
  int Drink, price, payment, change; 
  char choice;
 
  printf("Select your order");
  puts("[1] - Pepsi(p100) ");
  puts("[2] - Dr.Pepper(p120)");
  puts("[3] - Coca-Cola(p95)");
  printf("Choice: ");
  scanf("%c",&choice);
  printf("Input payment: ");
  switch(choice){
 
    case '1':
      printf("Pepsi");
      payment = 100;
      if(payment>=100)
      printf("you have purchased pepsi");
      scanf("%d",payment); 
      change = payment - price; 
      printf("Change: %d",Change);
      else if (payment<=100)
      printf("You dont have enough funds");
      
      
    case '2':
      printf("Dr.Pepper");
      payment = 120;
      if(payment>=120)
      printf("you have purchased Dr. Pepper"); 
      scanf("%d",&payment);
      change = payment - price;
      printf("change: %d", change);
      else if (payment<=120)
      printf("you don't have enough funds");
      
      
    case '3':
      printf("Coca-Cola");
      payment = 95;
      if(payment>=95)
      printf("you have purchased Coca-Cola");
      scanf("%d",&payment);
      change = payment - price;
      else if (payment<=95)
      printf("you don't have enough funds");
    
  }
      return (0);