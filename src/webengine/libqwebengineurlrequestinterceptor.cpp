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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWebEngineUrlRequestInfo>
#include <QWebEngineUrlRequestInterceptor>
#include <qwebengineurlrequestinterceptor.h>
#include "libqwebengineurlrequestinterceptor.h"
#include "libqwebengineurlrequestinterceptor.hxx"

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new() {
    return new VirtualQWebEngineUrlRequestInterceptor();
}

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new2(QObject* p) {
    return new VirtualQWebEngineUrlRequestInterceptor(p);
}

QMetaObject* QWebEngineUrlRequestInterceptor_MetaObject(const QWebEngineUrlRequestInterceptor* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineUrlRequestInterceptor_Metacast(QWebEngineUrlRequestInterceptor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineUrlRequestInterceptor_Metacall(QWebEngineUrlRequestInterceptor* self, int param1, int param2, void** param3) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWebEngineUrlRequestInterceptor_OnMetacall(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Metacall_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWebEngineUrlRequestInterceptor_QBaseMetacall(QWebEngineUrlRequestInterceptor* self, int param1, int param2, void** param3) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Metacall_IsBase(true);
        return vqwebengineurlrequestinterceptor->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWebEngineUrlRequestInterceptor_Tr(const char* s) {
    QString _ret = QWebEngineUrlRequestInterceptor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineUrlRequestInterceptor_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineUrlRequestInterceptor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineUrlRequestInterceptor_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineUrlRequestInterceptor::tr(s, c, static_cast<int>(n));
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
void QWebEngineUrlRequestInterceptor_InterceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->interceptRequest(*info);
    } else {
        vqwebengineurlrequestinterceptor->interceptRequest(*info);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_QBaseInterceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_InterceptRequest_IsBase(true);
        vqwebengineurlrequestinterceptor->interceptRequest(*info);
    } else {
        vqwebengineurlrequestinterceptor->interceptRequest(*info);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnInterceptRequest(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_InterceptRequest_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_InterceptRequest_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineUrlRequestInterceptor_Event(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        return vqwebengineurlrequestinterceptor->event(event);
    } else {
        return vqwebengineurlrequestinterceptor->event(event);
    }
}

// Base class handler implementation
bool QWebEngineUrlRequestInterceptor_QBaseEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Event_IsBase(true);
        return vqwebengineurlrequestinterceptor->event(event);
    } else {
        return vqwebengineurlrequestinterceptor->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Event_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineUrlRequestInterceptor_EventFilter(QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        return vqwebengineurlrequestinterceptor->eventFilter(watched, event);
    } else {
        return vqwebengineurlrequestinterceptor->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebEngineUrlRequestInterceptor_QBaseEventFilter(QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_EventFilter_IsBase(true);
        return vqwebengineurlrequestinterceptor->eventFilter(watched, event);
    } else {
        return vqwebengineurlrequestinterceptor->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnEventFilter(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_EventFilter_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_TimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->timerEvent(event);
    } else {
        vqwebengineurlrequestinterceptor->timerEvent(event);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_QBaseTimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_TimerEvent_IsBase(true);
        vqwebengineurlrequestinterceptor->timerEvent(event);
    } else {
        vqwebengineurlrequestinterceptor->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnTimerEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_TimerEvent_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_ChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->childEvent(event);
    } else {
        vqwebengineurlrequestinterceptor->childEvent(event);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_QBaseChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_ChildEvent_IsBase(true);
        vqwebengineurlrequestinterceptor->childEvent(event);
    } else {
        vqwebengineurlrequestinterceptor->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnChildEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_ChildEvent_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_CustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->customEvent(event);
    } else {
        vqwebengineurlrequestinterceptor->customEvent(event);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_QBaseCustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_CustomEvent_IsBase(true);
        vqwebengineurlrequestinterceptor->customEvent(event);
    } else {
        vqwebengineurlrequestinterceptor->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnCustomEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_CustomEvent_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_ConnectNotify(QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->connectNotify(*signal);
    } else {
        vqwebengineurlrequestinterceptor->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_QBaseConnectNotify(QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_ConnectNotify_IsBase(true);
        vqwebengineurlrequestinterceptor->connectNotify(*signal);
    } else {
        vqwebengineurlrequestinterceptor->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnConnectNotify(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_ConnectNotify_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_DisconnectNotify(QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->disconnectNotify(*signal);
    } else {
        vqwebengineurlrequestinterceptor->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_QBaseDisconnectNotify(QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_DisconnectNotify_IsBase(true);
        vqwebengineurlrequestinterceptor->disconnectNotify(*signal);
    } else {
        vqwebengineurlrequestinterceptor->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnDisconnectNotify(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebEngineUrlRequestInterceptor_Sender(const QWebEngineUrlRequestInterceptor* self) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        return vqwebengineurlrequestinterceptor->sender();
    } else {
        return vqwebengineurlrequestinterceptor->sender();
    }
}

// Base class handler implementation
QObject* QWebEngineUrlRequestInterceptor_QBaseSender(const QWebEngineUrlRequestInterceptor* self) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Sender_IsBase(true);
        return vqwebengineurlrequestinterceptor->sender();
    } else {
        return vqwebengineurlrequestinterceptor->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnSender(const QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Sender_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineUrlRequestInterceptor_SenderSignalIndex(const QWebEngineUrlRequestInterceptor* self) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        return vqwebengineurlrequestinterceptor->senderSignalIndex();
    } else {
        return vqwebengineurlrequestinterceptor->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebEngineUrlRequestInterceptor_QBaseSenderSignalIndex(const QWebEngineUrlRequestInterceptor* self) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_SenderSignalIndex_IsBase(true);
        return vqwebengineurlrequestinterceptor->senderSignalIndex();
    } else {
        return vqwebengineurlrequestinterceptor->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnSenderSignalIndex(const QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineUrlRequestInterceptor_Receivers(const QWebEngineUrlRequestInterceptor* self, const char* signal) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        return vqwebengineurlrequestinterceptor->receivers(signal);
    } else {
        return vqwebengineurlrequestinterceptor->receivers(signal);
    }
}

// Base class handler implementation
int QWebEngineUrlRequestInterceptor_QBaseReceivers(const QWebEngineUrlRequestInterceptor* self, const char* signal) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Receivers_IsBase(true);
        return vqwebengineurlrequestinterceptor->receivers(signal);
    } else {
        return vqwebengineurlrequestinterceptor->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnReceivers(const QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Receivers_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineUrlRequestInterceptor_IsSignalConnected(const QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        return vqwebengineurlrequestinterceptor->isSignalConnected(*signal);
    } else {
        return vqwebengineurlrequestinterceptor->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebEngineUrlRequestInterceptor_QBaseIsSignalConnected(const QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_IsSignalConnected_IsBase(true);
        return vqwebengineurlrequestinterceptor->isSignalConnected(*signal);
    } else {
        return vqwebengineurlrequestinterceptor->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnIsSignalConnected(const QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_IsSignalConnected_Callback>(slot));
    }
}

void QWebEngineUrlRequestInterceptor_Delete(QWebEngineUrlRequestInterceptor* self) {
    delete self;
}
