#include <iostream>
#include <vector>
#include <memory>

// Abstract class
class Animal {
public:
    virtual void sound() const = 0; // Pure virtual function
    virtual ~Animal() = default; // Virtual destructor
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() const override {
        std::cout << "Woof!" << std::endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void sound() const override {
        std::cout << "Meow!" << std::endl;
    }
};

// Class House with composition
class House {
private:
    Dog dog; // Composition: How House has a Dog

public:
    void dogSound() const {
        dog.sound(); // Calls Dog's sound method
    }
};

// Class PetOwner with aggregation
class PetOwner {
private:
    std::vector<std::unique_ptr<Animal>> cats; // Aggregation using smart pointers for dynamic memory management

public:
    // Method to add a Cat
    void addCat(std::unique_ptr<Animal> cat) {
        cats.push_back(std::move(cat));
    }

    // Method for each Cat to make a sound
    void makeCatSounds() const {
        for (const auto& cat : cats) {
            cat->sound(); // Calls Cat's sound method via base class pointer
        }
    }
};

int main() {
    // Demonstrating composition: House has a Dog
    House house;
    std::cout << "Dog in the house says: ";
    house.dogSound(); // Outputs: Woof!

    // Demonstrating aggregation: PetOwner has multiple Cats
    PetOwner owner;
    owner.addCat(std::make_unique<Cat>()); // Adding Cat instances
    owner.addCat(std::make_unique<Cat>());

    std::cout << "Cats owned by the PetOwner say: ";
    owner.makeCatSounds(); // Outputs: Meow! Meow!

    return 0;
}