#include <QAnyStringView>
#include <QAudioOutput>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMediaMetaData>
#include <QMediaPlayer>
#include <QMediaTimeRange>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QVideoSink>
#include <qmediaplayer.h>
#include "libqmediaplayer.h"
#include "libqmediaplayer.hxx"

QMediaPlayer* QMediaPlayer_new() {
    return new VirtualQMediaPlayer();
}

QMediaPlayer* QMediaPlayer_new2(QObject* parent) {
    return new VirtualQMediaPlayer(parent);
}

QMetaObject* QMediaPlayer_MetaObject(const QMediaPlayer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMediaPlayer_Metacast(QMediaPlayer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMediaPlayer_Metacall(QMediaPlayer* self, int param1, int param2, void** param3) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMediaPlayer_OnMetacall(QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_Metacall_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMediaPlayer_QBaseMetacall(QMediaPlayer* self, int param1, int param2, void** param3) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_Metacall_IsBase(true);
        return vqmediaplayer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMediaPlayer_Tr(const char* s) {
    QString _ret = QMediaPlayer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of QMediaMetaData* */ QMediaPlayer_AudioTracks(const QMediaPlayer* self) {
    QList<QMediaMetaData> _ret = self->audioTracks();
    // Convert QList<> from C++ memory to manually-managed C memory
    QMediaMetaData** _arr = static_cast<QMediaMetaData**>(malloc(sizeof(QMediaMetaData*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QMediaMetaData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QMediaMetaData* */ QMediaPlayer_VideoTracks(const QMediaPlayer* self) {
    QList<QMediaMetaData> _ret = self->videoTracks();
    // Convert QList<> from C++ memory to manually-managed C memory
    QMediaMetaData** _arr = static_cast<QMediaMetaData**>(malloc(sizeof(QMediaMetaData*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QMediaMetaData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QMediaMetaData* */ QMediaPlayer_SubtitleTracks(const QMediaPlayer* self) {
    QList<QMediaMetaData> _ret = self->subtitleTracks();
    // Convert QList<> from C++ memory to manually-managed C memory
    QMediaMetaData** _arr = static_cast<QMediaMetaData**>(malloc(sizeof(QMediaMetaData*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QMediaMetaData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QMediaPlayer_ActiveAudioTrack(const QMediaPlayer* self) {
    return self->activeAudioTrack();
}

int QMediaPlayer_ActiveVideoTrack(const QMediaPlayer* self) {
    return self->activeVideoTrack();
}

int QMediaPlayer_ActiveSubtitleTrack(const QMediaPlayer* self) {
    return self->activeSubtitleTrack();
}

void QMediaPlayer_SetActiveAudioTrack(QMediaPlayer* self, int index) {
    self->setActiveAudioTrack(static_cast<int>(index));
}

void QMediaPlayer_SetActiveVideoTrack(QMediaPlayer* self, int index) {
    self->setActiveVideoTrack(static_cast<int>(index));
}

void QMediaPlayer_SetActiveSubtitleTrack(QMediaPlayer* self, int index) {
    self->setActiveSubtitleTrack(static_cast<int>(index));
}

void QMediaPlayer_SetAudioOutput(QMediaPlayer* self, QAudioOutput* output) {
    self->setAudioOutput(output);
}

QAudioOutput* QMediaPlayer_AudioOutput(const QMediaPlayer* self) {
    return self->audioOutput();
}

void QMediaPlayer_SetVideoOutput(QMediaPlayer* self, QObject* videoOutput) {
    self->setVideoOutput(videoOutput);
}

QObject* QMediaPlayer_VideoOutput(const QMediaPlayer* self) {
    return self->videoOutput();
}

void QMediaPlayer_SetVideoSink(QMediaPlayer* self, QVideoSink* sink) {
    self->setVideoSink(sink);
}

QVideoSink* QMediaPlayer_VideoSink(const QMediaPlayer* self) {
    return self->videoSink();
}

QUrl* QMediaPlayer_Source(const QMediaPlayer* self) {
    return new QUrl(self->source());
}

QIODevice* QMediaPlayer_SourceDevice(const QMediaPlayer* self) {
    return (QIODevice*)self->sourceDevice();
}

int QMediaPlayer_PlaybackState(const QMediaPlayer* self) {
    return static_cast<int>(self->playbackState());
}

int QMediaPlayer_MediaStatus(const QMediaPlayer* self) {
    return static_cast<int>(self->mediaStatus());
}

long long QMediaPlayer_Duration(const QMediaPlayer* self) {
    return static_cast<long long>(self->duration());
}

long long QMediaPlayer_Position(const QMediaPlayer* self) {
    return static_cast<long long>(self->position());
}

bool QMediaPlayer_HasAudio(const QMediaPlayer* self) {
    return self->hasAudio();
}

bool QMediaPlayer_HasVideo(const QMediaPlayer* self) {
    return self->hasVideo();
}

float QMediaPlayer_BufferProgress(const QMediaPlayer* self) {
    return self->bufferProgress();
}

QMediaTimeRange* QMediaPlayer_BufferedTimeRange(const QMediaPlayer* self) {
    return new QMediaTimeRange(self->bufferedTimeRange());
}

bool QMediaPlayer_IsSeekable(const QMediaPlayer* self) {
    return self->isSeekable();
}

double QMediaPlayer_PlaybackRate(const QMediaPlayer* self) {
    return static_cast<double>(self->playbackRate());
}

int QMediaPlayer_Loops(const QMediaPlayer* self) {
    return self->loops();
}

void QMediaPlayer_SetLoops(QMediaPlayer* self, int loops) {
    self->setLoops(static_cast<int>(loops));
}

int QMediaPlayer_Error(const QMediaPlayer* self) {
    return static_cast<int>(self->error());
}

libqt_string QMediaPlayer_ErrorString(const QMediaPlayer* self) {
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

bool QMediaPlayer_IsAvailable(const QMediaPlayer* self) {
    return self->isAvailable();
}

QMediaMetaData* QMediaPlayer_MetaData(const QMediaPlayer* self) {
    return new QMediaMetaData(self->metaData());
}

void QMediaPlayer_Play(QMediaPlayer* self) {
    self->play();
}

void QMediaPlayer_Pause(QMediaPlayer* self) {
    self->pause();
}

void QMediaPlayer_Stop(QMediaPlayer* self) {
    self->stop();
}

void QMediaPlayer_SetPosition(QMediaPlayer* self, long long position) {
    self->setPosition(static_cast<qint64>(position));
}

void QMediaPlayer_SetPlaybackRate(QMediaPlayer* self, double rate) {
    self->setPlaybackRate(static_cast<qreal>(rate));
}

void QMediaPlayer_SetSource(QMediaPlayer* self, QUrl* source) {
    self->setSource(*source);
}

void QMediaPlayer_SetSourceDevice(QMediaPlayer* self, QIODevice* device) {
    self->setSourceDevice(device);
}

void QMediaPlayer_SourceChanged(QMediaPlayer* self, QUrl* media) {
    self->sourceChanged(*media);
}

void QMediaPlayer_Connect_SourceChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, QUrl*) = reinterpret_cast<void (*)(QMediaPlayer*, QUrl*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::sourceChanged, [self, slotFunc](const QUrl& media) {
        const QUrl& media_ret = media;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&media_ret);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_PlaybackStateChanged(QMediaPlayer* self, int newState) {
    self->playbackStateChanged(static_cast<QMediaPlayer::PlaybackState>(newState));
}

void QMediaPlayer_Connect_PlaybackStateChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, int) = reinterpret_cast<void (*)(QMediaPlayer*, int)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::playbackStateChanged, [self, slotFunc](QMediaPlayer::PlaybackState newState) {
        int sigval1 = static_cast<int>(newState);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_MediaStatusChanged(QMediaPlayer* self, int status) {
    self->mediaStatusChanged(static_cast<QMediaPlayer::MediaStatus>(status));
}

void QMediaPlayer_Connect_MediaStatusChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, int) = reinterpret_cast<void (*)(QMediaPlayer*, int)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::mediaStatusChanged, [self, slotFunc](QMediaPlayer::MediaStatus status) {
        int sigval1 = static_cast<int>(status);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_DurationChanged(QMediaPlayer* self, long long duration) {
    self->durationChanged(static_cast<qint64>(duration));
}

void QMediaPlayer_Connect_DurationChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, long long) = reinterpret_cast<void (*)(QMediaPlayer*, long long)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::durationChanged, [self, slotFunc](qint64 duration) {
        long long sigval1 = static_cast<long long>(duration);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_PositionChanged(QMediaPlayer* self, long long position) {
    self->positionChanged(static_cast<qint64>(position));
}

void QMediaPlayer_Connect_PositionChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, long long) = reinterpret_cast<void (*)(QMediaPlayer*, long long)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::positionChanged, [self, slotFunc](qint64 position) {
        long long sigval1 = static_cast<long long>(position);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_HasAudioChanged(QMediaPlayer* self, bool available) {
    self->hasAudioChanged(available);
}

void QMediaPlayer_Connect_HasAudioChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::hasAudioChanged, [self, slotFunc](bool available) {
        bool sigval1 = available;
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_HasVideoChanged(QMediaPlayer* self, bool videoAvailable) {
    self->hasVideoChanged(videoAvailable);
}

void QMediaPlayer_Connect_HasVideoChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::hasVideoChanged, [self, slotFunc](bool videoAvailable) {
        bool sigval1 = videoAvailable;
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_BufferProgressChanged(QMediaPlayer* self, float progress) {
    self->bufferProgressChanged(static_cast<float>(progress));
}

void QMediaPlayer_Connect_BufferProgressChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, float) = reinterpret_cast<void (*)(QMediaPlayer*, float)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::bufferProgressChanged, [self, slotFunc](float progress) {
        float sigval1 = progress;
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_SeekableChanged(QMediaPlayer* self, bool seekable) {
    self->seekableChanged(seekable);
}

void QMediaPlayer_Connect_SeekableChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::seekableChanged, [self, slotFunc](bool seekable) {
        bool sigval1 = seekable;
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_PlaybackRateChanged(QMediaPlayer* self, double rate) {
    self->playbackRateChanged(static_cast<qreal>(rate));
}

void QMediaPlayer_Connect_PlaybackRateChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, double) = reinterpret_cast<void (*)(QMediaPlayer*, double)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::playbackRateChanged, [self, slotFunc](qreal rate) {
        double sigval1 = static_cast<double>(rate);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_LoopsChanged(QMediaPlayer* self) {
    self->loopsChanged();
}

void QMediaPlayer_Connect_LoopsChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::loopsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_MetaDataChanged(QMediaPlayer* self) {
    self->metaDataChanged();
}

void QMediaPlayer_Connect_MetaDataChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::metaDataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_VideoOutputChanged(QMediaPlayer* self) {
    self->videoOutputChanged();
}

void QMediaPlayer_Connect_VideoOutputChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::videoOutputChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_AudioOutputChanged(QMediaPlayer* self) {
    self->audioOutputChanged();
}

void QMediaPlayer_Connect_AudioOutputChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::audioOutputChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_TracksChanged(QMediaPlayer* self) {
    self->tracksChanged();
}

void QMediaPlayer_Connect_TracksChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::tracksChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_ActiveTracksChanged(QMediaPlayer* self) {
    self->activeTracksChanged();
}

void QMediaPlayer_Connect_ActiveTracksChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::activeTracksChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_ErrorChanged(QMediaPlayer* self) {
    self->errorChanged();
}

void QMediaPlayer_Connect_ErrorChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::errorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_ErrorOccurred(QMediaPlayer* self, int errorVal, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QMediaPlayer::Error>(errorVal), errorString_QString);
}

void QMediaPlayer_Connect_ErrorOccurred(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, int, libqt_string) = reinterpret_cast<void (*)(QMediaPlayer*, int, libqt_string)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::errorOccurred, [self, slotFunc](QMediaPlayer::Error errorVal, const QString& errorString) {
        int sigval1 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        libqt_string errorString_str;
        errorString_str.len = errorString_b.length();
        errorString_str.data = static_cast<char*>(malloc((errorString_str.len + 1) * sizeof(char)));
        memcpy(errorString_str.data, errorString_b.data(), errorString_str.len);
        errorString_str.data[errorString_str.len] = '\0';
        libqt_string sigval2 = errorString_str;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QMediaPlayer_Tr2(const char* s, const char* c) {
    QString _ret = QMediaPlayer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMediaPlayer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMediaPlayer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QMediaPlayer_SetSourceDevice2(QMediaPlayer* self, QIODevice* device, QUrl* sourceUrl) {
    self->setSourceDevice(device, *sourceUrl);
}

// Derived class handler implementation
bool QMediaPlayer_Event(QMediaPlayer* self, QEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        return vqmediaplayer->event(event);
    } else {
        return vqmediaplayer->event(event);
    }
}

// Base class handler implementation
bool QMediaPlayer_QBaseEvent(QMediaPlayer* self, QEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_Event_IsBase(true);
        return vqmediaplayer->event(event);
    } else {
        return vqmediaplayer->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnEvent(QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_Event_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaPlayer_EventFilter(QMediaPlayer* self, QObject* watched, QEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        return vqmediaplayer->eventFilter(watched, event);
    } else {
        return vqmediaplayer->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMediaPlayer_QBaseEventFilter(QMediaPlayer* self, QObject* watched, QEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_EventFilter_IsBase(true);
        return vqmediaplayer->eventFilter(watched, event);
    } else {
        return vqmediaplayer->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnEventFilter(QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_EventFilter_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_TimerEvent(QMediaPlayer* self, QTimerEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->timerEvent(event);
    } else {
        vqmediaplayer->timerEvent(event);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseTimerEvent(QMediaPlayer* self, QTimerEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_TimerEvent_IsBase(true);
        vqmediaplayer->timerEvent(event);
    } else {
        vqmediaplayer->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnTimerEvent(QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_TimerEvent_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_ChildEvent(QMediaPlayer* self, QChildEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->childEvent(event);
    } else {
        vqmediaplayer->childEvent(event);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseChildEvent(QMediaPlayer* self, QChildEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_ChildEvent_IsBase(true);
        vqmediaplayer->childEvent(event);
    } else {
        vqmediaplayer->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnChildEvent(QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_ChildEvent_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_CustomEvent(QMediaPlayer* self, QEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->customEvent(event);
    } else {
        vqmediaplayer->customEvent(event);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseCustomEvent(QMediaPlayer* self, QEvent* event) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_CustomEvent_IsBase(true);
        vqmediaplayer->customEvent(event);
    } else {
        vqmediaplayer->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnCustomEvent(QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_CustomEvent_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_ConnectNotify(QMediaPlayer* self, QMetaMethod* signal) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->connectNotify(*signal);
    } else {
        vqmediaplayer->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseConnectNotify(QMediaPlayer* self, QMetaMethod* signal) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_ConnectNotify_IsBase(true);
        vqmediaplayer->connectNotify(*signal);
    } else {
        vqmediaplayer->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnConnectNotify(QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_ConnectNotify_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_DisconnectNotify(QMediaPlayer* self, QMetaMethod* signal) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->disconnectNotify(*signal);
    } else {
        vqmediaplayer->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseDisconnectNotify(QMediaPlayer* self, QMetaMethod* signal) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_DisconnectNotify_IsBase(true);
        vqmediaplayer->disconnectNotify(*signal);
    } else {
        vqmediaplayer->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnDisconnectNotify(QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self)) {
        vqmediaplayer->setQMediaPlayer_DisconnectNotify_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMediaPlayer_Sender(const QMediaPlayer* self) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        return vqmediaplayer->sender();
    } else {
        return vqmediaplayer->sender();
    }
}

// Base class handler implementation
QObject* QMediaPlayer_QBaseSender(const QMediaPlayer* self) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        vqmediaplayer->setQMediaPlayer_Sender_IsBase(true);
        return vqmediaplayer->sender();
    } else {
        return vqmediaplayer->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnSender(const QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        vqmediaplayer->setQMediaPlayer_Sender_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaPlayer_SenderSignalIndex(const QMediaPlayer* self) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        return vqmediaplayer->senderSignalIndex();
    } else {
        return vqmediaplayer->senderSignalIndex();
    }
}

// Base class handler implementation
int QMediaPlayer_QBaseSenderSignalIndex(const QMediaPlayer* self) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        vqmediaplayer->setQMediaPlayer_SenderSignalIndex_IsBase(true);
        return vqmediaplayer->senderSignalIndex();
    } else {
        return vqmediaplayer->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnSenderSignalIndex(const QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        vqmediaplayer->setQMediaPlayer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaPlayer_Receivers(const QMediaPlayer* self, const char* signal) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        return vqmediaplayer->receivers(signal);
    } else {
        return vqmediaplayer->receivers(signal);
    }
}

// Base class handler implementation
int QMediaPlayer_QBaseReceivers(const QMediaPlayer* self, const char* signal) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        vqmediaplayer->setQMediaPlayer_Receivers_IsBase(true);
        return vqmediaplayer->receivers(signal);
    } else {
        return vqmediaplayer->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnReceivers(const QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        vqmediaplayer->setQMediaPlayer_Receivers_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaPlayer_IsSignalConnected(const QMediaPlayer* self, QMetaMethod* signal) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        return vqmediaplayer->isSignalConnected(*signal);
    } else {
        return vqmediaplayer->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMediaPlayer_QBaseIsSignalConnected(const QMediaPlayer* self, QMetaMethod* signal) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        vqmediaplayer->setQMediaPlayer_IsSignalConnected_IsBase(true);
        return vqmediaplayer->isSignalConnected(*signal);
    } else {
        return vqmediaplayer->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnIsSignalConnected(const QMediaPlayer* self, intptr_t slot) {
    if (auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self))) {
        vqmediaplayer->setQMediaPlayer_IsSignalConnected_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_IsSignalConnected_Callback>(slot));
    }
}

void QMediaPlayer_Delete(QMediaPlayer* self) {
    delete self;
}
