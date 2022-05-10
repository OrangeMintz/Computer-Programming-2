//Djeikuje Nickolai C. Gacus
//Major Activity 1.0 - Functions

#include <stdio.h>

int main() {
  int id, consu;
  float charge, suprchg = 0, unit, total;

  printf("Input Customer ID: ");
  scanf("%d", & id);
  printf("Unit consumed by the customer: ");
  scanf("%d", & consu);

  if (consu < 200)
    charge = 1.50;
  else if (consu >= 250 && consu < 400)
    charge = 1.60;
  else if (consu >= 450 && consu < 600)
    charge = 1.85;
  else
    charge = 2.00;
  unit = consu * charge;
  if (unit > 400)
    suprchg = unit * 10 / 100.0;
  total = unit + suprchg;
  if (total < 100)
    total = 100;

  printf("\n[Electricity Bill]\n");
  printf("Customer ID#                      : %d\n", id);
  printf("Unit Consumed                     : %d\n", consu);
  printf("Amount Charges @P% .2f per unit   : P %.2f\n", charge, unit);
  printf("Surchage Amount                   : P %.2f\n", suprchg);
  printf("Total Customer Bill               : P %.2f\n", total);

  return 0;
}
