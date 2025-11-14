#include <iostream>
#include <string>

class Employee {
    protected:
        std::string name;
        double salary;

    public:
        static int employeeCount;

        Employee(std::string n, double s){
            name = n;
            salary = s;
            employeeCount++;
        }

        virtual void displayInfo(){
            std::cout << "Name: " << name << ", Salary: " << salary << std::endl;
        }

        static void showTotalEmployees(){
            std::cout << "Total Employees Created: " << employeeCount;
        }

        virtual ~Employee();

};

class Faculty : public Employee {
    private:
        std::string department;

    public:
        Faculty(std::string n, double s, std::string d) : Employee(n, s) {
            department = d;
        }

        std::string getName(std::string s){
            return s;
        }

        void setName(){
            name = s;
        }
        
        double getSal(double d){
            return salary;
        }

        void setSal(){
            salary = d;
        }

        void displayInfo() override {
            std::cout << "Name: " << name << "(Faculty), Salary: " << salary << std::endl;
        }
};

class Staff : public Employee {
        private:
        std::string department;

    public:
        Staff(std::string n, double s, std::string d) : Employee(n, s) {
            department = d;
        }

        std::string getName(std::string s){
            return s;
        }

        void setName(){
            name = s;
        }
        
        double getSal(double d){
            return salary;
        }

        void setSal(){
            salary = d;
        }

        void displayInfo() override {
            std::cout << "Name: " << name << "(Staff), Salary: " << salary << std::endl;
        }

};

int Employee::employeeCount = 0;

int main() {
    int n;
    std::cin >> n;

    // for(int i=0; i<n; i++){
        
    // }

    Staff s;
    Faculty f;

    
    s.name="ali";
    s.salary=75000;
    f.name="salman";
    f.salary=80000;

    std::cout<<Employee::showTotalEmployees;

    return 0;
}