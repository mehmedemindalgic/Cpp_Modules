
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    int Acount = 7;
    Animal* animals[Acount];

    for (int i = 0; i < (Acount/2); i++)
    {
        animals[i] = new Dog();
    }
     for (int i = (Acount/2); i < Acount; i++)
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i <Acount; i++)
    {
        animals[i]->makeSound();
    }
    for (int i = 0; i <Acount; i++)
    {
        std::cout<<"type:"<<animals[i]->getType()<<std::endl;
    }
    int count = 0;
    while (count < Acount)
    {
        delete animals[count];
        count++;
    }

    delete j;
    delete i;

    return 0;
}
