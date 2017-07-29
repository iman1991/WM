#ifndef TIME_MGMNT_H_
#define TIME_MGMNT_H_

#include "stdint.h"

typedef struct {
  uint32_t hours;
  uint8_t min;
  uint8_t sec;
  uint16_t msec;
} timeStr; 

// ����������  ������� �����
timeStr getCurTime();

// ���������� ������������ ���������� TIM3 ��� �������� ������� ������ ������������
void timeMgmnt(void);

// �������� ������� � ������������� timeVal ������������ �������� �������
uint32_t getTimeDiff(timeStr timeVal);

// �������� � ���������� timeVal ������ �����
void writeTime(timeStr * timeVal);

#endif