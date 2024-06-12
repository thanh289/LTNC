#include <bits/stdc++.h>
using namespace std;


class Student
{
    private:
        int stt;
        double average;
        double toan;
        double ly;
        double anh;
    public:
        Student(int st, double t_, double l_, double a_);
        friend ostream& operator<<(ostream& os, const Student& student);
        int getStt();
        double getToan();
        double getLy();
        double getAnh();
        double getAver();
        bool check();
};

Student::Student(int st, double t_, double l_, double a_){
    stt = st;
    average = (t_+ l_ +a_) / 3;
    toan = t_;
    ly = l_;
    anh = a_;
}

ostream& operator<<(ostream& os, const Student& student){
    os<<setprecision(1)<<fixed;
    os<<student.stt<<" "<<student.toan<<" "<<student.ly<<" "<<student.anh;
    return os;
}

int Student::getStt(){
    return stt;
}
double Student::getToan(){
    return toan;
}
double Student::getLy(){
    return ly;
}
double Student::getAnh(){
    return anh;
}
double Student::getAver(){
    return average;
}

bool Student::check(){
    if(toan<0 || toan>10 || ly<0 || ly>10 || anh<0 || anh>10)
        return true;
    return false; 
}


bool cmpToan(Student& x, Student& y){
    return x.getToan() > y.getToan();
}

bool cmpLy(Student& x, Student& y){
    return x.getLy() > y.getLy();
}

bool cmpAnh(Student& x, Student& y){
    return x.getAnh() > y.getAnh();
}

bool cmpAverage(Student& x, Student& y){
    return x.getAver() > y.getAver();
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

    for(int i=0; i<t; i++){
        if(v[i].check()){
            cout<<"invalid"<<endl;
            return 0;
        }
    }
    
    cout<<"Theo diem mon Toan:"<<endl;
    cout<<"SV Toan Ly Anh"<<endl;
    sort(v.begin(), v.end(), cmpToan);
    for(int i=0; i<t; i++)
        cout<<v[i]<<endl;
    cout<<endl;

    cout<<"Theo diem mon Anh:"<<endl;
    cout<<"SV Toan Ly Anh"<<endl;
    sort(v.begin(), v.end(), cmpAnh);
    for(int i=0; i<t; i++)
        cout<<v[i]<<endl;
    cout<<endl;

    cout<<"Theo diem trung binh:"<<endl;
    cout<<"SV TB Toan Ly Anh"<<endl;
    sort(v.begin(), v.end(), cmpAverage);
    for(int i=0; i<t; i++){
        cout<<v[i].getStt()<<" "<<v[i].getAver()<<" "<<v[i].getToan()<<" "<<v[i].getLy()<<" "<<v[i].getAnh()<<endl;
    }

}