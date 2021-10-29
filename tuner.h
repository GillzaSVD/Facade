#pragma once
#ifndef TUNER_H
#define TUNER_H

#include <iostream>
#include "amplifier.h"

class tuner
{
private:
	string description;
	Amplifier* amplifier;
	double frequency;
public:
	Tuner(string description, Amplifier* amplifier);
	void on();
	void off();
	void setFrequency(double frequency);
	void setAm();
	void setFm();
	string toString();
};

#endif