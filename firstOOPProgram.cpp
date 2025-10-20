#include <iostream>
using namespace std;

class AbstractEmployee {
public:
    virtual ~AbstractEmployee() = default;

private:
    virtual void askforpromtion()=0;
};

class Employee:AbstractEmployee {
    private:
    std::string name;
    std::string company;
    int age;
public:
    void setName(string name) {
        name = name;
    }
    string getName() {
        return name;
    }
    void setCompany(string company) {
        company = company;
    }
    string getCompany() {
        return company;
    }
    void setAge(int age) {
        if (age >= 30)
        age = age;
    }
    int getAge() {
        return age;
    }

    void introduceyourself() {
        std::cout << "Name - " << std::endl;
        std::cout << "Company - " << company << std::endl;
        std::cout << "Age - " << age << std::endl;
    }
        Employee(string name, string company, int age) {
        name = name;
        company = company;
        age = age;
    }

    void askforpromotion() {
        if (age > 30)
            std::cout <<name << " got promoted" << std::endl;
        else
            std::cout << name << " Sorry No promotion" << std::endl;
    }
        };
class Developer: Employee {
public:
    string FavProgramingLanguage;
    Developer(string name, string company, int age) : Employee() {
    } ;
int main() {
    Employee employee1 = Employee ("Anthony","Halloween",25);
    Employee employee2 = Employee ("Daniel","Thanksgiving",30);
    Developer d;


    return 0;
}