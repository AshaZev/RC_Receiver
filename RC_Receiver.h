/*
# RC_Receiver.h - Library for receiving data from an RC system.
# Created by AshaZev, 2017/03/13.
# Last updated, 2017/06/07.
*/

#ifndef RC_Receiver_h
#define RC_Receiver_h

#include "Arduino.h"

class RC_Receiver
{
  private:
  int * channel;

  public:
  RC_Receiver(int numberOfChannels);
  void setChannel(int channelNumber, int pin);
  int readChannel(int channelNumber);
};

#endif
