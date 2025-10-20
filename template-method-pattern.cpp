#include <iostream>
using namespace std;

class AbstractProcess {
public:
    void run() {
        step1();
        step2();
        commonStep();
    }
    virtual void step1() = 0;
    virtual void step2() = 0;
    void commonStep() {
        cout << "Common step executed." << endl;
    }
    virtual ~AbstractProcess() = default;
};
//реалізація A//
class ConcreteA : public AbstractProcess {
public:
    void step1() override {
        cout << "ConcreteA step1" << endl;
    }
    void step2() override {
        cout << "ConcreteA step2" << endl;
    }
};
//реалізація B//
class ConcreteB : public AbstractProcess {
public:
    void step1() override {
        cout << "ConcreteB step1" << endl;
    }
    void step2() override {
        cout << "ConcreteB step2" << endl;
    }
};
int main() {
    ConcreteA processA;
    ConcreteB processB;

    processA.run(); 
    processB.run(); 
    return 0;
}