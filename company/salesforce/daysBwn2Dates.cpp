// must be in O(1) time
#include<iostream>
using namespace std;

struct Date {
    int day,month,year;
};

const int monthDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};

int getLeapDays(Date d){
    int year = d.year;
    if(d.month > 2)
        return (year/4 - year/100 + year/400);
    else if (d.month <= 2)
        return ((year-1)/4 - (year-1)/100 + (year-1)/400);
}

int getNoOfDays(Date d){
    long int n = d.year * 365 + d.day;
    for(int i=0; i<d.month-1;++i)
        n += monthDays[i];
    n += getLeapDays(d);

    return n;
}
int main()
{
    Date date1,date2;

    cout<<"\nEnter two date in format : (dd\\mm\\yyyy) "<<endl;
    cin>>date1.day>>date1.month>>date1.year;
    cin>>date2.day>>date2.month>>date2.year;

    int n1 = getNoOfDays(date1);
    int n2 = getNoOfDays(date2);

    cout<<abs(n1-n2)<<endl;
            
}