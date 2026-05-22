#include <iostream>
#include <string>
using namespace std;

// ======================
// ABSTRACT CLASS
// ======================
class Engine {
public:
    // Pure Virtual Function -> Abstraction
    virtual void startEngine() = 0;

    // Virtual Destructor
    virtual ~Engine() {
        cout << "Engine Destructor Called\n";
    }
};

// ======================
// BASE CLASS
// ======================
class Vehicle : public Engine {

private:
    // Encapsulation (private data)
    int secretCode = 999;

protected:
    string brand;
    int speed;

public:

    // ======================
    // STATIC MEMBER
    // ======================
    static int vehicleCount;

    // ======================
    // DEFAULT CONSTRUCTOR
    // ======================
    Vehicle() {
        brand = "Unknown";
        speed = 0;
        vehicleCount++;
        cout << "Default Constructor Called\n";
    }

    // ======================
    // PARAMETERIZED CONSTRUCTOR
    // ======================
    Vehicle(string b, int s) {
        brand = b;
        speed = s;
        vehicleCount++;
        cout << "Parameterized Constructor Called\n";
    }

    // ======================
    // COPY CONSTRUCTOR
    // ======================
    Vehicle(const Vehicle& obj) {
        brand = obj.brand;
        speed = obj.speed;
        vehicleCount++;
        cout << "Copy Constructor Called\n";
    }

    // ======================
    // DESTRUCTOR
    // ======================
    ~Vehicle() {
        cout << "Vehicle Destructor Called\n";
    }

    // ======================
    // GETTER & SETTER
    // Encapsulation
    // ======================
    void setSpeed(int s) {
        speed = s;
    }

    int getSpeed() const {
        return speed;
    }

    // ======================
    // FUNCTION OVERLOADING
    // ======================
    void show() {
        cout << "Vehicle Show Function\n";
    }

    void show(string msg) {
        cout << "Message: " << msg << endl;
    }

    // ======================
    // VIRTUAL FUNCTION
    // Function Overriding
    // ======================
    virtual void display() {
        cout << "Vehicle Display\n";
    }

    // ======================
    // IMPLEMENTING ABSTRACT METHOD
    // ======================
    void startEngine() override {
        cout << "Vehicle Engine Started\n";
    }

    // ======================
    // OPERATOR OVERLOADING
    // ======================
    Vehicle operator+(const Vehicle& obj) {

        Vehicle temp;

        temp.speed = this->speed + obj.speed;
        temp.brand = this->brand + "-" + obj.brand;

        return temp;
    }

    // ======================
    // FRIEND FUNCTION
    // ======================
    friend void showSecret(Vehicle v);

    // ======================
    // STATIC FUNCTION
    // ======================
    static void totalVehicles() {
        cout << "Total Vehicles: " << vehicleCount << endl;
    }
};

// Static variable definition
int Vehicle::vehicleCount = 0;

// ======================
// FRIEND FUNCTION
// ======================
void showSecret(Vehicle v) {
    cout << "Secret Code: " << v.secretCode << endl;
}

// ======================
// SINGLE INHERITANCE
// ======================
class Car : public Vehicle {

private:
    int seats;

public:

    // Constructor
    Car(string b, int s, int seat) : Vehicle(b, s) {
        seats = seat;
        cout << "Car Constructor Called\n";
    }

    // Function Overriding
    void display() override {
        cout << "Car Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Seats: " << seats << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car Destructor Called\n";
    }
};

// ======================
// MULTILEVEL INHERITANCE
// ======================
class SportsCar : public Car {

private:
    int horsepower;

public:

    SportsCar(string b, int s, int seat, int hp)
        : Car(b, s, seat) {

        horsepower = hp;

        cout << "SportsCar Constructor Called\n";
    }

    void turbo() {
        cout << "Turbo Activated\n";
    }

    ~SportsCar() {
        cout << "SportsCar Destructor Called\n";
    }
};

// ======================
// HIERARCHICAL INHERITANCE
// ======================
class Bike : public Vehicle {

public:

    Bike(string b, int s) : Vehicle(b, s) {
        cout << "Bike Constructor Called\n";
    }

    void wheelie() {
        cout << "Bike doing wheelie\n";
    }

    ~Bike() {
        cout << "Bike Destructor Called\n";
    }
};

// ======================
// MULTIPLE INHERITANCE
// ======================
class MusicSystem {

public:
    void playMusic() {
        cout << "Music Playing\n";
    }
};

class SmartCar : public Car, public MusicSystem {

public:

    SmartCar(string b, int s, int seat)
        : Car(b, s, seat) {

        cout << "SmartCar Constructor Called\n";
    }

    void AI() {
        cout << "AI Driving Enabled\n";
    }

    ~SmartCar() {
        cout << "SmartCar Destructor Called\n";
    }
};

// ======================
// MAIN FUNCTION
// ======================
int main() {

    cout << "===== OBJECT CREATION =====\n";

    // Object Creation
    Vehicle v1;

    Vehicle v2("BMW", 180);

    // Copy Constructor
    Vehicle v3 = v2;

    cout << "\n===== ENCAPSULATION =====\n";

    v2.setSpeed(220);

    cout << "Speed: " << v2.getSpeed() << endl;

    cout << "\n===== FUNCTION OVERLOADING =====\n";

    v2.show();

    v2.show("Hello C++");

    cout << "\n===== OPERATOR OVERLOADING =====\n";

    Vehicle v4("Audi", 150);

    Vehicle result = v2 + v4;

    cout << "Combined Speed: "
         << result.getSpeed() << endl;

    cout << "\n===== FRIEND FUNCTION =====\n";

    showSecret(v2);

    cout << "\n===== SINGLE INHERITANCE =====\n";

    Car c1("Mercedes", 300, 4);

    c1.display();

    cout << "\n===== MULTILEVEL INHERITANCE =====\n";

    SportsCar sc("Ferrari", 400, 2, 900);

    sc.turbo();

    cout << "\n===== HIERARCHICAL INHERITANCE =====\n";

    Bike b1("Yamaha", 120);

    b1.wheelie();

    cout << "\n===== MULTIPLE INHERITANCE =====\n";

    SmartCar sm("Tesla", 250, 4);

    sm.playMusic();

    sm.AI();

    cout << "\n===== ABSTRACTION =====\n";

    Engine* e;

    e = &c1;

    e->startEngine();

    cout << "\n===== RUNTIME POLYMORPHISM =====\n";

    Vehicle* ptr;

    ptr = &c1;

    ptr->display();

    cout << "\n===== STATIC MEMBER =====\n";

    Vehicle::totalVehicles();

    cout << "\n===== END PROGRAM =====\n";

    return 0;
}