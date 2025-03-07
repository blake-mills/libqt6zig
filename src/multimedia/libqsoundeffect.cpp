#include <QAnyStringView>
#include <QAudioDevice>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QSoundEffect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qsoundeffect.h>
#include "libqsoundeffect.h"
#include "libqsoundeffect.hxx"

QSoundEffect* QSoundEffect_new() {
    return new VirtualQSoundEffect();
}

QSoundEffect* QSoundEffect_new2(QAudioDevice* audioDevice) {
    return new VirtualQSoundEffect(*audioDevice);
}

QSoundEffect* QSoundEffect_new3(QObject* parent) {
    return new VirtualQSoundEffect(parent);
}

QSoundEffect* QSoundEffect_new4(QAudioDevice* audioDevice, QObject* parent) {
    return new VirtualQSoundEffect(*audioDevice, parent);
}

QMetaObject* QSoundEffect_MetaObject(const QSoundEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSoundEffect_Metacast(QSoundEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSoundEffect_Metacall(QSoundEffect* self, int param1, int param2, void** param3) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSoundEffect_OnMetacall(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_Metacall_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSoundEffect_QBaseMetacall(QSoundEffect* self, int param1, int param2, void** param3) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_Metacall_IsBase(true);
        return vqsoundeffect->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSoundEffect_Tr(const char* s) {
    QString _ret = QSoundEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QSoundEffect_SupportedMimeTypes() {
    QStringList _ret = QSoundEffect::supportedMimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QUrl* QSoundEffect_Source(const QSoundEffect* self) {
    return new QUrl(self->source());
}

void QSoundEffect_SetSource(QSoundEffect* self, QUrl* url) {
    self->setSource(*url);
}

int QSoundEffect_LoopCount(const QSoundEffect* self) {
    return self->loopCount();
}

int QSoundEffect_LoopsRemaining(const QSoundEffect* self) {
    return self->loopsRemaining();
}

void QSoundEffect_SetLoopCount(QSoundEffect* self, int loopCount) {
    self->setLoopCount(static_cast<int>(loopCount));
}

QAudioDevice* QSoundEffect_AudioDevice(QSoundEffect* self) {
    return new QAudioDevice(self->audioDevice());
}

void QSoundEffect_SetAudioDevice(QSoundEffect* self, QAudioDevice* device) {
    self->setAudioDevice(*device);
}

float QSoundEffect_Volume(const QSoundEffect* self) {
    return self->volume();
}

void QSoundEffect_SetVolume(QSoundEffect* self, float volume) {
    self->setVolume(static_cast<float>(volume));
}

bool QSoundEffect_IsMuted(const QSoundEffect* self) {
    return self->isMuted();
}

void QSoundEffect_SetMuted(QSoundEffect* self, bool muted) {
    self->setMuted(muted);
}

bool QSoundEffect_IsLoaded(const QSoundEffect* self) {
    return self->isLoaded();
}

bool QSoundEffect_IsPlaying(const QSoundEffect* self) {
    return self->isPlaying();
}

int QSoundEffect_Status(const QSoundEffect* self) {
    return static_cast<int>(self->status());
}

void QSoundEffect_SourceChanged(QSoundEffect* self) {
    self->sourceChanged();
}

void QSoundEffect_Connect_SourceChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::sourceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSoundEffect_LoopCountChanged(QSoundEffect* self) {
    self->loopCountChanged();
}

void QSoundEffect_Connect_LoopCountChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::loopCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSoundEffect_LoopsRemainingChanged(QSoundEffect* self) {
    self->loopsRemainingChanged();
}

void QSoundEffect_Connect_LoopsRemainingChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::loopsRemainingChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSoundEffect_VolumeChanged(QSoundEffect* self) {
    self->volumeChanged();
}

void QSoundEffect_Connect_VolumeChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::volumeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSoundEffect_MutedChanged(QSoundEffect* self) {
    self->mutedChanged();
}

void QSoundEffect_Connect_MutedChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::mutedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSoundEffect_LoadedChanged(QSoundEffect* self) {
    self->loadedChanged();
}

void QSoundEffect_Connect_LoadedChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::loadedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSoundEffect_PlayingChanged(QSoundEffect* self) {
    self->playingChanged();
}

void QSoundEffect_Connect_PlayingChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::playingChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSoundEffect_StatusChanged(QSoundEffect* self) {
    self->statusChanged();
}

void QSoundEffect_Connect_StatusChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::statusChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSoundEffect_AudioDeviceChanged(QSoundEffect* self) {
    self->audioDeviceChanged();
}

void QSoundEffect_Connect_AudioDeviceChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self, &QSoundEffect::audioDeviceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSoundEffect_Play(QSoundEffect* self) {
    self->play();
}

void QSoundEffect_Stop(QSoundEffect* self) {
    self->stop();
}

libqt_string QSoundEffect_Tr2(const char* s, const char* c) {
    QString _ret = QSoundEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSoundEffect_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSoundEffect::tr(s, c, static_cast<int>(n));
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
bool QSoundEffect_Event(QSoundEffect* self, QEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        return vqsoundeffect->event(event);
    } else {
        return vqsoundeffect->event(event);
    }
}

// Base class handler implementation
bool QSoundEffect_QBaseEvent(QSoundEffect* self, QEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_Event_IsBase(true);
        return vqsoundeffect->event(event);
    } else {
        return vqsoundeffect->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnEvent(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_Event_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSoundEffect_EventFilter(QSoundEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        return vqsoundeffect->eventFilter(watched, event);
    } else {
        return vqsoundeffect->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSoundEffect_QBaseEventFilter(QSoundEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_EventFilter_IsBase(true);
        return vqsoundeffect->eventFilter(watched, event);
    } else {
        return vqsoundeffect->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnEventFilter(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_EventFilter_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSoundEffect_TimerEvent(QSoundEffect* self, QTimerEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->timerEvent(event);
    } else {
        vqsoundeffect->timerEvent(event);
    }
}

// Base class handler implementation
void QSoundEffect_QBaseTimerEvent(QSoundEffect* self, QTimerEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_TimerEvent_IsBase(true);
        vqsoundeffect->timerEvent(event);
    } else {
        vqsoundeffect->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnTimerEvent(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_TimerEvent_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSoundEffect_ChildEvent(QSoundEffect* self, QChildEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->childEvent(event);
    } else {
        vqsoundeffect->childEvent(event);
    }
}

// Base class handler implementation
void QSoundEffect_QBaseChildEvent(QSoundEffect* self, QChildEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_ChildEvent_IsBase(true);
        vqsoundeffect->childEvent(event);
    } else {
        vqsoundeffect->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnChildEvent(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_ChildEvent_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSoundEffect_CustomEvent(QSoundEffect* self, QEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->customEvent(event);
    } else {
        vqsoundeffect->customEvent(event);
    }
}

// Base class handler implementation
void QSoundEffect_QBaseCustomEvent(QSoundEffect* self, QEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_CustomEvent_IsBase(true);
        vqsoundeffect->customEvent(event);
    } else {
        vqsoundeffect->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnCustomEvent(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_CustomEvent_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSoundEffect_ConnectNotify(QSoundEffect* self, QMetaMethod* signal) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->connectNotify(*signal);
    } else {
        vqsoundeffect->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSoundEffect_QBaseConnectNotify(QSoundEffect* self, QMetaMethod* signal) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_ConnectNotify_IsBase(true);
        vqsoundeffect->connectNotify(*signal);
    } else {
        vqsoundeffect->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnConnectNotify(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_ConnectNotify_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSoundEffect_DisconnectNotify(QSoundEffect* self, QMetaMethod* signal) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->disconnectNotify(*signal);
    } else {
        vqsoundeffect->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSoundEffect_QBaseDisconnectNotify(QSoundEffect* self, QMetaMethod* signal) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_DisconnectNotify_IsBase(true);
        vqsoundeffect->disconnectNotify(*signal);
    } else {
        vqsoundeffect->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnDisconnectNotify(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->setQSoundEffect_DisconnectNotify_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSoundEffect_Sender(const QSoundEffect* self) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        return vqsoundeffect->sender();
    } else {
        return vqsoundeffect->sender();
    }
}

// Base class handler implementation
QObject* QSoundEffect_QBaseSender(const QSoundEffect* self) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        vqsoundeffect->setQSoundEffect_Sender_IsBase(true);
        return vqsoundeffect->sender();
    } else {
        return vqsoundeffect->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnSender(const QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        vqsoundeffect->setQSoundEffect_Sender_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSoundEffect_SenderSignalIndex(const QSoundEffect* self) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        return vqsoundeffect->senderSignalIndex();
    } else {
        return vqsoundeffect->senderSignalIndex();
    }
}

// Base class handler implementation
int QSoundEffect_QBaseSenderSignalIndex(const QSoundEffect* self) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        vqsoundeffect->setQSoundEffect_SenderSignalIndex_IsBase(true);
        return vqsoundeffect->senderSignalIndex();
    } else {
        return vqsoundeffect->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnSenderSignalIndex(const QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        vqsoundeffect->setQSoundEffect_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSoundEffect_Receivers(const QSoundEffect* self, const char* signal) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        return vqsoundeffect->receivers(signal);
    } else {
        return vqsoundeffect->receivers(signal);
    }
}

// Base class handler implementation
int QSoundEffect_QBaseReceivers(const QSoundEffect* self, const char* signal) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        vqsoundeffect->setQSoundEffect_Receivers_IsBase(true);
        return vqsoundeffect->receivers(signal);
    } else {
        return vqsoundeffect->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnReceivers(const QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        vqsoundeffect->setQSoundEffect_Receivers_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSoundEffect_IsSignalConnected(const QSoundEffect* self, QMetaMethod* signal) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        return vqsoundeffect->isSignalConnected(*signal);
    } else {
        return vqsoundeffect->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSoundEffect_QBaseIsSignalConnected(const QSoundEffect* self, QMetaMethod* signal) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        vqsoundeffect->setQSoundEffect_IsSignalConnected_IsBase(true);
        return vqsoundeffect->isSignalConnected(*signal);
    } else {
        return vqsoundeffect->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnIsSignalConnected(const QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        vqsoundeffect->setQSoundEffect_IsSignalConnected_Callback(reinterpret_cast<VirtualQSoundEffect::QSoundEffect_IsSignalConnected_Callback>(slot));
    }
}

void QSoundEffect_Delete(QSoundEffect* self) {
    delete self;
}
