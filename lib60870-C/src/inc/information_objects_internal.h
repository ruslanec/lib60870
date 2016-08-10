/*
 * information_objects_internal.h
 *
 *  Created on: Aug 5, 2016
 *      Author: mzillgit
 */

#ifndef SRC_INC_INFORMATION_OBJECTS_INTERNAL_H_
#define SRC_INC_INFORMATION_OBJECTS_INTERNAL_H_

#include "information_objects.h"
#include "frame.h"

void
InformationObject_encode(InformationObject self, Frame frame, ConnectionParameters parameters);

SinglePointInformation
SinglePointInformation_getFromBuffer(SinglePointInformation self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

MeasuredValueScaledWithCP56Time2a
MeasuredValueScaledWithCP56Time2a_getFromBuffer(MeasuredValueScaledWithCP56Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

StepPositionInformation
StepPositionInformation_getFromBuffer(StepPositionInformation self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

StepPositionWithCP56Time2a
StepPositionWithCP56Time2a_getFromBuffer(StepPositionWithCP56Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

StepPositionWithCP24Time2a
StepPositionWithCP24Time2a_getFromBuffer(StepPositionWithCP24Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DoublePointInformation
DoublePointInformation_getFromBuffer(DoublePointInformation self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DoublePointWithCP24Time2a
DoublePointWithCP24Time2a_getFromBuffer(DoublePointWithCP24Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DoublePointWithCP56Time2a
DoublePointWithCP56Time2a_getFromBuffer(DoublePointWithCP56Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SinglePointWithCP24Time2a
SinglePointWithCP24Time2a_getFromBuffer(SinglePointWithCP24Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SinglePointWithCP56Time2a
SinglePointWithCP56Time2a_getFromBuffer(SinglePointWithCP56Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

BitString32
BitString32_getFromBuffer(BitString32 self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

Bitstring32WithCP24Time2a
Bitstring32WithCP24Time2a_getFromBuffer(Bitstring32WithCP24Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

Bitstring32WithCP56Time2a
Bitstring32WithCP56Time2a_getFromBuffer(Bitstring32WithCP56Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

MeasuredValueNormalized
MeasuredValueNormalized_getFromBuffer(MeasuredValueNormalized self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

MeasuredValueNormalizedWithCP24Time2a
MeasuredValueNormalizedWithCP24Time2a_getFromBuffer(MeasuredValueNormalizedWithCP24Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

MeasuredValueNormalizedWithCP56Time2a
MeasuredValueNormalizedWithCP56Time2a_getFromBuffer(MeasuredValueNormalizedWithCP56Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

MeasuredValueScaled
MeasuredValueScaled_getFromBuffer(MeasuredValueScaled self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

MeasuredValueScaledWithCP24Time2a
MeasuredValueScaledWithCP24Time2a_getFromBuffer(MeasuredValueScaledWithCP24Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

MeasuredValueShort
MeasuredValueShort_getFromBuffer(MeasuredValueShort self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

MeasuredValueShortWithCP24Time2a
MeasuredValueShortWithCP24Time2a_getFromBuffer(MeasuredValueShortWithCP24Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

MeasuredValueShortWithCP56Time2a
MeasuredValueShortWithCP56Time2a_getFromBuffer(MeasuredValueShortWithCP56Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

IntegratedTotals
IntegratedTotals_getFromBuffer(IntegratedTotals self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

IntegratedTotalsWithCP24Time2a
IntegratedTotalsWithCP24Time2a_getFromBuffer(IntegratedTotalsWithCP24Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

IntegratedTotalsWithCP56Time2a
IntegratedTotalsWithCP56Time2a_getFromBuffer(IntegratedTotalsWithCP56Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SingleCommand
SingleCommand_getFromBuffer(SingleCommand self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SingleCommandWithCP56Time2a
SingleCommandWithCP56Time2a_getFromBuffer(SingleCommandWithCP56Time2a self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DoubleCommand
DoubleCommand_getFromBuffer(DoubleCommand self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

StepCommand
StepCommand_getFromBuffer(StepCommand self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandNormalized
SetpointCommandNormalized_getFromBuffer(SetpointCommandNormalized self, ConnectionParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

#endif /* SRC_INC_INFORMATION_OBJECTS_INTERNAL_H_ */