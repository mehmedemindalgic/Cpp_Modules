#pragma once
#include <stdint.h>

struct Data {
    int x;
};

class Serializer
{   
    private:
        Serializer();
        Serializer(const Serializer& oth);
        Serializer& operator=(const Serializer& oth);
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};