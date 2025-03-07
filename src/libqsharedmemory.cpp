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
#include <QSharedMemory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qsharedmemory.h>
#include "libqsharedmemory.h"
#include "libqsharedmemory.hxx"

QSharedMemory* QSharedMemory_new() {
    return new VirtualQSharedMemory();
}

QSharedMemory* QSharedMemory_new2(libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new VirtualQSharedMemory(key_QString);
}

QSharedMemory* QSharedMemory_new3(QObject* parent) {
    return new VirtualQSharedMemory(parent);
}

QSharedMemory* QSharedMemory_new4(libqt_string key, QObject* parent) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new VirtualQSharedMemory(key_QString, parent);
}

QMetaObject* QSharedMemory_MetaObject(const QSharedMemory* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSharedMemory_Metacast(QSharedMemory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSharedMemory_Metacall(QSharedMemory* self, int param1, int param2, void** param3) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSharedMemory_OnMetacall(QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_Metacall_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSharedMemory_QBaseMetacall(QSharedMemory* self, int param1, int param2, void** param3) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_Metacall_IsBase(true);
        return vqsharedmemory->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSharedMemory_Tr(const char* s) {
    QString _ret = QSharedMemory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSharedMemory_SetKey(QSharedMemory* self, libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setKey(key_QString);
}

libqt_string QSharedMemory_Key(const QSharedMemory* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSharedMemory_SetNativeKey(QSharedMemory* self, libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setNativeKey(key_QString);
}

libqt_string QSharedMemory_NativeKey(const QSharedMemory* self) {
    QString _ret = self->nativeKey();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QSharedMemory_Create(QSharedMemory* self, ptrdiff_t size) {
    return self->create((qsizetype)(size));
}

ptrdiff_t QSharedMemory_Size(const QSharedMemory* self) {
    return static_cast<ptrdiff_t>(self->size());
}

bool QSharedMemory_Attach(QSharedMemory* self) {
    return self->attach();
}

bool QSharedMemory_IsAttached(const QSharedMemory* self) {
    return self->isAttached();
}

bool QSharedMemory_Detach(QSharedMemory* self) {
    return self->detach();
}

void* QSharedMemory_Data(QSharedMemory* self) {
    return self->data();
}

const void* QSharedMemory_ConstData(const QSharedMemory* self) {
    return (const void*)self->constData();
}

const void* QSharedMemory_Data2(const QSharedMemory* self) {
    return (const void*)self->data();
}

bool QSharedMemory_Lock(QSharedMemory* self) {
    return self->lock();
}

bool QSharedMemory_Unlock(QSharedMemory* self) {
    return self->unlock();
}

int QSharedMemory_Error(const QSharedMemory* self) {
    return static_cast<int>(self->error());
}

libqt_string QSharedMemory_ErrorString(const QSharedMemory* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSharedMemory_Tr2(const char* s, const char* c) {
    QString _ret = QSharedMemory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSharedMemory_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSharedMemory::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QSharedMemory_Create2(QSharedMemory* self, ptrdiff_t size, int mode) {
    return self->create((qsizetype)(size), static_cast<QSharedMemory::AccessMode>(mode));
}

bool QSharedMemory_Attach1(QSharedMemory* self, int mode) {
    return self->attach(static_cast<QSharedMemory::AccessMode>(mode));
}

// Derived class handler implementation
bool QSharedMemory_Event(QSharedMemory* self, QEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        return vqsharedmemory->event(event);
    } else {
        return vqsharedmemory->event(event);
    }
}

// Base class handler implementation
bool QSharedMemory_QBaseEvent(QSharedMemory* self, QEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_Event_IsBase(true);
        return vqsharedmemory->event(event);
    } else {
        return vqsharedmemory->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnEvent(QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_Event_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSharedMemory_EventFilter(QSharedMemory* self, QObject* watched, QEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        return vqsharedmemory->eventFilter(watched, event);
    } else {
        return vqsharedmemory->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSharedMemory_QBaseEventFilter(QSharedMemory* self, QObject* watched, QEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_EventFilter_IsBase(true);
        return vqsharedmemory->eventFilter(watched, event);
    } else {
        return vqsharedmemory->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnEventFilter(QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_EventFilter_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_TimerEvent(QSharedMemory* self, QTimerEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->timerEvent(event);
    } else {
        vqsharedmemory->timerEvent(event);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseTimerEvent(QSharedMemory* self, QTimerEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_TimerEvent_IsBase(true);
        vqsharedmemory->timerEvent(event);
    } else {
        vqsharedmemory->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnTimerEvent(QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_TimerEvent_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_ChildEvent(QSharedMemory* self, QChildEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->childEvent(event);
    } else {
        vqsharedmemory->childEvent(event);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseChildEvent(QSharedMemory* self, QChildEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_ChildEvent_IsBase(true);
        vqsharedmemory->childEvent(event);
    } else {
        vqsharedmemory->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnChildEvent(QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_ChildEvent_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_CustomEvent(QSharedMemory* self, QEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->customEvent(event);
    } else {
        vqsharedmemory->customEvent(event);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseCustomEvent(QSharedMemory* self, QEvent* event) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_CustomEvent_IsBase(true);
        vqsharedmemory->customEvent(event);
    } else {
        vqsharedmemory->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnCustomEvent(QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_CustomEvent_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_ConnectNotify(QSharedMemory* self, QMetaMethod* signal) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->connectNotify(*signal);
    } else {
        vqsharedmemory->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseConnectNotify(QSharedMemory* self, QMetaMethod* signal) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_ConnectNotify_IsBase(true);
        vqsharedmemory->connectNotify(*signal);
    } else {
        vqsharedmemory->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnConnectNotify(QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_ConnectNotify_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSharedMemory_DisconnectNotify(QSharedMemory* self, QMetaMethod* signal) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->disconnectNotify(*signal);
    } else {
        vqsharedmemory->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSharedMemory_QBaseDisconnectNotify(QSharedMemory* self, QMetaMethod* signal) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_DisconnectNotify_IsBase(true);
        vqsharedmemory->disconnectNotify(*signal);
    } else {
        vqsharedmemory->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnDisconnectNotify(QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = dynamic_cast<VirtualQSharedMemory*>(self)) {
        vqsharedmemory->setQSharedMemory_DisconnectNotify_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSharedMemory_Sender(const QSharedMemory* self) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        return vqsharedmemory->sender();
    } else {
        return vqsharedmemory->sender();
    }
}

// Base class handler implementation
QObject* QSharedMemory_QBaseSender(const QSharedMemory* self) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        vqsharedmemory->setQSharedMemory_Sender_IsBase(true);
        return vqsharedmemory->sender();
    } else {
        return vqsharedmemory->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnSender(const QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        vqsharedmemory->setQSharedMemory_Sender_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSharedMemory_SenderSignalIndex(const QSharedMemory* self) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        return vqsharedmemory->senderSignalIndex();
    } else {
        return vqsharedmemory->senderSignalIndex();
    }
}

// Base class handler implementation
int QSharedMemory_QBaseSenderSignalIndex(const QSharedMemory* self) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        vqsharedmemory->setQSharedMemory_SenderSignalIndex_IsBase(true);
        return vqsharedmemory->senderSignalIndex();
    } else {
        return vqsharedmemory->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnSenderSignalIndex(const QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        vqsharedmemory->setQSharedMemory_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSharedMemory_Receivers(const QSharedMemory* self, const char* signal) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        return vqsharedmemory->receivers(signal);
    } else {
        return vqsharedmemory->receivers(signal);
    }
}

// Base class handler implementation
int QSharedMemory_QBaseReceivers(const QSharedMemory* self, const char* signal) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        vqsharedmemory->setQSharedMemory_Receivers_IsBase(true);
        return vqsharedmemory->receivers(signal);
    } else {
        return vqsharedmemory->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnReceivers(const QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        vqsharedmemory->setQSharedMemory_Receivers_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSharedMemory_IsSignalConnected(const QSharedMemory* self, QMetaMethod* signal) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        return vqsharedmemory->isSignalConnected(*signal);
    } else {
        return vqsharedmemory->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSharedMemory_QBaseIsSignalConnected(const QSharedMemory* self, QMetaMethod* signal) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        vqsharedmemory->setQSharedMemory_IsSignalConnected_IsBase(true);
        return vqsharedmemory->isSignalConnected(*signal);
    } else {
        return vqsharedmemory->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSharedMemory_OnIsSignalConnected(const QSharedMemory* self, intptr_t slot) {
    if (auto* vqsharedmemory = const_cast<VirtualQSharedMemory*>(dynamic_cast<const VirtualQSharedMemory*>(self))) {
        vqsharedmemory->setQSharedMemory_IsSignalConnected_Callback(reinterpret_cast<VirtualQSharedMemory::QSharedMemory_IsSignalConnected_Callback>(slot));
    }
}

void QSharedMemory_Delete(QSharedMemory* self) {
    delete self;
}
