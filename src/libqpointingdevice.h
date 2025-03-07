#pragma once
#ifndef SRCC_LIBQPOINTINGDEVICE_H
#define SRCC_LIBQPOINTINGDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QEventPoint QEventPoint;
typedef struct QInputDevice QInputDevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPointerEvent QPointerEvent;
typedef struct QPointingDevice QPointingDevice;
typedef struct QPointingDeviceUniqueId QPointingDeviceUniqueId;
typedef struct QRect QRect;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QPointingDevice::GrabTransition GrabTransition;         // C++ enum
typedef QPointingDevice::PointerType PointerType;               // C++ enum
typedef QPointingDevice::PointerTypes PointerTypes;             // C++ QFlags
typedef QPointingDeviceUniqueId::QtGadgetHelper QtGadgetHelper; // C++ QFlags
#else
typedef int GrabTransition;  // C ABI enum
typedef int PointerType;     // C ABI enum
typedef int PointerTypes;    // C ABI QFlags
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new(QPointingDeviceUniqueId* other);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* other);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new3();
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new4(QPointingDeviceUniqueId* param1);
void QPointingDeviceUniqueId_CopyAssign(QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other);
void QPointingDeviceUniqueId_MoveAssign(QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(long long id);
bool QPointingDeviceUniqueId_IsValid(const QPointingDeviceUniqueId* self);
long long QPointingDeviceUniqueId_NumericId(const QPointingDeviceUniqueId* self);
void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self);

QPointingDevice* QPointingDevice_new();
QPointingDevice* QPointingDevice_new2(libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount);
QPointingDevice* QPointingDevice_new3(QObject* parent);
QPointingDevice* QPointingDevice_new4(libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, libqt_string seatName);
QPointingDevice* QPointingDevice_new5(libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, libqt_string seatName, QPointingDeviceUniqueId* uniqueId);
QPointingDevice* QPointingDevice_new6(libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, libqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent);
QMetaObject* QPointingDevice_MetaObject(const QPointingDevice* self);
void* QPointingDevice_Metacast(QPointingDevice* self, const char* param1);
int QPointingDevice_Metacall(QPointingDevice* self, int param1, int param2, void** param3);
void QPointingDevice_OnMetacall(QPointingDevice* self, intptr_t slot);
int QPointingDevice_QBaseMetacall(QPointingDevice* self, int param1, int param2, void** param3);
libqt_string QPointingDevice_Tr(const char* s);
void QPointingDevice_SetType(QPointingDevice* self, int devType);
void QPointingDevice_SetCapabilities(QPointingDevice* self, int caps);
void QPointingDevice_SetMaximumTouchPoints(QPointingDevice* self, int c);
int QPointingDevice_PointerType(const QPointingDevice* self);
int QPointingDevice_MaximumPoints(const QPointingDevice* self);
int QPointingDevice_ButtonCount(const QPointingDevice* self);
QPointingDeviceUniqueId* QPointingDevice_UniqueId(const QPointingDevice* self);
QPointingDevice* QPointingDevice_PrimaryPointingDevice();
bool QPointingDevice_OperatorEqual(const QPointingDevice* self, QPointingDevice* other);
void QPointingDevice_GrabChanged(const QPointingDevice* self, QObject* grabber, int transition, QPointerEvent* event, QEventPoint* point);
void QPointingDevice_Connect_GrabChanged(QPointingDevice* self, intptr_t slot);
libqt_string QPointingDevice_Tr2(const char* s, const char* c);
libqt_string QPointingDevice_Tr3(const char* s, const char* c, int n);
QPointingDevice* QPointingDevice_PrimaryPointingDevice1(libqt_string seatName);
bool QPointingDevice_Event(QPointingDevice* self, QEvent* event);
void QPointingDevice_OnEvent(QPointingDevice* self, intptr_t slot);
bool QPointingDevice_QBaseEvent(QPointingDevice* self, QEvent* event);
bool QPointingDevice_EventFilter(QPointingDevice* self, QObject* watched, QEvent* event);
void QPointingDevice_OnEventFilter(QPointingDevice* self, intptr_t slot);
bool QPointingDevice_QBaseEventFilter(QPointingDevice* self, QObject* watched, QEvent* event);
void QPointingDevice_TimerEvent(QPointingDevice* self, QTimerEvent* event);
void QPointingDevice_OnTimerEvent(QPointingDevice* self, intptr_t slot);
void QPointingDevice_QBaseTimerEvent(QPointingDevice* self, QTimerEvent* event);
void QPointingDevice_ChildEvent(QPointingDevice* self, QChildEvent* event);
void QPointingDevice_OnChildEvent(QPointingDevice* self, intptr_t slot);
void QPointingDevice_QBaseChildEvent(QPointingDevice* self, QChildEvent* event);
void QPointingDevice_CustomEvent(QPointingDevice* self, QEvent* event);
void QPointingDevice_OnCustomEvent(QPointingDevice* self, intptr_t slot);
void QPointingDevice_QBaseCustomEvent(QPointingDevice* self, QEvent* event);
void QPointingDevice_ConnectNotify(QPointingDevice* self, QMetaMethod* signal);
void QPointingDevice_OnConnectNotify(QPointingDevice* self, intptr_t slot);
void QPointingDevice_QBaseConnectNotify(QPointingDevice* self, QMetaMethod* signal);
void QPointingDevice_DisconnectNotify(QPointingDevice* self, QMetaMethod* signal);
void QPointingDevice_OnDisconnectNotify(QPointingDevice* self, intptr_t slot);
void QPointingDevice_QBaseDisconnectNotify(QPointingDevice* self, QMetaMethod* signal);
QObject* QPointingDevice_Sender(const QPointingDevice* self);
void QPointingDevice_OnSender(const QPointingDevice* self, intptr_t slot);
QObject* QPointingDevice_QBaseSender(const QPointingDevice* self);
int QPointingDevice_SenderSignalIndex(const QPointingDevice* self);
void QPointingDevice_OnSenderSignalIndex(const QPointingDevice* self, intptr_t slot);
int QPointingDevice_QBaseSenderSignalIndex(const QPointingDevice* self);
int QPointingDevice_Receivers(const QPointingDevice* self, const char* signal);
void QPointingDevice_OnReceivers(const QPointingDevice* self, intptr_t slot);
int QPointingDevice_QBaseReceivers(const QPointingDevice* self, const char* signal);
bool QPointingDevice_IsSignalConnected(const QPointingDevice* self, QMetaMethod* signal);
void QPointingDevice_OnIsSignalConnected(const QPointingDevice* self, intptr_t slot);
bool QPointingDevice_QBaseIsSignalConnected(const QPointingDevice* self, QMetaMethod* signal);
void QPointingDevice_Delete(QPointingDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
