#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    srand(time(NULL));
    int random = rand() % 3;
    if (random == 0){
       std::cout << "[A] Created " << std::endl;
        return new A(); 
    }
    if (random == 1){
        std::cout << "[B] Created " << std::endl;
        return new B();
    }
    if (random == 2){
        std::cout << "[C] Created " << std::endl;
        return new C();
    }
    return 0;
}
void	identify(Base *p){
    if (dynamic_cast<A*>(p)){
        std::cout << "This is *A" << std::endl;
        std::cout << "This is NOT *B and *A" << std::endl;
    }
    else if (dynamic_cast<B*>(p)){
        std::cout << "This is *B" << std::endl;
        std::cout << "This is NOT *A and *C" << std::endl;
    }
    else if (dynamic_cast<C*>(p)){
        std::cout << "This is *C" << std::endl;
        std::cout << "This is NOT *B and *A" << std::endl;
    }
    else{
        std::cout << "This is NOT *A, *B, *C" << std::endl;
    }

}
void identify(Base& p){
    try{
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "This is &A" << std::endl;
        std::cout << "This is NOT &B and &C" << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
    try{
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "This is &B" << std::endl;
        std::cout << "This is NOT &A and &C" << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
    try{
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "This is &C" << std::endl;
        std::cout << "This is NOT &B and &A" << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what()<< std::endl;
    }

}
int main(){
    Base *base = generate();
    identify(base);
    identify(*base);
    delete(base);
    return 0;
}