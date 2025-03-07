#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QRunnable>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QThreadPool>
#include <QTimerEvent>
#include <QVariant>
#include <qthreadpool.h>
#include "libqthreadpool.h"
#include "libqthreadpool.hxx"

QThreadPool* QThreadPool_new() {
    return new VirtualQThreadPool();
}

QThreadPool* QThreadPool_new2(QObject* parent) {
    return new VirtualQThreadPool(parent);
}

QMetaObject* QThreadPool_MetaObject(const QThreadPool* self) {
    return (QMetaObject*)self->metaObject();
}

void* QThreadPool_Metacast(QThreadPool* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QThreadPool_Metacall(QThreadPool* self, int param1, int param2, void** param3) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QThreadPool_OnMetacall(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_Metacall_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QThreadPool_QBaseMetacall(QThreadPool* self, int param1, int param2, void** param3) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_Metacall_IsBase(true);
        return vqthreadpool->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QThreadPool_Tr(const char* s) {
    QString _ret = QThreadPool::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QThreadPool* QThreadPool_GlobalInstance() {
    return QThreadPool::globalInstance();
}

void QThreadPool_Start(QThreadPool* self, QRunnable* runnable) {
    self->start(runnable);
}

bool QThreadPool_TryStart(QThreadPool* self, QRunnable* runnable) {
    return self->tryStart(runnable);
}

void QThreadPool_StartOnReservedThread(QThreadPool* self, QRunnable* runnable) {
    self->startOnReservedThread(runnable);
}

int QThreadPool_ExpiryTimeout(const QThreadPool* self) {
    return self->expiryTimeout();
}

void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout) {
    self->setExpiryTimeout(static_cast<int>(expiryTimeout));
}

int QThreadPool_MaxThreadCount(const QThreadPool* self) {
    return self->maxThreadCount();
}

void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount) {
    self->setMaxThreadCount(static_cast<int>(maxThreadCount));
}

int QThreadPool_ActiveThreadCount(const QThreadPool* self) {
    return self->activeThreadCount();
}

void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize) {
    self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThreadPool_StackSize(const QThreadPool* self) {
    return static_cast<unsigned int>(self->stackSize());
}

void QThreadPool_SetThreadPriority(QThreadPool* self, int priority) {
    self->setThreadPriority(static_cast<QThread::Priority>(priority));
}

int QThreadPool_ThreadPriority(const QThreadPool* self) {
    return static_cast<int>(self->threadPriority());
}

void QThreadPool_ReserveThread(QThreadPool* self) {
    self->reserveThread();
}

void QThreadPool_ReleaseThread(QThreadPool* self) {
    self->releaseThread();
}

bool QThreadPool_WaitForDone(QThreadPool* self) {
    return self->waitForDone();
}

void QThreadPool_Clear(QThreadPool* self) {
    self->clear();
}

bool QThreadPool_Contains(const QThreadPool* self, QThread* thread) {
    return self->contains(thread);
}

bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable) {
    return self->tryTake(runnable);
}

