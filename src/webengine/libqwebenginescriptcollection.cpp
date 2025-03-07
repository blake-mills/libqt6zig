#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebEngineScript>
#include <QWebEngineScriptCollection>
#include <qwebenginescriptcollection.h>
#include "libqwebenginescriptcollection.h"
#include "libqwebenginescriptcollection.hxx"

bool QWebEngineScriptCollection_IsEmpty(const QWebEngineScriptCollection* self) {
    return self->isEmpty();
}

int QWebEngineScriptCollection_Count(const QWebEngineScriptCollection* self) {
    return self->count();
}

bool QWebEngineScriptCollection_Contains(const QWebEngineScriptCollection* self, QWebEngineScript* value) {
    return self->contains(*value);
}

libqt_list /* of QWebEngineScript* */ QWebEngineScriptCollection_Find(const QWebEngineScriptCollection* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QWebEngineScript> _ret = self->find(name_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QWebEngineScript** _arr = static_cast<QWebEngineScript**>(malloc(sizeof(QWebEngineScript*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QWebEngineScript(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QWebEngineScriptCollection_Insert(QWebEngineScriptCollection* self, QWebEngineScript* param1) {
    self->insert(*param1);
}

void QWebEngineScriptCollection_InsertWithList(QWebEngineScriptCollection* self, libqt_list /* of QWebEngineScript* */ list) {
    QList<QWebEngineScript> list_QList;
    list_QList.reserve(list.len);
    QWebEngineScript** list_arr = static_cast<QWebEngineScript**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    self->insert(list_QList);
}

bool QWebEngineScriptCollection_Remove(QWebEngineScriptCollection* self, QWebEngineScript* param1) {
    return self->remove(*param1);
}

void QWebEngineScriptCollection_Clear(QWebEngineScriptCollection* self) {
    self->clear();
}

libqt_list /* of QWebEngineScript* */ QWebEngineScriptCollection_ToList(const QWebEngineScriptCollection* self) {
    QList<QWebEngineScript> _ret = self->toList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWebEngineScript** _arr = static_cast<QWebEngineScript**>(malloc(sizeof(QWebEngineScript*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QWebEngineScript(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QWebEngineScriptCollection_Delete(QWebEngineScriptCollection* self) {
    delete self;
}
