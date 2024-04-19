#include <bits/stdc++.h>
using namespace std;


class Student
{
    private:
        int stt;
        double toan;
        double ly;
        double anh;
    public:
        Student(int st, double t_, double l_, double a_);
        friend ostream& operator<<(ostream& os, const Student& student);
        double getToan();
        double getLy();
        double getAnh();
};

Student::Student(int st, double t_, double l_, double a_)
{
    stt = st;
    toan = t_;
    ly = l_;
    anh = a_;
}

ostream& operator<<(ostream& os, const Student& student)
{
    os<<setprecision(1)<<fixed;
    os<<student.stt<<" "<<student.toan<<" "<<student.ly<<" "<<student.anh;
    return os;
}

double Student::getToan()
{
    return toan;
}
double Student::getLy()
{
    return ly;
}
double Student::getAnh()
{
    return anh;
}


bool cmpToan(Student& x, Student& y)
{
    return x.getToan() < y.getToan();
}

bool cmpLy(Student& x, Student& y)
{
    return x.getLy() < y.getLy();
}

bool cmpAnh(Student& x, Student& y)
{
    return x.getAnh() < y.getAnh();
}


int main()
{
    int t; cin>>t;
    vector<Student> v;
    for(int i=0; i<t; i++)
    {
        double x, y, z; cin>>x>>y>>z;
        v.push_back({i+1, x, y, z});
    }

    

    sort(v.begin(), v.end(), cmpToan);
    for(int i=0; i<t; i++)
        cout<<v[i]<<endl;
    cout<<endl;

    sort(v.begin(), v.end(), cmpLy);
    for(int i=0; i<t; i++)
        cout<<v[i]<<endl;
    cout<<endl;

    sort(v.begin(), v.end(), cmpAnh);
    for(int i=0; i<t; i++)
        cout<<v[i]<<endl;
    cout<<endl;
}