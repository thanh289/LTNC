#include <bits/stdc++.h>
using namespace std;

class Student
{
    private:
        string Name;
        string MSV;
        double point = 0.0;
    public:
        Student(string m, string n, double p)
        {
            Name = n;
            MSV = m;
            point = p;
        }

        Student(string m)
        {
            MSV = m;
        }


        friend ostream& operator<<(ostream& os, const Student& people)
        {
            cout<<setprecision(1)<<fixed;
            os<<people.MSV<<"_"<<people.point<<endl;
            return os;
        }

        bool operator<(const Student& other)
        {
            return point < other.point;
        }

        bool operator<=(const Student& other)
        {
            return point <= other.point;
        }

        bool operator>(const Student& other)
        {
            return point > other.point;
        }

        bool operator>=(const Student& other)
        {
            return point >= other.point;
        }

        bool operator==(const Student& other)
        {
            return point == other.point;
        }

        bool operator!=(const Student& other)
        {
            return point != other.point;
        }

        string name()
        {
            return Name;
        }

        string id()
        {
            return MSV;
        }

        double grade()
        {
            return point;
        }

        double cal_grade(double s1, double s2, double s3)
        {
            point = 0.1*s1 + 0.3*s2 + 0.6*s3;
            return point;
        }


};

int main()
{
    Student s1("18020332", "Nguyen Van Anh", 9.0);                                   
    cout << s1;

    cout << (Student("18020332", "Tran Tien", 5.5) < Student("18020331", "Ngo Giang", 8.0))<<endl;

    cout << (Student("18020332", "Tran Tien", 5.5) >= Student("18020331", "Ngo Giang", 5.5))<<endl;

    cout << (Student("18020332", "Tran Tien", 5.5) != Student("18020331", "Ngo Giang", 5.5))<<endl;

    Student s2("18020332", "Nguyen Van Anh", 9.0);                                   
    cout << s2.name() << " " << s2.grade() << " " << s2.id()<<endl;

    Student s3("18020332");                                                          
    cout << s3.cal_grade(10, 8, 7) << " ";
    cout << s3.grade();

}