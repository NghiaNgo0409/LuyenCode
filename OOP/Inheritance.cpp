#include <iostream>
#include <string>
using namespace std;
class People
{
    protected:
    string name;
    int age;
    string address;
    public:
    void set()
    {
        cout << "Nhap ten: ";
        cin >> this->name;
        cout << "Nhap tuoi: ";
        cin >> this->age;
        cout << "Nhap dia chi: ";
        cin >> this->address;
    }
    void get()
    {
        cout << "Ten: " << this->name << endl;
        cout << "Tuoi: " << this->age << endl;
        cout << "Dia chi: " << this->address << endl;
    }
    People()
    {
        this->name = "";
        this->age = 0;
        this->address = "";
    }
    ~People()
    {
        this->name = "";
        this->age = 0;
        this->address = "";
    }
};
class Student : public People
{
    private:
    int id;
    float math, physical, chemistry;
    public:
    void set()
    {
        People::set();
        cout << "Nhap ID: ";
        cin >> id;
        cout << "Nhap diem toan: ";
        cin >> math;
        cout << "Nhap diem ly: ";
        cin >> physical;
        cout << "Nhap diem hoa: ";
        cin >> chemistry;
    }
    void get()
    {
        People::get();
        cout << "ID: " << id << endl;
        cout << "Diem toan: " << math << endl;
        cout << "Diem ly: " << physical << endl;
        cout << "Diem hoa: " << chemistry << endl;
        cout << "GPA: " << GPA() << endl;
    }
    float GPA()
    {
        return (math + physical + chemistry)/3;
    }
};
int main()
{
    Student std1;
    std1.set();
    cout << endl;
    std1.get();
}