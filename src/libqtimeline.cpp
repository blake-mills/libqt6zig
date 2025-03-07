#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimeLine>
#include <QTimerEvent>
#include <QVariant>
#include <qtimeline.h>
#include "libqtimeline.h"
#include "libqtimeline.hxx"

QTimeLine* QTimeLine_new() {
    return new VirtualQTimeLine();
}

QTimeLine* QTimeLine_new2(int duration) {
    return new VirtualQTimeLine(static_cast<int>(duration));
}

QTimeLine* QTimeLine_new3(int duration, QObject* parent) {
    return new VirtualQTimeLine(static_cast<int>(duration), parent);
}

QMetaObject* QTimeLine_MetaObject(const QTimeLine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTimeLine_Metacast(QTimeLine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTimeLine_Metacall(QTimeLine* self, int param1, int param2, void** param3) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTimeLine_OnMetacall(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_Metacall_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTimeLine_QBaseMetacall(QTimeLine* self, int param1, int param2, void** param3) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_Metacall_IsBase(true);
        return vqtimeline->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTimeLine_Tr(const char* s) {
    QString _ret = QTimeLine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QTimeLine_State(const QTimeLine* self) {
    return static_cast<int>(self->state());
}

int QTimeLine_LoopCount(const QTimeLine* self) {
    return self->loopCount();
}

void QTimeLine_SetLoopCount(QTimeLine* self, int count) {
    self->setLoopCount(static_cast<int>(count));
}

int QTimeLine_Direction(const QTimeLine* self) {
    return static_cast<int>(self->direction());
}

void QTimeLine_SetDirection(QTimeLine* self, int direction) {
    self->setDirection(static_cast<QTimeLine::Direction>(direction));
}

int QTimeLine_Duration(const QTimeLine* self) {
    return self->duration();
}

void QTimeLine_SetDuration(QTimeLine* self, int duration) {
    self->setDuration(static_cast<int>(duration));
}

int QTimeLine_StartFrame(const QTimeLine* self) {
    return self->startFrame();
}

void QTimeLine_SetStartFrame(QTimeLine* self, int frame) {
    self->setStartFrame(static_cast<int>(frame));
}

int QTimeLine_EndFrame(const QTimeLine* self) {
    return self->endFrame();
}

void QTimeLine_SetEndFrame(QTimeLine* self, int frame) {
    self->setEndFrame(static_cast<int>(frame));
}

void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame) {
    self->setFrameRange(static_cast<int>(startFrame), static_cast<int>(endFrame));
}

int QTimeLine_UpdateInterval(const QTimeLine* self) {
    return self->updateInterval();
}

void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval) {
    self->setUpdateInterval(static_cast<int>(interval));
}

QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self) {
    return new QEasingCurve(self->easingCurve());
}

void QTimeLine_SetEasingCurve(QTimeLine* self, QEasingCurve* curve) {
    self->setEasingCurve(*curve);
}

int QTimeLine_CurrentTime(const QTimeLine* self) {
    return self->currentTime();
}

int QTimeLine_CurrentFrame(const QTimeLine* self) {
    return self->currentFrame();
}

double QTimeLine_CurrentValue(const QTimeLine* self) {
    return static_cast<double>(self->currentValue());
}

int QTimeLine_FrameForTime(const QTimeLine* self, int msec) {
    return self->frameForTime(static_cast<int>(msec));
}

void QTimeLine_Start(QTimeLine* self) {
    self->start();
}

void QTimeLine_Resume(QTimeLine* self) {
    self->resume();
}

void QTimeLine_Stop(QTimeLine* self) {
    self->stop();
}

void QTimeLine_SetPaused(QTimeLine* self, bool paused) {
    self->setPaused(paused);
}

void QTimeLine_SetCurrentTime(QTimeLine* self, int msec) {
    self->setCurrentTime(static_cast<int>(msec));
}

void QTimeLine_ToggleDirection(QTimeLine* self) {
    self->toggleDirection();
}

libqt_string QTimeLine_Tr2(const char* s, const char* c) {
    QString _ret = QTimeLine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTimeLine_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTimeLine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
double QTimeLine_ValueForTime(const QTimeLine* self, int msec) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        return static_cast<double>(vqtimeline->valueForTime(static_cast<int>(msec)));
    } else {
        return static_cast<double>(vqtimeline->valueForTime(static_cast<int>(msec)));
    }
}

