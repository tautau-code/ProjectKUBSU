#pragma once
#ifndef TIME_H
#define TIME_H

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
};
#endif // !TIME_H
