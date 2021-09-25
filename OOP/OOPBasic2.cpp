#include <iostream>
#include <string>
using namespace std;
class VanDongVien
{
    private:
    string name;
    int age;
    string subject;
    float weight;
    float height;
    public:
    VanDongVien()
    {
        name = subject = "";
        age = 0;
        weight = height = 0;
    }
    VanDongVien(string name, int age, string subject, float weight, float height)
    {
        this->name = name;
        this->age = age;
        this->subject = subject;
        this->weight = weight;
        this->height = height;
    }
    ~VanDongVien()
    {
        name = subject = "";
        age = 0;
        weight = height = 0;
    }
    friend istream &operator>> (istream &is, VanDongVien &obj)
    {
        cout << "Nhap ho va ten: "; fflush(stdin); getline(is, obj.name);
        cout << "Nhap tuoi: "; fflush(stdin); is >> obj.age;
        cout << "Nhap mon thi dau: "; fflush(stdin); getline(is, obj.subject);
        cout << "Nhap can nang: "; fflush(stdin); is >> obj.weight;
        cout << "Nhap chieu cao: "; fflush(stdin); is >> obj.height;
        return is;
    }
    friend ostream &operator<< (ostream &os, VanDongVien &obj)
    {
        os << "Ho va ten: " << obj.name << endl;
        os << "Tuoi: " << obj.age << endl;
        os << "Mon thi dau: " << obj.subject << endl;
        os << "Can nang: " << obj.weight << endl;
        os << "Chieu cao: " << obj.height << endl;
        return os;
    }
    bool operator > (const VanDongVien &obj)
    {
        if (this->height > obj.height)
        {
            return true;
        }
        else if (this->height < obj.height)
        {
            return false;
        }
        else if (this->weight > obj.weight)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
void Swap(VanDongVien &a, VanDongVien &b)
{
    VanDongVien temp = a;
    a = b;
    b = temp;
}
int main()
{
    VanDongVien p("Nguyen Van A", 22, "Karatedo", 75, 180);
    cout << p;

    cout << "Nhap so luong: "; int n; cin >> n;
    VanDongVien *arr = new VanDongVien[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                Swap(arr[i], arr[j]);
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}