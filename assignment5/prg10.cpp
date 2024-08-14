#include <iostream>

template <typename T>
class Storage {
public:
    virtual void store(const T& value) = 0; // Pure virtual function
};

class IntStorage : public Storage<int> {
    int data;
public:
    void store(const int& value) override {
        data = value;
        std::cout << "Storing integer: " << data << std::endl;
    }
};

int main() {
    Storage<int>* storage = new IntStorage();
    storage->store(42);

    delete storage;

    return 0;
}