libqt_string QThreadPool_Tr2(const char* s, const char* c) {
    QString _ret = QThreadPool::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QThreadPool_Tr3(const char* s, const char* c, int n) {
    QString _ret = QThreadPool::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QThreadPool_Start2(QThreadPool* self, QRunnable* runnable, int priority) {
    self->start(runnable, static_cast<int>(priority));
}

bool QThreadPool_WaitForDone1(QThreadPool* self, int msecs) {
    return self->waitForDone(static_cast<int>(msecs));
}

// Derived class handler implementation
bool QThreadPool_Event(QThreadPool* self, QEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        return vqthreadpool->event(event);
    } else {
        return vqthreadpool->event(event);
    }
}

// Base class handler implementation
bool QThreadPool_QBaseEvent(QThreadPool* self, QEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_Event_IsBase(true);
        return vqthreadpool->event(event);
    } else {
        return vqthreadpool->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnEvent(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_Event_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QThreadPool_EventFilter(QThreadPool* self, QObject* watched, QEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        return vqthreadpool->eventFilter(watched, event);
    } else {
        return vqthreadpool->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QThreadPool_QBaseEventFilter(QThreadPool* self, QObject* watched, QEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_EventFilter_IsBase(true);
        return vqthreadpool->eventFilter(watched, event);
    } else {
        return vqthreadpool->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnEventFilter(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_EventFilter_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QThreadPool_TimerEvent(QThreadPool* self, QTimerEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->timerEvent(event);
    } else {
        vqthreadpool->timerEvent(event);
    }
}

// Base class handler implementation
void QThreadPool_QBaseTimerEvent(QThreadPool* self, QTimerEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_TimerEvent_IsBase(true);
        vqthreadpool->timerEvent(event);
    } else {
        vqthreadpool->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnTimerEvent(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_TimerEvent_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QThreadPool_ChildEvent(QThreadPool* self, QChildEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->childEvent(event);
    } else {
        vqthreadpool->childEvent(event);
    }
}

// Base class handler implementation
void QThreadPool_QBaseChildEvent(QThreadPool* self, QChildEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_ChildEvent_IsBase(true);
        vqthreadpool->childEvent(event);
    } else {
        vqthreadpool->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnChildEvent(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_ChildEvent_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QThreadPool_CustomEvent(QThreadPool* self, QEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->customEvent(event);
    } else {
        vqthreadpool->customEvent(event);
    }
}

// Base class handler implementation
void QThreadPool_QBaseCustomEvent(QThreadPool* self, QEvent* event) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_CustomEvent_IsBase(true);
        vqthreadpool->customEvent(event);
    } else {
        vqthreadpool->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnCustomEvent(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_CustomEvent_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QThreadPool_ConnectNotify(QThreadPool* self, QMetaMethod* signal) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->connectNotify(*signal);
    } else {
        vqthreadpool->connectNotify(*signal);
    }
}

// Base class handler implementation
void QThreadPool_QBaseConnectNotify(QThreadPool* self, QMetaMethod* signal) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_ConnectNotify_IsBase(true);
        vqthreadpool->connectNotify(*signal);
    } else {
        vqthreadpool->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnConnectNotify(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_ConnectNotify_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QThreadPool_DisconnectNotify(QThreadPool* self, QMetaMethod* signal) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->disconnectNotify(*signal);
    } else {
        vqthreadpool->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QThreadPool_QBaseDisconnectNotify(QThreadPool* self, QMetaMethod* signal) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_DisconnectNotify_IsBase(true);
        vqthreadpool->disconnectNotify(*signal);
    } else {
        vqthreadpool->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnDisconnectNotify(QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = dynamic_cast<VirtualQThreadPool*>(self)) {
        vqthreadpool->setQThreadPool_DisconnectNotify_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QThreadPool_Sender(const QThreadPool* self) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        return vqthreadpool->sender();
    } else {
        return vqthreadpool->sender();
    }
}

// Base class handler implementation
QObject* QThreadPool_QBaseSender(const QThreadPool* self) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        vqthreadpool->setQThreadPool_Sender_IsBase(true);
        return vqthreadpool->sender();
    } else {
        return vqthreadpool->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnSender(const QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        vqthreadpool->setQThreadPool_Sender_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QThreadPool_SenderSignalIndex(const QThreadPool* self) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        return vqthreadpool->senderSignalIndex();
    } else {
        return vqthreadpool->senderSignalIndex();
    }
}

// Base class handler implementation
int QThreadPool_QBaseSenderSignalIndex(const QThreadPool* self) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        vqthreadpool->setQThreadPool_SenderSignalIndex_IsBase(true);
        return vqthreadpool->senderSignalIndex();
    } else {
        return vqthreadpool->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnSenderSignalIndex(const QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        vqthreadpool->setQThreadPool_SenderSignalIndex_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QThreadPool_Receivers(const QThreadPool* self, const char* signal) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        return vqthreadpool->receivers(signal);
    } else {
        return vqthreadpool->receivers(signal);
    }
}

// Base class handler implementation
int QThreadPool_QBaseReceivers(const QThreadPool* self, const char* signal) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        vqthreadpool->setQThreadPool_Receivers_IsBase(true);
        return vqthreadpool->receivers(signal);
    } else {
        return vqthreadpool->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnReceivers(const QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        vqthreadpool->setQThreadPool_Receivers_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QThreadPool_IsSignalConnected(const QThreadPool* self, QMetaMethod* signal) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        return vqthreadpool->isSignalConnected(*signal);
    } else {
        return vqthreadpool->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QThreadPool_QBaseIsSignalConnected(const QThreadPool* self, QMetaMethod* signal) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        vqthreadpool->setQThreadPool_IsSignalConnected_IsBase(true);
        return vqthreadpool->isSignalConnected(*signal);
    } else {
        return vqthreadpool->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QThreadPool_OnIsSignalConnected(const QThreadPool* self, intptr_t slot) {
    if (auto* vqthreadpool = const_cast<VirtualQThreadPool*>(dynamic_cast<const VirtualQThreadPool*>(self))) {
        vqthreadpool->setQThreadPool_IsSignalConnected_Callback(reinterpret_cast<VirtualQThreadPool::QThreadPool_IsSignalConnected_Callback>(slot));
    }
}

void QThreadPool_Delete(QThreadPool* self) {
    delete self;
}
