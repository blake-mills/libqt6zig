#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QDtls>
#include <QDtlsClientVerifier>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDtlsClientVerifier__GeneratorParameters
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QUdpSocket>
#include <QVariant>
#include <qdtls.h>
#include "libqdtls.h"
#include "libqdtls.hxx"

QDtlsClientVerifier* QDtlsClientVerifier_new() {
    return new VirtualQDtlsClientVerifier();
}

QDtlsClientVerifier* QDtlsClientVerifier_new2(QObject* parent) {
    return new VirtualQDtlsClientVerifier(parent);
}

QMetaObject* QDtlsClientVerifier_MetaObject(const QDtlsClientVerifier* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDtlsClientVerifier_Metacast(QDtlsClientVerifier* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDtlsClientVerifier_Metacall(QDtlsClientVerifier* self, int param1, int param2, void** param3) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDtlsClientVerifier_OnMetacall(QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_Metacall_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDtlsClientVerifier_QBaseMetacall(QDtlsClientVerifier* self, int param1, int param2, void** param3) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_Metacall_IsBase(true);
        return vqdtlsclientverifier->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDtlsClientVerifier_Tr(const char* s) {
    QString _ret = QDtlsClientVerifier::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QDtlsClientVerifier_SetCookieGeneratorParameters(QDtlsClientVerifier* self, QDtlsClientVerifier__GeneratorParameters* params) {
    return self->setCookieGeneratorParameters(*params);
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier_CookieGeneratorParameters(const QDtlsClientVerifier* self) {
    return new QDtlsClientVerifier::GeneratorParameters(self->cookieGeneratorParameters());
}

bool QDtlsClientVerifier_VerifyClient(QDtlsClientVerifier* self, QUdpSocket* socket, libqt_string dgram, QHostAddress* address, uint16_t port) {
    QByteArray dgram_QByteArray(dgram.data, dgram.len);
    return self->verifyClient(socket, dgram_QByteArray, *address, static_cast<quint16>(port));
}

libqt_string QDtlsClientVerifier_VerifiedHello(const QDtlsClientVerifier* self) {
    QByteArray _qb = self->verifiedHello();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

unsigned char QDtlsClientVerifier_DtlsError(const QDtlsClientVerifier* self) {
    return static_cast<unsigned char>(self->dtlsError());
}

libqt_string QDtlsClientVerifier_DtlsErrorString(const QDtlsClientVerifier* self) {
    QString _ret = self->dtlsErrorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDtlsClientVerifier_Tr2(const char* s, const char* c) {
    QString _ret = QDtlsClientVerifier::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDtlsClientVerifier_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDtlsClientVerifier::tr(s, c, static_cast<int>(n));
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
bool QDtlsClientVerifier_Event(QDtlsClientVerifier* self, QEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        return vqdtlsclientverifier->event(event);
    } else {
        return vqdtlsclientverifier->event(event);
    }
}

// Base class handler implementation
bool QDtlsClientVerifier_QBaseEvent(QDtlsClientVerifier* self, QEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_Event_IsBase(true);
        return vqdtlsclientverifier->event(event);
    } else {
        return vqdtlsclientverifier->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnEvent(QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_Event_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDtlsClientVerifier_EventFilter(QDtlsClientVerifier* self, QObject* watched, QEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        return vqdtlsclientverifier->eventFilter(watched, event);
    } else {
        return vqdtlsclientverifier->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDtlsClientVerifier_QBaseEventFilter(QDtlsClientVerifier* self, QObject* watched, QEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_EventFilter_IsBase(true);
        return vqdtlsclientverifier->eventFilter(watched, event);
    } else {
        return vqdtlsclientverifier->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnEventFilter(QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_EventFilter_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtlsClientVerifier_TimerEvent(QDtlsClientVerifier* self, QTimerEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->timerEvent(event);
    } else {
        vqdtlsclientverifier->timerEvent(event);
    }
}

// Base class handler implementation
void QDtlsClientVerifier_QBaseTimerEvent(QDtlsClientVerifier* self, QTimerEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_TimerEvent_IsBase(true);
        vqdtlsclientverifier->timerEvent(event);
    } else {
        vqdtlsclientverifier->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnTimerEvent(QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_TimerEvent_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtlsClientVerifier_ChildEvent(QDtlsClientVerifier* self, QChildEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->childEvent(event);
    } else {
        vqdtlsclientverifier->childEvent(event);
    }
}

// Base class handler implementation
void QDtlsClientVerifier_QBaseChildEvent(QDtlsClientVerifier* self, QChildEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_ChildEvent_IsBase(true);
        vqdtlsclientverifier->childEvent(event);
    } else {
        vqdtlsclientverifier->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnChildEvent(QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_ChildEvent_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtlsClientVerifier_CustomEvent(QDtlsClientVerifier* self, QEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->customEvent(event);
    } else {
        vqdtlsclientverifier->customEvent(event);
    }
}

// Base class handler implementation
void QDtlsClientVerifier_QBaseCustomEvent(QDtlsClientVerifier* self, QEvent* event) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_CustomEvent_IsBase(true);
        vqdtlsclientverifier->customEvent(event);
    } else {
        vqdtlsclientverifier->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnCustomEvent(QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_CustomEvent_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtlsClientVerifier_ConnectNotify(QDtlsClientVerifier* self, QMetaMethod* signal) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->connectNotify(*signal);
    } else {
        vqdtlsclientverifier->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDtlsClientVerifier_QBaseConnectNotify(QDtlsClientVerifier* self, QMetaMethod* signal) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_ConnectNotify_IsBase(true);
        vqdtlsclientverifier->connectNotify(*signal);
    } else {
        vqdtlsclientverifier->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnConnectNotify(QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_ConnectNotify_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtlsClientVerifier_DisconnectNotify(QDtlsClientVerifier* self, QMetaMethod* signal) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->disconnectNotify(*signal);
    } else {
        vqdtlsclientverifier->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDtlsClientVerifier_QBaseDisconnectNotify(QDtlsClientVerifier* self, QMetaMethod* signal) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_DisconnectNotify_IsBase(true);
        vqdtlsclientverifier->disconnectNotify(*signal);
    } else {
        vqdtlsclientverifier->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnDisconnectNotify(QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = dynamic_cast<VirtualQDtlsClientVerifier*>(self)) {
        vqdtlsclientverifier->setQDtlsClientVerifier_DisconnectNotify_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDtlsClientVerifier_Sender(const QDtlsClientVerifier* self) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        return vqdtlsclientverifier->sender();
    } else {
        return vqdtlsclientverifier->sender();
    }
}

// Base class handler implementation
QObject* QDtlsClientVerifier_QBaseSender(const QDtlsClientVerifier* self) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        vqdtlsclientverifier->setQDtlsClientVerifier_Sender_IsBase(true);
        return vqdtlsclientverifier->sender();
    } else {
        return vqdtlsclientverifier->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnSender(const QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        vqdtlsclientverifier->setQDtlsClientVerifier_Sender_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDtlsClientVerifier_SenderSignalIndex(const QDtlsClientVerifier* self) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        return vqdtlsclientverifier->senderSignalIndex();
    } else {
        return vqdtlsclientverifier->senderSignalIndex();
    }
}

// Base class handler implementation
int QDtlsClientVerifier_QBaseSenderSignalIndex(const QDtlsClientVerifier* self) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        vqdtlsclientverifier->setQDtlsClientVerifier_SenderSignalIndex_IsBase(true);
        return vqdtlsclientverifier->senderSignalIndex();
    } else {
        return vqdtlsclientverifier->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnSenderSignalIndex(const QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        vqdtlsclientverifier->setQDtlsClientVerifier_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDtlsClientVerifier_Receivers(const QDtlsClientVerifier* self, const char* signal) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        return vqdtlsclientverifier->receivers(signal);
    } else {
        return vqdtlsclientverifier->receivers(signal);
    }
}

// Base class handler implementation
int QDtlsClientVerifier_QBaseReceivers(const QDtlsClientVerifier* self, const char* signal) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        vqdtlsclientverifier->setQDtlsClientVerifier_Receivers_IsBase(true);
        return vqdtlsclientverifier->receivers(signal);
    } else {
        return vqdtlsclientverifier->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnReceivers(const QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        vqdtlsclientverifier->setQDtlsClientVerifier_Receivers_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDtlsClientVerifier_IsSignalConnected(const QDtlsClientVerifier* self, QMetaMethod* signal) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        return vqdtlsclientverifier->isSignalConnected(*signal);
    } else {
        return vqdtlsclientverifier->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDtlsClientVerifier_QBaseIsSignalConnected(const QDtlsClientVerifier* self, QMetaMethod* signal) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        vqdtlsclientverifier->setQDtlsClientVerifier_IsSignalConnected_IsBase(true);
        return vqdtlsclientverifier->isSignalConnected(*signal);
    } else {
        return vqdtlsclientverifier->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtlsClientVerifier_OnIsSignalConnected(const QDtlsClientVerifier* self, intptr_t slot) {
    if (auto* vqdtlsclientverifier = const_cast<VirtualQDtlsClientVerifier*>(dynamic_cast<const VirtualQDtlsClientVerifier*>(self))) {
        vqdtlsclientverifier->setQDtlsClientVerifier_IsSignalConnected_Callback(reinterpret_cast<VirtualQDtlsClientVerifier::QDtlsClientVerifier_IsSignalConnected_Callback>(slot));
    }
}

void QDtlsClientVerifier_Delete(QDtlsClientVerifier* self) {
    delete self;
}

QDtls* QDtls_new(int mode) {
    return new VirtualQDtls(static_cast<QSslSocket::SslMode>(mode));
}

QDtls* QDtls_new2(int mode, QObject* parent) {
    return new VirtualQDtls(static_cast<QSslSocket::SslMode>(mode), parent);
}

QMetaObject* QDtls_MetaObject(const QDtls* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDtls_Metacast(QDtls* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDtls_Metacall(QDtls* self, int param1, int param2, void** param3) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDtls_OnMetacall(QDtls* self, intptr_t slot) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_Metacall_Callback(reinterpret_cast<VirtualQDtls::QDtls_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDtls_QBaseMetacall(QDtls* self, int param1, int param2, void** param3) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_Metacall_IsBase(true);
        return vqdtls->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDtls_Tr(const char* s) {
    QString _ret = QDtls::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QDtls_SetPeer(QDtls* self, QHostAddress* address, uint16_t port) {
    return self->setPeer(*address, static_cast<quint16>(port));
}

bool QDtls_SetPeerVerificationName(QDtls* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setPeerVerificationName(name_QString);
}

QHostAddress* QDtls_PeerAddress(const QDtls* self) {
    return new QHostAddress(self->peerAddress());
}

uint16_t QDtls_PeerPort(const QDtls* self) {
    return static_cast<uint16_t>(self->peerPort());
}

libqt_string QDtls_PeerVerificationName(const QDtls* self) {
    QString _ret = self->peerVerificationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QDtls_SslMode(const QDtls* self) {
    return static_cast<int>(self->sslMode());
}

void QDtls_SetMtuHint(QDtls* self, uint16_t mtuHint) {
    self->setMtuHint(static_cast<quint16>(mtuHint));
}

uint16_t QDtls_MtuHint(const QDtls* self) {
    return static_cast<uint16_t>(self->mtuHint());
}

bool QDtls_SetCookieGeneratorParameters(QDtls* self, QDtlsClientVerifier__GeneratorParameters* params) {
    return self->setCookieGeneratorParameters(*params);
}

QDtlsClientVerifier__GeneratorParameters* QDtls_CookieGeneratorParameters(const QDtls* self) {
    return new QDtlsClientVerifier::GeneratorParameters(self->cookieGeneratorParameters());
}

bool QDtls_SetDtlsConfiguration(QDtls* self, QSslConfiguration* configuration) {
    return self->setDtlsConfiguration(*configuration);
}

QSslConfiguration* QDtls_DtlsConfiguration(const QDtls* self) {
    return new QSslConfiguration(self->dtlsConfiguration());
}

int QDtls_HandshakeState(const QDtls* self) {
    return static_cast<int>(self->handshakeState());
}

bool QDtls_DoHandshake(QDtls* self, QUdpSocket* socket) {
    return self->doHandshake(socket);
}

bool QDtls_HandleTimeout(QDtls* self, QUdpSocket* socket) {
    return self->handleTimeout(socket);
}

bool QDtls_ResumeHandshake(QDtls* self, QUdpSocket* socket) {
    return self->resumeHandshake(socket);
}

bool QDtls_AbortHandshake(QDtls* self, QUdpSocket* socket) {
    return self->abortHandshake(socket);
}

bool QDtls_Shutdown(QDtls* self, QUdpSocket* socket) {
    return self->shutdown(socket);
}

bool QDtls_IsConnectionEncrypted(const QDtls* self) {
    return self->isConnectionEncrypted();
}

QSslCipher* QDtls_SessionCipher(const QDtls* self) {
    return new QSslCipher(self->sessionCipher());
}

int QDtls_SessionProtocol(const QDtls* self) {
    return static_cast<int>(self->sessionProtocol());
}

long long QDtls_WriteDatagramEncrypted(QDtls* self, QUdpSocket* socket, libqt_string dgram) {
    QByteArray dgram_QByteArray(dgram.data, dgram.len);
    return static_cast<long long>(self->writeDatagramEncrypted(socket, dgram_QByteArray));
}

libqt_string QDtls_DecryptDatagram(QDtls* self, QUdpSocket* socket, libqt_string dgram) {
    QByteArray dgram_QByteArray(dgram.data, dgram.len);
    QByteArray _qb = self->decryptDatagram(socket, dgram_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

unsigned char QDtls_DtlsError(const QDtls* self) {
    return static_cast<unsigned char>(self->dtlsError());
}

libqt_string QDtls_DtlsErrorString(const QDtls* self) {
    QString _ret = self->dtlsErrorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of QSslError* */ QDtls_PeerVerificationErrors(const QDtls* self) {
    QList<QSslError> _ret = self->peerVerificationErrors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QSslError(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDtls_IgnoreVerificationErrors(QDtls* self, libqt_list /* of QSslError* */ errorsToIgnore) {
    QList<QSslError> errorsToIgnore_QList;
    errorsToIgnore_QList.reserve(errorsToIgnore.len);
    QSslError** errorsToIgnore_arr = static_cast<QSslError**>(errorsToIgnore.data);
    for (size_t i = 0; i < errorsToIgnore.len; ++i) {
        errorsToIgnore_QList.push_back(*(errorsToIgnore_arr[i]));
    }
    self->ignoreVerificationErrors(errorsToIgnore_QList);
}

void QDtls_PskRequired(QDtls* self, QSslPreSharedKeyAuthenticator* authenticator) {
    self->pskRequired(authenticator);
}

void QDtls_Connect_PskRequired(QDtls* self, intptr_t slot) {
    void (*slotFunc)(QDtls*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QDtls*, QSslPreSharedKeyAuthenticator*)>(slot);
    QDtls::connect(self, &QDtls::pskRequired, [self, slotFunc](QSslPreSharedKeyAuthenticator* authenticator) {
        QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
        slotFunc(self, sigval1);
    });
}

void QDtls_HandshakeTimeout(QDtls* self) {
    self->handshakeTimeout();
}

void QDtls_Connect_HandshakeTimeout(QDtls* self, intptr_t slot) {
    void (*slotFunc)(QDtls*) = reinterpret_cast<void (*)(QDtls*)>(slot);
    QDtls::connect(self, &QDtls::handshakeTimeout, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QDtls_Tr2(const char* s, const char* c) {
    QString _ret = QDtls::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDtls_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDtls::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QDtls_SetPeer3(QDtls* self, QHostAddress* address, uint16_t port, libqt_string verificationName) {
    QString verificationName_QString = QString::fromUtf8(verificationName.data, verificationName.len);
    return self->setPeer(*address, static_cast<quint16>(port), verificationName_QString);
}

bool QDtls_DoHandshake2(QDtls* self, QUdpSocket* socket, libqt_string dgram) {
    QByteArray dgram_QByteArray(dgram.data, dgram.len);
    return self->doHandshake(socket, dgram_QByteArray);
}

// Derived class handler implementation
bool QDtls_Event(QDtls* self, QEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        return vqdtls->event(event);
    } else {
        return vqdtls->event(event);
    }
}

// Base class handler implementation
bool QDtls_QBaseEvent(QDtls* self, QEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_Event_IsBase(true);
        return vqdtls->event(event);
    } else {
        return vqdtls->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnEvent(QDtls* self, intptr_t slot) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_Event_Callback(reinterpret_cast<VirtualQDtls::QDtls_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDtls_EventFilter(QDtls* self, QObject* watched, QEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        return vqdtls->eventFilter(watched, event);
    } else {
        return vqdtls->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDtls_QBaseEventFilter(QDtls* self, QObject* watched, QEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_EventFilter_IsBase(true);
        return vqdtls->eventFilter(watched, event);
    } else {
        return vqdtls->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnEventFilter(QDtls* self, intptr_t slot) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_EventFilter_Callback(reinterpret_cast<VirtualQDtls::QDtls_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtls_TimerEvent(QDtls* self, QTimerEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->timerEvent(event);
    } else {
        vqdtls->timerEvent(event);
    }
}

// Base class handler implementation
void QDtls_QBaseTimerEvent(QDtls* self, QTimerEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_TimerEvent_IsBase(true);
        vqdtls->timerEvent(event);
    } else {
        vqdtls->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnTimerEvent(QDtls* self, intptr_t slot) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_TimerEvent_Callback(reinterpret_cast<VirtualQDtls::QDtls_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtls_ChildEvent(QDtls* self, QChildEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->childEvent(event);
    } else {
        vqdtls->childEvent(event);
    }
}

// Base class handler implementation
void QDtls_QBaseChildEvent(QDtls* self, QChildEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_ChildEvent_IsBase(true);
        vqdtls->childEvent(event);
    } else {
        vqdtls->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnChildEvent(QDtls* self, intptr_t slot) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_ChildEvent_Callback(reinterpret_cast<VirtualQDtls::QDtls_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtls_CustomEvent(QDtls* self, QEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->customEvent(event);
    } else {
        vqdtls->customEvent(event);
    }
}

// Base class handler implementation
void QDtls_QBaseCustomEvent(QDtls* self, QEvent* event) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_CustomEvent_IsBase(true);
        vqdtls->customEvent(event);
    } else {
        vqdtls->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnCustomEvent(QDtls* self, intptr_t slot) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_CustomEvent_Callback(reinterpret_cast<VirtualQDtls::QDtls_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtls_ConnectNotify(QDtls* self, QMetaMethod* signal) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->connectNotify(*signal);
    } else {
        vqdtls->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDtls_QBaseConnectNotify(QDtls* self, QMetaMethod* signal) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_ConnectNotify_IsBase(true);
        vqdtls->connectNotify(*signal);
    } else {
        vqdtls->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnConnectNotify(QDtls* self, intptr_t slot) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_ConnectNotify_Callback(reinterpret_cast<VirtualQDtls::QDtls_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDtls_DisconnectNotify(QDtls* self, QMetaMethod* signal) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->disconnectNotify(*signal);
    } else {
        vqdtls->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDtls_QBaseDisconnectNotify(QDtls* self, QMetaMethod* signal) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_DisconnectNotify_IsBase(true);
        vqdtls->disconnectNotify(*signal);
    } else {
        vqdtls->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnDisconnectNotify(QDtls* self, intptr_t slot) {
    if (auto* vqdtls = dynamic_cast<VirtualQDtls*>(self)) {
        vqdtls->setQDtls_DisconnectNotify_Callback(reinterpret_cast<VirtualQDtls::QDtls_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDtls_Sender(const QDtls* self) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        return vqdtls->sender();
    } else {
        return vqdtls->sender();
    }
}

// Base class handler implementation
QObject* QDtls_QBaseSender(const QDtls* self) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        vqdtls->setQDtls_Sender_IsBase(true);
        return vqdtls->sender();
    } else {
        return vqdtls->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnSender(const QDtls* self, intptr_t slot) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        vqdtls->setQDtls_Sender_Callback(reinterpret_cast<VirtualQDtls::QDtls_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDtls_SenderSignalIndex(const QDtls* self) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        return vqdtls->senderSignalIndex();
    } else {
        return vqdtls->senderSignalIndex();
    }
}

// Base class handler implementation
int QDtls_QBaseSenderSignalIndex(const QDtls* self) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        vqdtls->setQDtls_SenderSignalIndex_IsBase(true);
        return vqdtls->senderSignalIndex();
    } else {
        return vqdtls->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnSenderSignalIndex(const QDtls* self, intptr_t slot) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        vqdtls->setQDtls_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDtls::QDtls_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDtls_Receivers(const QDtls* self, const char* signal) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        return vqdtls->receivers(signal);
    } else {
        return vqdtls->receivers(signal);
    }
}

// Base class handler implementation
int QDtls_QBaseReceivers(const QDtls* self, const char* signal) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        vqdtls->setQDtls_Receivers_IsBase(true);
        return vqdtls->receivers(signal);
    } else {
        return vqdtls->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnReceivers(const QDtls* self, intptr_t slot) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        vqdtls->setQDtls_Receivers_Callback(reinterpret_cast<VirtualQDtls::QDtls_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDtls_IsSignalConnected(const QDtls* self, QMetaMethod* signal) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        return vqdtls->isSignalConnected(*signal);
    } else {
        return vqdtls->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDtls_QBaseIsSignalConnected(const QDtls* self, QMetaMethod* signal) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        vqdtls->setQDtls_IsSignalConnected_IsBase(true);
        return vqdtls->isSignalConnected(*signal);
    } else {
        return vqdtls->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDtls_OnIsSignalConnected(const QDtls* self, intptr_t slot) {
    if (auto* vqdtls = const_cast<VirtualQDtls*>(dynamic_cast<const VirtualQDtls*>(self))) {
        vqdtls->setQDtls_IsSignalConnected_Callback(reinterpret_cast<VirtualQDtls::QDtls_IsSignalConnected_Callback>(slot));
    }
}

void QDtls_Delete(QDtls* self) {
    delete self;
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new() {
    return new QDtlsClientVerifier::GeneratorParameters();
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new2(int a, libqt_string s) {
    QByteArray s_QByteArray(s.data, s.len);
    return new QDtlsClientVerifier::GeneratorParameters(static_cast<QCryptographicHash::Algorithm>(a), s_QByteArray);
}

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new3(QDtlsClientVerifier__GeneratorParameters* param1) {
    return new QDtlsClientVerifier::GeneratorParameters(*param1);
}

void QDtlsClientVerifier__GeneratorParameters_OperatorAssign(QDtlsClientVerifier__GeneratorParameters* self, QDtlsClientVerifier__GeneratorParameters* param1) {
    self->operator=(*param1);
}

void QDtlsClientVerifier__GeneratorParameters_Delete(QDtlsClientVerifier__GeneratorParameters* self) {
    delete self;
}
