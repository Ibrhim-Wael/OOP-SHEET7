#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {
        normalize();
    }
    Time operator+(const Time &t) {
        Time temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;
        temp.seconds = seconds + t.seconds;
        temp.normalize();
        return temp;
    }
    bool operator==(const Time &t) const {
        return (hours == t.hours && minutes == t.minutes && seconds == t.seconds);
    }
    void display() const {
        cout << hours << "h:" << minutes << "m:" << seconds << "s" << endl;
    }
};

int main() {
    Time t1(2, 45, 30);
    Time t2(1, 20, 40);
    Time t3 = t1 + t2;

    cout << "Time 1: ";
    t1.display();
    
    cout << "Time 2: ";
    t2.display();
    
    cout << "Sum of Time 1 and Time 2: ";
    t3.display();

    if (t1 == t2) {
        cout << "Time 1 and Time 2 are equal." << endl;
    } else {
        cout << "Time 1 and Time 2 are not equal." << endl;
    }

    return 0;
}
