/*
# RC_Receiver.h - Library for receiving data from an RC system.
# Created by AshaZev, 13/03/2017.
# Last updated, 07/06/2018.
*/

#ifndef RC_Receiver_h
#define RC_Receiver_h

#include "Arduino.h"

struct Channel {
  int pin;
  int value;
};

class RC_Receiver
{
  private:
  int channel[];

  public:
  RC_Receiver(int numberOfChannels);
  void setChannel(int channelNumber, int pin);
  int readChannel(int channelNumber);
};

#endif
