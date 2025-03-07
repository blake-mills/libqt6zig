#include <QAnyStringView>
#include <QAudioDevice>
#include <QAudioInput>
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
#include <qaudioinput.h>
#include "libqaudioinput.h"
#include "libqaudioinput.hxx"

QAudioInput* QAudioInput_new() {
    return new VirtualQAudioInput();
}

QAudioInput* QAudioInput_new2(QAudioDevice* deviceInfo) {
    return new VirtualQAudioInput(*deviceInfo);
}

QAudioInput* QAudioInput_new3(QObject* parent) {
    return new VirtualQAudioInput(parent);
}

QAudioInput* QAudioInput_new4(QAudioDevice* deviceInfo, QObject* parent) {
    return new VirtualQAudioInput(*deviceInfo, parent);
}

QMetaObject* QAudioInput_MetaObject(const QAudioInput* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioInput_Metacast(QAudioInput* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioInput_Metacall(QAudioInput* self, int param1, int param2, void** param3) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAudioInput_OnMetacall(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_Metacall_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAudioInput_QBaseMetacall(QAudioInput* self, int param1, int param2, void** param3) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_Metacall_IsBase(true);
        return vqaudioinput->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAudioInput_Tr(const char* s) {
    QString _ret = QAudioInput::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAudioDevice* QAudioInput_Device(const QAudioInput* self) {
    return new QAudioDevice(self->device());
}

float QAudioInput_Volume(const QAudioInput* self) {
    return self->volume();
}

bool QAudioInput_IsMuted(const QAudioInput* self) {
    return self->isMuted();
}

void QAudioInput_SetDevice(QAudioInput* self, QAudioDevice* device) {
    self->setDevice(*device);
}

void QAudioInput_SetVolume(QAudioInput* self, float volume) {
    self->setVolume(static_cast<float>(volume));
}

void QAudioInput_SetMuted(QAudioInput* self, bool muted) {
    self->setMuted(muted);
}

void QAudioInput_DeviceChanged(QAudioInput* self) {
    self->deviceChanged();
}

void QAudioInput_Connect_DeviceChanged(QAudioInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioInput*) = reinterpret_cast<void (*)(QAudioInput*)>(slot);
    QAudioInput::connect(self, &QAudioInput::deviceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioInput_VolumeChanged(QAudioInput* self, float volume) {
    self->volumeChanged(static_cast<float>(volume));
}

void QAudioInput_Connect_VolumeChanged(QAudioInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioInput*, float) = reinterpret_cast<void (*)(QAudioInput*, float)>(slot);
    QAudioInput::connect(self, &QAudioInput::volumeChanged, [self, slotFunc](float volume) {
        float sigval1 = volume;
        slotFunc(self, sigval1);
    });
}

void QAudioInput_MutedChanged(QAudioInput* self, bool muted) {
    self->mutedChanged(muted);
}

void QAudioInput_Connect_MutedChanged(QAudioInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioInput*, bool) = reinterpret_cast<void (*)(QAudioInput*, bool)>(slot);
    QAudioInput::connect(self, &QAudioInput::mutedChanged, [self, slotFunc](bool muted) {
        bool sigval1 = muted;
        slotFunc(self, sigval1);
    });
}

libqt_string QAudioInput_Tr2(const char* s, const char* c) {
    QString _ret = QAudioInput::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAudioInput_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAudioInput::tr(s, c, static_cast<int>(n));
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
bool QAudioInput_Event(QAudioInput* self, QEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        return vqaudioinput->event(event);
    } else {
        return vqaudioinput->event(event);
    }
}

// Base class handler implementation
bool QAudioInput_QBaseEvent(QAudioInput* self, QEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_Event_IsBase(true);
        return vqaudioinput->event(event);
    } else {
        return vqaudioinput->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnEvent(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_Event_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioInput_EventFilter(QAudioInput* self, QObject* watched, QEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        return vqaudioinput->eventFilter(watched, event);
    } else {
        return vqaudioinput->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioInput_QBaseEventFilter(QAudioInput* self, QObject* watched, QEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_EventFilter_IsBase(true);
        return vqaudioinput->eventFilter(watched, event);
    } else {
        return vqaudioinput->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnEventFilter(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_EventFilter_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioInput_TimerEvent(QAudioInput* self, QTimerEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->timerEvent(event);
    } else {
        vqaudioinput->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioInput_QBaseTimerEvent(QAudioInput* self, QTimerEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_TimerEvent_IsBase(true);
        vqaudioinput->timerEvent(event);
    } else {
        vqaudioinput->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnTimerEvent(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_TimerEvent_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioInput_ChildEvent(QAudioInput* self, QChildEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->childEvent(event);
    } else {
        vqaudioinput->childEvent(event);
    }
}

// Base class handler implementation
void QAudioInput_QBaseChildEvent(QAudioInput* self, QChildEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_ChildEvent_IsBase(true);
        vqaudioinput->childEvent(event);
    } else {
        vqaudioinput->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnChildEvent(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_ChildEvent_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioInput_CustomEvent(QAudioInput* self, QEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->customEvent(event);
    } else {
        vqaudioinput->customEvent(event);
    }
}

// Base class handler implementation
void QAudioInput_QBaseCustomEvent(QAudioInput* self, QEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_CustomEvent_IsBase(true);
        vqaudioinput->customEvent(event);
    } else {
        vqaudioinput->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnCustomEvent(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_CustomEvent_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioInput_ConnectNotify(QAudioInput* self, QMetaMethod* signal) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->connectNotify(*signal);
    } else {
        vqaudioinput->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioInput_QBaseConnectNotify(QAudioInput* self, QMetaMethod* signal) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_ConnectNotify_IsBase(true);
        vqaudioinput->connectNotify(*signal);
    } else {
        vqaudioinput->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnConnectNotify(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioInput_DisconnectNotify(QAudioInput* self, QMetaMethod* signal) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->disconnectNotify(*signal);
    } else {
        vqaudioinput->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioInput_QBaseDisconnectNotify(QAudioInput* self, QMetaMethod* signal) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_DisconnectNotify_IsBase(true);
        vqaudioinput->disconnectNotify(*signal);
    } else {
        vqaudioinput->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnDisconnectNotify(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->setQAudioInput_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioInput_Sender(const QAudioInput* self) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        return vqaudioinput->sender();
    } else {
        return vqaudioinput->sender();
    }
}

// Base class handler implementation
QObject* QAudioInput_QBaseSender(const QAudioInput* self) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        vqaudioinput->setQAudioInput_Sender_IsBase(true);
        return vqaudioinput->sender();
    } else {
        return vqaudioinput->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnSender(const QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        vqaudioinput->setQAudioInput_Sender_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioInput_SenderSignalIndex(const QAudioInput* self) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        return vqaudioinput->senderSignalIndex();
    } else {
        return vqaudioinput->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioInput_QBaseSenderSignalIndex(const QAudioInput* self) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        vqaudioinput->setQAudioInput_SenderSignalIndex_IsBase(true);
        return vqaudioinput->senderSignalIndex();
    } else {
        return vqaudioinput->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnSenderSignalIndex(const QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        vqaudioinput->setQAudioInput_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioInput_Receivers(const QAudioInput* self, const char* signal) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        return vqaudioinput->receivers(signal);
    } else {
        return vqaudioinput->receivers(signal);
    }
}

// Base class handler implementation
int QAudioInput_QBaseReceivers(const QAudioInput* self, const char* signal) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        vqaudioinput->setQAudioInput_Receivers_IsBase(true);
        return vqaudioinput->receivers(signal);
    } else {
        return vqaudioinput->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnReceivers(const QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        vqaudioinput->setQAudioInput_Receivers_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioInput_IsSignalConnected(const QAudioInput* self, QMetaMethod* signal) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        return vqaudioinput->isSignalConnected(*signal);
    } else {
        return vqaudioinput->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioInput_QBaseIsSignalConnected(const QAudioInput* self, QMetaMethod* signal) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        vqaudioinput->setQAudioInput_IsSignalConnected_IsBase(true);
        return vqaudioinput->isSignalConnected(*signal);
    } else {
        return vqaudioinput->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnIsSignalConnected(const QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        vqaudioinput->setQAudioInput_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioInput::QAudioInput_IsSignalConnected_Callback>(slot));
    }
}

void QAudioInput_Delete(QAudioInput* self) {
    delete self;
}
