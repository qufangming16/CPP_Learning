//This project is to calculate the dog's age in human years

#include <iostream>

int main() 
{
  int dog_age = 6;
  //This version of the program is for dogs older than 2 years old.
  
  int human_years;
  int early_years = 21;
  //This version of the program is for dogs younger than 2 years old or equal.
  
  int later_years;
  later_years = (dog_age-2)*4;
  human_years = early_years+later_years;
  
  std::cout<< "My name is Simba! Ruff ruff, I am " << human_years << " years old in human years.";
    
}
