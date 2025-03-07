#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QCompleter>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QModelIndex>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qcompleter.h>
#include "libqcompleter.h"
#include "libqcompleter.hxx"

QCompleter* QCompleter_new() {
    return new VirtualQCompleter();
}

QCompleter* QCompleter_new2(QAbstractItemModel* model) {
    return new VirtualQCompleter(model);
}

QCompleter* QCompleter_new3(libqt_list /* of libqt_string */ completions) {
    QStringList completions_QList;
    completions_QList.reserve(completions.len);
    libqt_string* completions_arr = static_cast<libqt_string*>(completions.data);
    for (size_t i = 0; i < completions.len; ++i) {
        QString completions_arr_i_QString = QString::fromUtf8(completions_arr[i].data, completions_arr[i].len);
        completions_QList.push_back(completions_arr_i_QString);
    }
    return new VirtualQCompleter(completions_QList);
}

QCompleter* QCompleter_new4(QObject* parent) {
    return new VirtualQCompleter(parent);
}

QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent) {
    return new VirtualQCompleter(model, parent);
}

QCompleter* QCompleter_new6(libqt_list /* of libqt_string */ completions, QObject* parent) {
    QStringList completions_QList;
    completions_QList.reserve(completions.len);
    libqt_string* completions_arr = static_cast<libqt_string*>(completions.data);
    for (size_t i = 0; i < completions.len; ++i) {
        QString completions_arr_i_QString = QString::fromUtf8(completions_arr[i].data, completions_arr[i].len);
        completions_QList.push_back(completions_arr_i_QString);
    }
    return new VirtualQCompleter(completions_QList, parent);
}

