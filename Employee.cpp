#include <iostream>
using namespace std;

class Employee{
string Name;
int Id;
string Dept;

public:
    Employee(string name, int id, string dept) : Name(name), Id(id), Dept(dept){}
    string getName() { return Name; }
    int getId() { return Id; }
    string getDept() { return Dept; }
    void setName(string name){Name = name;}
    void setId(int id){Id = id;}
    void setDept(string dept){Dept = dept;}
};

class Fulltime : public Employee{
double Salary;
public:
    Fulltime(string name, int id, string dept, double salary = 0.00) : Employee(name, id, dept), Salary(salary) {  }
    void setSalary(double salary){Salary = salary;}
    void getSalary() { cout << Salary << endl; }
};

class PartTime : protected Employee{
int Wages;
double PayPerHour;
int WorkingHours;
protected:
    void calculateWages();
public:
    PartTime(string name, int id, string dept, int hours = 0, double pay = 0.00, int wages = 0) : Employee(name, id, dept), Wages(wages), PayPerHour(pay), WorkingHours(hours) {}
    void setWages(int wages){Wages = wages;}
    void setPayPerHour(double pay){PayPerHour = pay;}
    void setWorkingHours(int hours){WorkingHours = hours;}
    void getWages() { calculateWages(); }
    void getPayPerHour() { cout << PayPerHour << endl; }
    void getWorkingHours() { cout << WorkingHours << endl; }
};

void PartTime::calculateWages(){
    Wages = PayPerHour * WorkingHours;
    cout << Wages << endl;
}

int main(){
    Employee Manager("Lilian", 45002, "Executive Sales Managers");
    Manager.setId(Manager.getId());

    PartTime Contractor("Jeremy", 3232, "Developers",7);
    Contractor.setPayPerHour(23.45);
    Contractor.getWages();

    Fulltime Marketer("Carol", 23322, "Digital Marketing");
    Marketer.setSalary(23000.80);
    Marketer.getSalary();

    return 0;
}