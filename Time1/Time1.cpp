#include <iostream>
using namespace std;
#include <iomanip>
#include <stdexcept>
#include "Time1.h"


Time::Time()
{
	hour = minute = second = 0;
}

void Time::SetTime(int h, int m, int s)
	{
		if ((h >= 0 && h < 24) && (m >= 0 && m <= 60) && (s >= 0 && s <= 60))
		{
			hour = h;
			minute = m;
			second = s;
		}
		else
		{
			throw invalid_argument("hour, minute and/ot second was out of range");
		}
	}

void Time::printUniversal()
{
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << second;
}

void Time::printStandart()
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill(0)
		<< setw(2) << minute << ":"
		<< setw(2) << second << ((hour < 12) ? "AM" : "PM");
}