QMetaObject* QCompleter_MetaObject(const QCompleter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCompleter_Metacast(QCompleter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCompleter_Metacall(QCompleter* self, int param1, int param2, void** param3) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCompleter_OnMetacall(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_Metacall_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCompleter_QBaseMetacall(QCompleter* self, int param1, int param2, void** param3) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_Metacall_IsBase(true);
        return vqcompleter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCompleter_Tr(const char* s) {
    QString _ret = QCompleter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCompleter_SetWidget(QCompleter* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QCompleter_Widget(const QCompleter* self) {
    return self->widget();
}

void QCompleter_SetModel(QCompleter* self, QAbstractItemModel* c) {
    self->setModel(c);
}

QAbstractItemModel* QCompleter_Model(const QCompleter* self) {
    return self->model();
}

void QCompleter_SetCompletionMode(QCompleter* self, int mode) {
    self->setCompletionMode(static_cast<QCompleter::CompletionMode>(mode));
}

int QCompleter_CompletionMode(const QCompleter* self) {
    return static_cast<int>(self->completionMode());
}

void QCompleter_SetFilterMode(QCompleter* self, int filterMode) {
    self->setFilterMode(static_cast<Qt::MatchFlags>(filterMode));
}

int QCompleter_FilterMode(const QCompleter* self) {
    return static_cast<int>(self->filterMode());
}

QAbstractItemView* QCompleter_Popup(const QCompleter* self) {
    return self->popup();
}

void QCompleter_SetPopup(QCompleter* self, QAbstractItemView* popup) {
    self->setPopup(popup);
}

void QCompleter_SetCaseSensitivity(QCompleter* self, int caseSensitivity) {
    self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(caseSensitivity));
}

int QCompleter_CaseSensitivity(const QCompleter* self) {
    return static_cast<int>(self->caseSensitivity());
}

void QCompleter_SetModelSorting(QCompleter* self, int sorting) {
    self->setModelSorting(static_cast<QCompleter::ModelSorting>(sorting));
}

int QCompleter_ModelSorting(const QCompleter* self) {
    return static_cast<int>(self->modelSorting());
}

void QCompleter_SetCompletionColumn(QCompleter* self, int column) {
    self->setCompletionColumn(static_cast<int>(column));
}

int QCompleter_CompletionColumn(const QCompleter* self) {
    return self->completionColumn();
}

void QCompleter_SetCompletionRole(QCompleter* self, int role) {
    self->setCompletionRole(static_cast<int>(role));
}

int QCompleter_CompletionRole(const QCompleter* self) {
    return self->completionRole();
}

bool QCompleter_WrapAround(const QCompleter* self) {
    return self->wrapAround();
}

int QCompleter_MaxVisibleItems(const QCompleter* self) {
    return self->maxVisibleItems();
}

void QCompleter_SetMaxVisibleItems(QCompleter* self, int maxItems) {
    self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QCompleter_CompletionCount(const QCompleter* self) {
    return self->completionCount();
}

bool QCompleter_SetCurrentRow(QCompleter* self, int row) {
    return self->setCurrentRow(static_cast<int>(row));
}

int QCompleter_CurrentRow(const QCompleter* self) {
    return self->currentRow();
}

QModelIndex* QCompleter_CurrentIndex(const QCompleter* self) {
    return new QModelIndex(self->currentIndex());
}

libqt_string QCompleter_CurrentCompletion(const QCompleter* self) {
    QString _ret = self->currentCompletion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QCompleter_CompletionModel(const QCompleter* self) {
    return self->completionModel();
}

libqt_string QCompleter_CompletionPrefix(const QCompleter* self) {
    QString _ret = self->completionPrefix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCompleter_SetCompletionPrefix(QCompleter* self, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->setCompletionPrefix(prefix_QString);
}

void QCompleter_Complete(QCompleter* self) {
    self->complete();
}

void QCompleter_SetWrapAround(QCompleter* self, bool wrap) {
    self->setWrapAround(wrap);
}

void QCompleter_Activated(QCompleter* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->activated(text_QString);
}

void QCompleter_ActivatedWithIndex(QCompleter* self, QModelIndex* index) {
    self->activated(*index);
}

void QCompleter_Highlighted(QCompleter* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->highlighted(text_QString);
}

void QCompleter_HighlightedWithIndex(QCompleter* self, QModelIndex* index) {
    self->highlighted(*index);
}

libqt_string QCompleter_Tr2(const char* s, const char* c) {
    QString _ret = QCompleter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCompleter_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCompleter::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCompleter_Complete1(QCompleter* self, QRect* rect) {
    self->complete(*rect);
}

// Derived class handler implementation
libqt_string QCompleter_PathFromIndex(const QCompleter* self, QModelIndex* index) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        QString _ret = vqcompleter->pathFromIndex(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqcompleter->pathFromIndex(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QCompleter_QBasePathFromIndex(const QCompleter* self, QModelIndex* index) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_PathFromIndex_IsBase(true);
        QString _ret = vqcompleter->pathFromIndex(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqcompleter->pathFromIndex(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnPathFromIndex(const QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_PathFromIndex_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_PathFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QCompleter_SplitPath(const QCompleter* self, libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        QStringList _ret = vqcompleter->splitPath(path_QString);
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
    } else {
        QStringList _ret = vqcompleter->splitPath(path_QString);
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ QCompleter_QBaseSplitPath(const QCompleter* self, libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_SplitPath_IsBase(true);
        QStringList _ret = vqcompleter->splitPath(path_QString);
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
    } else {
        QStringList _ret = vqcompleter->splitPath(path_QString);
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
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnSplitPath(const QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_SplitPath_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_SplitPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCompleter_EventFilter(QCompleter* self, QObject* o, QEvent* e) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        return vqcompleter->eventFilter(o, e);
    } else {
        return vqcompleter->eventFilter(o, e);
    }
}

// Base class handler implementation
bool QCompleter_QBaseEventFilter(QCompleter* self, QObject* o, QEvent* e) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_EventFilter_IsBase(true);
        return vqcompleter->eventFilter(o, e);
    } else {
        return vqcompleter->eventFilter(o, e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnEventFilter(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_EventFilter_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCompleter_Event(QCompleter* self, QEvent* param1) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        return vqcompleter->event(param1);
    } else {
        return vqcompleter->event(param1);
    }
}

// Base class handler implementation
bool QCompleter_QBaseEvent(QCompleter* self, QEvent* param1) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_Event_IsBase(true);
        return vqcompleter->event(param1);
    } else {
        return vqcompleter->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnEvent(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_Event_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QCompleter_TimerEvent(QCompleter* self, QTimerEvent* event) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->timerEvent(event);
    } else {
        vqcompleter->timerEvent(event);
    }
}

// Base class handler implementation
void QCompleter_QBaseTimerEvent(QCompleter* self, QTimerEvent* event) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_TimerEvent_IsBase(true);
        vqcompleter->timerEvent(event);
    } else {
        vqcompleter->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnTimerEvent(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_TimerEvent_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCompleter_ChildEvent(QCompleter* self, QChildEvent* event) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->childEvent(event);
    } else {
        vqcompleter->childEvent(event);
    }
}

// Base class handler implementation
void QCompleter_QBaseChildEvent(QCompleter* self, QChildEvent* event) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_ChildEvent_IsBase(true);
        vqcompleter->childEvent(event);
    } else {
        vqcompleter->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnChildEvent(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_ChildEvent_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCompleter_CustomEvent(QCompleter* self, QEvent* event) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->customEvent(event);
    } else {
        vqcompleter->customEvent(event);
    }
}

// Base class handler implementation
void QCompleter_QBaseCustomEvent(QCompleter* self, QEvent* event) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_CustomEvent_IsBase(true);
        vqcompleter->customEvent(event);
    } else {
        vqcompleter->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnCustomEvent(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_CustomEvent_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCompleter_ConnectNotify(QCompleter* self, QMetaMethod* signal) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->connectNotify(*signal);
    } else {
        vqcompleter->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCompleter_QBaseConnectNotify(QCompleter* self, QMetaMethod* signal) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_ConnectNotify_IsBase(true);
        vqcompleter->connectNotify(*signal);
    } else {
        vqcompleter->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnConnectNotify(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_ConnectNotify_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCompleter_DisconnectNotify(QCompleter* self, QMetaMethod* signal) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->disconnectNotify(*signal);
    } else {
        vqcompleter->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCompleter_QBaseDisconnectNotify(QCompleter* self, QMetaMethod* signal) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_DisconnectNotify_IsBase(true);
        vqcompleter->disconnectNotify(*signal);
    } else {
        vqcompleter->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnDisconnectNotify(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->setQCompleter_DisconnectNotify_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCompleter_Sender(const QCompleter* self) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        return vqcompleter->sender();
    } else {
        return vqcompleter->sender();
    }
}

// Base class handler implementation
QObject* QCompleter_QBaseSender(const QCompleter* self) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_Sender_IsBase(true);
        return vqcompleter->sender();
    } else {
        return vqcompleter->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnSender(const QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_Sender_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCompleter_SenderSignalIndex(const QCompleter* self) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        return vqcompleter->senderSignalIndex();
    } else {
        return vqcompleter->senderSignalIndex();
    }
}

// Base class handler implementation
int QCompleter_QBaseSenderSignalIndex(const QCompleter* self) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_SenderSignalIndex_IsBase(true);
        return vqcompleter->senderSignalIndex();
    } else {
        return vqcompleter->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnSenderSignalIndex(const QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCompleter_Receivers(const QCompleter* self, const char* signal) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        return vqcompleter->receivers(signal);
    } else {
        return vqcompleter->receivers(signal);
    }
}

// Base class handler implementation
int QCompleter_QBaseReceivers(const QCompleter* self, const char* signal) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_Receivers_IsBase(true);
        return vqcompleter->receivers(signal);
    } else {
        return vqcompleter->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnReceivers(const QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_Receivers_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCompleter_IsSignalConnected(const QCompleter* self, QMetaMethod* signal) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        return vqcompleter->isSignalConnected(*signal);
    } else {
        return vqcompleter->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCompleter_QBaseIsSignalConnected(const QCompleter* self, QMetaMethod* signal) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_IsSignalConnected_IsBase(true);
        return vqcompleter->isSignalConnected(*signal);
    } else {
        return vqcompleter->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnIsSignalConnected(const QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        vqcompleter->setQCompleter_IsSignalConnected_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_IsSignalConnected_Callback>(slot));
    }
}

void QCompleter_Delete(QCompleter* self) {
    delete self;
}
