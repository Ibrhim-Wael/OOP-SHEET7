#include <iostream>
using namespace std;

class student{
    private:
    string name;
    double s1;
    double s2;
    double s3;
    public:
    student():name(" "),s1(0),s2(0),s3(0){};
    void set_name(string n){name=n;}
    void set_s1(double sb){s1=sb;}
    void set_s2(double sb){s2=sb;}
    void set_s3(double sb){s3=sb;}
    double calc_avg(){
        double avg=((s1+s2+s3)/3);
        return avg;
    }
    void showavg(){
        cout<< calc_avg() <<endl;
    }
    string get_name(){return name;}
};


int main(){
    int n;
    cout<<"Enter Number Of Students"<<endl;
    cin>>n;
    student s[n];
    for (int i = 0; i < n; i++)
    {int s1,s2,s3;
    string nam;
    cout<<"Enter The Name for Number "<<(i+1)<<endl;
    cin>>nam;
    s[i].set_name(nam);
    cout<<"Enter Subject 1 Degree for "<<nam<<endl;
        cin>>s1;
        s[i].set_s1(s1);
    cout<<"Enter Subject 2 Degree for "<<nam<<endl;
        cin>>s2;
        s[i].set_s2(s2);
    cout<<"Enter Subject 3 Degree for "<<nam<<endl;
        cin>>s3;
        s[i].set_s3(s3);                 
    }
    double topscorer=s[0].calc_avg();
    string topscorername=s[0].get_name();

    for (int i = 1; i < n; i++)
    { s[i].showavg();
        if(topscorer<s[i].calc_avg()){topscorer=s[i].calc_avg();
        topscorername=s[i].get_name();
        }
    }
    cout<<"The Top Scorer Is "<<topscorername<<"\nand got average of "<<topscorer<<endl;
}