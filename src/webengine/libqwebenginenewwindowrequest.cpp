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
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWebEngineNewWindowRequest>
#include <QWebEnginePage>
#include <qwebenginenewwindowrequest.h>
#include "libqwebenginenewwindowrequest.h"
#include "libqwebenginenewwindowrequest.hxx"

QMetaObject* QWebEngineNewWindowRequest_MetaObject(const QWebEngineNewWindowRequest* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineNewWindowRequest_Metacast(QWebEngineNewWindowRequest* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineNewWindowRequest_Metacall(QWebEngineNewWindowRequest* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineNewWindowRequest_Tr(const char* s) {
    QString _ret = QWebEngineNewWindowRequest::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QWebEngineNewWindowRequest_Destination(const QWebEngineNewWindowRequest* self) {
    return static_cast<int>(self->destination());
}

QUrl* QWebEngineNewWindowRequest_RequestedUrl(const QWebEngineNewWindowRequest* self) {
    return new QUrl(self->requestedUrl());
}

QRect* QWebEngineNewWindowRequest_RequestedGeometry(const QWebEngineNewWindowRequest* self) {
    return new QRect(self->requestedGeometry());
}

bool QWebEngineNewWindowRequest_IsUserInitiated(const QWebEngineNewWindowRequest* self) {
    return self->isUserInitiated();
}

void QWebEngineNewWindowRequest_OpenIn(QWebEngineNewWindowRequest* self, QWebEnginePage* param1) {
    self->openIn(param1);
}

libqt_string QWebEngineNewWindowRequest_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineNewWindowRequest::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineNewWindowRequest_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineNewWindowRequest::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QWebEngineNewWindowRequest_Event(QWebEngineNewWindowRequest* self, QEvent* event) {
    return self->event(event);
}

bool QWebEngineNewWindowRequest_EventFilter(QWebEngineNewWindowRequest* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

void QWebEngineNewWindowRequest_Delete(QWebEngineNewWindowRequest* self) {
    delete self;
}
