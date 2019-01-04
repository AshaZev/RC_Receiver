/*
# RC_Receiver.cpp - Library for receiving data from an RC system.
# Created by AshaZev, 2017/03/13.
# Last updated, 2019/01/04.
*/

#include "Arduino.h"
#include "RC_Receiver.h"
// Just for getting data from the RC receiver

RC_Receiver::RC_Receiver(int numberOfChannels)
{
  //create array of channels
  channel = (int*)calloc(numberOfChannels, sizeof(int));
}

void RC_Receiver::setChannel(int channelNumber, int pin)
{
  channel[channelNumber] = pin;
}

int RC_Receiver::readChannel(int channelNumber)
{
  int value = 1500;
  int pin = channel[channelNumber];
  value = pulseIn(pin, HIGH, 100000);
  // LOG VALUE
  if(value == 0)
  {
    value = 1500;  //could not read a value
  }
  value = constrain(value, 1000, 2000);
  return value;
}
