//Currency.cpp
//A C++ program called currency.cpp that prompts the user for the amount of each foreign currency.

#include <iostream>

int main() 
{
  double p,q,c;
  //three variables: p for peso, q for quetzals, and c for colóns
  double dollars;
  
  std::cout<<"Enter number of Mexican Pesos:";
  std::cin>>p;
  
  std::cout<<"Enter number of Guatemalan Quetzals:";
  std::cin>>q;
  
  std::cout<<"Enter number of Salvadoran Colóns:";
  std::cin>>c;
  
  dollars = (p/20.50) + (q/7.71) + (c/8.7518);
  
  std::cout<<"US Dollars = " << dollars <<"\n";
  
}
