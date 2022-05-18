#pragma once

class Time
{
public:
	Time();
	void SetTime(int, int, int);
	void printUniversal();
	void printStandart();
private:
	int hour;
	int minute;
	int second;
}

