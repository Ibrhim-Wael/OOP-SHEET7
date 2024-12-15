#include <iostream>
using namespace std;


class TemperatureLog{
private:
double days[7];
public:
double avg;
double sum=0;
TemperatureLog(double d[7]){
    for(int i=0;i<7;i++){days[i]=d[i];}
}
double calculateAverageTemperature(){
    for(int i=0;i<7;i++){
        sum+=days[i];
    }
    avg=sum/7;
    return avg;
}
void displayTemperatures(){
    for (int i = 0; i < 7; i++)
    {
        cout<<"TempOfDay("<<i<<") is :"<<days[i]<<endl;
    }
}

double gettemp(int i){
    return days[i];
}
};


double findLowestTemperature(TemperatureLog t){
    int min =t.gettemp(0);
    for (int i = 1; i < 7; i++)
    {
        if(min>t.gettemp(i))min=t.gettemp(i);
    }
    return min;
}


int main(){
    double a[7];
    cout<<"Enter The Temp Of the Last Week"<<endl;
    for (int i = 0; i < 7; i++)
    {
        cin>>a[i];
    }
    TemperatureLog Week1(a);
    Week1.displayTemperatures();
    cout<<"The Average Is : "<<Week1.calculateAverageTemperature()<<endl;
    cout<<"The Lowest Temp Is : "<<findLowestTemperature(Week1)<<endl;
}