// Base class handler implementation
double QTimeLine_QBaseValueForTime(const QTimeLine* self, int msec) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_ValueForTime_IsBase(true);
        return static_cast<double>(vqtimeline->valueForTime(static_cast<int>(msec)));
    } else {
        return static_cast<double>(vqtimeline->valueForTime(static_cast<int>(msec)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnValueForTime(const QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_ValueForTime_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_ValueForTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeLine_TimerEvent(QTimeLine* self, QTimerEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->timerEvent(event);
    } else {
        vqtimeline->timerEvent(event);
    }
}

// Base class handler implementation
void QTimeLine_QBaseTimerEvent(QTimeLine* self, QTimerEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_TimerEvent_IsBase(true);
        vqtimeline->timerEvent(event);
    } else {
        vqtimeline->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnTimerEvent(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_TimerEvent_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeLine_Event(QTimeLine* self, QEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        return vqtimeline->event(event);
    } else {
        return vqtimeline->event(event);
    }
}

// Base class handler implementation
bool QTimeLine_QBaseEvent(QTimeLine* self, QEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_Event_IsBase(true);
        return vqtimeline->event(event);
    } else {
        return vqtimeline->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnEvent(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_Event_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeLine_EventFilter(QTimeLine* self, QObject* watched, QEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        return vqtimeline->eventFilter(watched, event);
    } else {
        return vqtimeline->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTimeLine_QBaseEventFilter(QTimeLine* self, QObject* watched, QEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_EventFilter_IsBase(true);
        return vqtimeline->eventFilter(watched, event);
    } else {
        return vqtimeline->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnEventFilter(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_EventFilter_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeLine_ChildEvent(QTimeLine* self, QChildEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->childEvent(event);
    } else {
        vqtimeline->childEvent(event);
    }
}

// Base class handler implementation
void QTimeLine_QBaseChildEvent(QTimeLine* self, QChildEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_ChildEvent_IsBase(true);
        vqtimeline->childEvent(event);
    } else {
        vqtimeline->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnChildEvent(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_ChildEvent_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeLine_CustomEvent(QTimeLine* self, QEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->customEvent(event);
    } else {
        vqtimeline->customEvent(event);
    }
}

// Base class handler implementation
void QTimeLine_QBaseCustomEvent(QTimeLine* self, QEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_CustomEvent_IsBase(true);
        vqtimeline->customEvent(event);
    } else {
        vqtimeline->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnCustomEvent(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_CustomEvent_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeLine_ConnectNotify(QTimeLine* self, QMetaMethod* signal) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->connectNotify(*signal);
    } else {
        vqtimeline->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTimeLine_QBaseConnectNotify(QTimeLine* self, QMetaMethod* signal) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_ConnectNotify_IsBase(true);
        vqtimeline->connectNotify(*signal);
    } else {
        vqtimeline->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnConnectNotify(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_ConnectNotify_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeLine_DisconnectNotify(QTimeLine* self, QMetaMethod* signal) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->disconnectNotify(*signal);
    } else {
        vqtimeline->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTimeLine_QBaseDisconnectNotify(QTimeLine* self, QMetaMethod* signal) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_DisconnectNotify_IsBase(true);
        vqtimeline->disconnectNotify(*signal);
    } else {
        vqtimeline->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnDisconnectNotify(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->setQTimeLine_DisconnectNotify_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTimeLine_Sender(const QTimeLine* self) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        return vqtimeline->sender();
    } else {
        return vqtimeline->sender();
    }
}

// Base class handler implementation
QObject* QTimeLine_QBaseSender(const QTimeLine* self) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_Sender_IsBase(true);
        return vqtimeline->sender();
    } else {
        return vqtimeline->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnSender(const QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_Sender_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeLine_SenderSignalIndex(const QTimeLine* self) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        return vqtimeline->senderSignalIndex();
    } else {
        return vqtimeline->senderSignalIndex();
    }
}

// Base class handler implementation
int QTimeLine_QBaseSenderSignalIndex(const QTimeLine* self) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_SenderSignalIndex_IsBase(true);
        return vqtimeline->senderSignalIndex();
    } else {
        return vqtimeline->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnSenderSignalIndex(const QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeLine_Receivers(const QTimeLine* self, const char* signal) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        return vqtimeline->receivers(signal);
    } else {
        return vqtimeline->receivers(signal);
    }
}

// Base class handler implementation
int QTimeLine_QBaseReceivers(const QTimeLine* self, const char* signal) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_Receivers_IsBase(true);
        return vqtimeline->receivers(signal);
    } else {
        return vqtimeline->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnReceivers(const QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_Receivers_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeLine_IsSignalConnected(const QTimeLine* self, QMetaMethod* signal) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        return vqtimeline->isSignalConnected(*signal);
    } else {
        return vqtimeline->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTimeLine_QBaseIsSignalConnected(const QTimeLine* self, QMetaMethod* signal) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_IsSignalConnected_IsBase(true);
        return vqtimeline->isSignalConnected(*signal);
    } else {
        return vqtimeline->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnIsSignalConnected(const QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        vqtimeline->setQTimeLine_IsSignalConnected_Callback(reinterpret_cast<VirtualQTimeLine::QTimeLine_IsSignalConnected_Callback>(slot));
    }
}

void QTimeLine_Delete(QTimeLine* self) {
    delete self;
}
