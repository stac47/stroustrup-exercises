#include <iostream>

using namespace std;

int main()
{
    // With 2 arrays
    char* months[12] = { "January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October", "November",
        "December" };
    int numberOfDaysArray[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i=0 ; i < 12; ++i) {
        cout << months[i] << " " << numberOfDaysArray[i] << endl;
    }

    // With struct
    cout << "-------------" << endl;
    struct MonthInfo { 
        char *name;
        int numberOfDays; 
    };
    MonthInfo monthInfos[12] = {
        {"January", 31},
        {"February", 28},
        {"March", 31},
        {"April", 30},
        {"May", 31},
        {"June", 30},
        {"July", 31},
        {"August", 31},
        {"September", 30},
        {"October", 31},
        {"November", 30},
        {"December", 31}
    };
    for(int i=0 ; i < 12; ++i) {
        cout << monthInfos[i].name << " " << monthInfos[i].numberOfDays << endl;
    }

}
