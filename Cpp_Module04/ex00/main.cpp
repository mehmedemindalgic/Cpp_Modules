#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const WrongAnimal* w = new WrongCat();
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << w->getType() << " " << std::endl;

w->makeSound();
i->makeSound(); 
j->makeSound();
meta->makeSound();

delete w;
delete i;
delete j;
delete meta;

return 0;
}