#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QQmlWebChannel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWebChannel>
#include <QWebChannelAbstractTransport>
#include <qqmlwebchannel.h>
#include "libqqmlwebchannel.h"
#include "libqqmlwebchannel.hxx"

QQmlWebChannel* QQmlWebChannel_new() {
    return new VirtualQQmlWebChannel();
}

QQmlWebChannel* QQmlWebChannel_new2(QObject* parent) {
    return new VirtualQQmlWebChannel(parent);
}

QMetaObject* QQmlWebChannel_MetaObject(const QQmlWebChannel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlWebChannel_Metacast(QQmlWebChannel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlWebChannel_Metacall(QQmlWebChannel* self, int param1, int param2, void** param3) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QQmlWebChannel_OnMetacall(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_Metacall_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QQmlWebChannel_QBaseMetacall(QQmlWebChannel* self, int param1, int param2, void** param3) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_Metacall_IsBase(true);
        return vqqmlwebchannel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QQmlWebChannel_Tr(const char* s) {
    QString _ret = QQmlWebChannel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QQmlWebChannel_RegisterObjects(QQmlWebChannel* self, libqt_map /* of libqt_string to QVariant* */ objects) {
    QVariantMap objects_QMap;
    libqt_string* objects_karr = static_cast<libqt_string*>(objects.keys);
    QVariant** objects_varr = static_cast<QVariant**>(objects.values);
    for (size_t i = 0; i < objects.len; ++i) {
        QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
        objects_QMap[objects_karr_i_QString] = *(objects_varr[i]);
    }
    self->registerObjects(objects_QMap);
}

void QQmlWebChannel_ConnectTo(QQmlWebChannel* self, QObject* transport) {
    self->connectTo(transport);
}

void QQmlWebChannel_DisconnectFrom(QQmlWebChannel* self, QObject* transport) {
    self->disconnectFrom(transport);
}

libqt_string QQmlWebChannel_Tr2(const char* s, const char* c) {
    QString _ret = QQmlWebChannel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QQmlWebChannel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QQmlWebChannel::tr(s, c, static_cast<int>(n));
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
bool QQmlWebChannel_Event(QQmlWebChannel* self, QEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        return vqqmlwebchannel->event(event);
    } else {
        return vqqmlwebchannel->event(event);
    }
}

// Base class handler implementation
bool QQmlWebChannel_QBaseEvent(QQmlWebChannel* self, QEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_Event_IsBase(true);
        return vqqmlwebchannel->event(event);
    } else {
        return vqqmlwebchannel->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnEvent(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_Event_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QQmlWebChannel_EventFilter(QQmlWebChannel* self, QObject* watched, QEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        return vqqmlwebchannel->eventFilter(watched, event);
    } else {
        return vqqmlwebchannel->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlWebChannel_QBaseEventFilter(QQmlWebChannel* self, QObject* watched, QEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_EventFilter_IsBase(true);
        return vqqmlwebchannel->eventFilter(watched, event);
    } else {
        return vqqmlwebchannel->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnEventFilter(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_EventFilter_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QQmlWebChannel_TimerEvent(QQmlWebChannel* self, QTimerEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->timerEvent(event);
    } else {
        vqqmlwebchannel->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlWebChannel_QBaseTimerEvent(QQmlWebChannel* self, QTimerEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_TimerEvent_IsBase(true);
        vqqmlwebchannel->timerEvent(event);
    } else {
        vqqmlwebchannel->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnTimerEvent(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_TimerEvent_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QQmlWebChannel_ChildEvent(QQmlWebChannel* self, QChildEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->childEvent(event);
    } else {
        vqqmlwebchannel->childEvent(event);
    }
}

// Base class handler implementation
void QQmlWebChannel_QBaseChildEvent(QQmlWebChannel* self, QChildEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_ChildEvent_IsBase(true);
        vqqmlwebchannel->childEvent(event);
    } else {
        vqqmlwebchannel->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnChildEvent(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_ChildEvent_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QQmlWebChannel_CustomEvent(QQmlWebChannel* self, QEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->customEvent(event);
    } else {
        vqqmlwebchannel->customEvent(event);
    }
}

// Base class handler implementation
void QQmlWebChannel_QBaseCustomEvent(QQmlWebChannel* self, QEvent* event) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_CustomEvent_IsBase(true);
        vqqmlwebchannel->customEvent(event);
    } else {
        vqqmlwebchannel->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnCustomEvent(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_CustomEvent_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QQmlWebChannel_ConnectNotify(QQmlWebChannel* self, QMetaMethod* signal) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->connectNotify(*signal);
    } else {
        vqqmlwebchannel->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlWebChannel_QBaseConnectNotify(QQmlWebChannel* self, QMetaMethod* signal) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_ConnectNotify_IsBase(true);
        vqqmlwebchannel->connectNotify(*signal);
    } else {
        vqqmlwebchannel->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnConnectNotify(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QQmlWebChannel_DisconnectNotify(QQmlWebChannel* self, QMetaMethod* signal) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->disconnectNotify(*signal);
    } else {
        vqqmlwebchannel->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlWebChannel_QBaseDisconnectNotify(QQmlWebChannel* self, QMetaMethod* signal) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_DisconnectNotify_IsBase(true);
        vqqmlwebchannel->disconnectNotify(*signal);
    } else {
        vqqmlwebchannel->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnDisconnectNotify(QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = dynamic_cast<VirtualQQmlWebChannel*>(self)) {
        vqqmlwebchannel->setQQmlWebChannel_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QQmlWebChannel_Sender(const QQmlWebChannel* self) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        return vqqmlwebchannel->sender();
    } else {
        return vqqmlwebchannel->sender();
    }
}

// Base class handler implementation
QObject* QQmlWebChannel_QBaseSender(const QQmlWebChannel* self) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        vqqmlwebchannel->setQQmlWebChannel_Sender_IsBase(true);
        return vqqmlwebchannel->sender();
    } else {
        return vqqmlwebchannel->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnSender(const QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        vqqmlwebchannel->setQQmlWebChannel_Sender_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QQmlWebChannel_SenderSignalIndex(const QQmlWebChannel* self) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        return vqqmlwebchannel->senderSignalIndex();
    } else {
        return vqqmlwebchannel->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlWebChannel_QBaseSenderSignalIndex(const QQmlWebChannel* self) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        vqqmlwebchannel->setQQmlWebChannel_SenderSignalIndex_IsBase(true);
        return vqqmlwebchannel->senderSignalIndex();
    } else {
        return vqqmlwebchannel->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnSenderSignalIndex(const QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        vqqmlwebchannel->setQQmlWebChannel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QQmlWebChannel_Receivers(const QQmlWebChannel* self, const char* signal) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        return vqqmlwebchannel->receivers(signal);
    } else {
        return vqqmlwebchannel->receivers(signal);
    }
}

// Base class handler implementation
int QQmlWebChannel_QBaseReceivers(const QQmlWebChannel* self, const char* signal) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        vqqmlwebchannel->setQQmlWebChannel_Receivers_IsBase(true);
        return vqqmlwebchannel->receivers(signal);
    } else {
        return vqqmlwebchannel->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnReceivers(const QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        vqqmlwebchannel->setQQmlWebChannel_Receivers_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QQmlWebChannel_IsSignalConnected(const QQmlWebChannel* self, QMetaMethod* signal) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        return vqqmlwebchannel->isSignalConnected(*signal);
    } else {
        return vqqmlwebchannel->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlWebChannel_QBaseIsSignalConnected(const QQmlWebChannel* self, QMetaMethod* signal) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        vqqmlwebchannel->setQQmlWebChannel_IsSignalConnected_IsBase(true);
        return vqqmlwebchannel->isSignalConnected(*signal);
    } else {
        return vqqmlwebchannel->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlWebChannel_OnIsSignalConnected(const QQmlWebChannel* self, intptr_t slot) {
    if (auto* vqqmlwebchannel = const_cast<VirtualQQmlWebChannel*>(dynamic_cast<const VirtualQQmlWebChannel*>(self))) {
        vqqmlwebchannel->setQQmlWebChannel_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlWebChannel::QQmlWebChannel_IsSignalConnected_Callback>(slot));
    }
}

void QQmlWebChannel_Delete(QQmlWebChannel* self) {
    delete self;
}
