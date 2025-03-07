#include <QAbstractEventDispatcher>
#include <QAbstractNativeEventFilter>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QCoreApplication>
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
#include <QTranslator>
#include <QVariant>
#include <qcoreapplication.h>
#include "libqcoreapplication.h"
#include "libqcoreapplication.hxx"

QCoreApplication* QCoreApplication_new(int* argc, char** argv) {
    return new VirtualQCoreApplication(static_cast<int&>(*argc), argv);
}

QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3) {
    return new VirtualQCoreApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

QMetaObject* QCoreApplication_MetaObject(const QCoreApplication* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCoreApplication_Metacast(QCoreApplication* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCoreApplication_Metacall(QCoreApplication* self, int param1, int param2, void** param3) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCoreApplication_OnMetacall(QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_Metacall_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCoreApplication_QBaseMetacall(QCoreApplication* self, int param1, int param2, void** param3) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_Metacall_IsBase(true);
        return vqcoreapplication->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCoreApplication_Tr(const char* s) {
    QString _ret = QCoreApplication::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QCoreApplication_Arguments() {
    QStringList _ret = QCoreApplication::arguments();
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

void QCoreApplication_SetAttribute(int attribute) {
    QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

bool QCoreApplication_TestAttribute(int attribute) {
    return QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

void QCoreApplication_SetOrganizationDomain(libqt_string orgDomain) {
    QString orgDomain_QString = QString::fromUtf8(orgDomain.data, orgDomain.len);
    QCoreApplication::setOrganizationDomain(orgDomain_QString);
}

libqt_string QCoreApplication_OrganizationDomain() {
    QString _ret = QCoreApplication::organizationDomain();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCoreApplication_SetOrganizationName(libqt_string orgName) {
    QString orgName_QString = QString::fromUtf8(orgName.data, orgName.len);
    QCoreApplication::setOrganizationName(orgName_QString);
}

libqt_string QCoreApplication_OrganizationName() {
    QString _ret = QCoreApplication::organizationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCoreApplication_SetApplicationName(libqt_string application) {
    QString application_QString = QString::fromUtf8(application.data, application.len);
    QCoreApplication::setApplicationName(application_QString);
}

libqt_string QCoreApplication_ApplicationName() {
    QString _ret = QCoreApplication::applicationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCoreApplication_SetApplicationVersion(libqt_string version) {
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QCoreApplication::setApplicationVersion(version_QString);
}

libqt_string QCoreApplication_ApplicationVersion() {
    QString _ret = QCoreApplication::applicationVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCoreApplication_SetSetuidAllowed(bool allow) {
    QCoreApplication::setSetuidAllowed(allow);
}

bool QCoreApplication_IsSetuidAllowed() {
    return QCoreApplication::isSetuidAllowed();
}

QCoreApplication* QCoreApplication_Instance() {
    return QCoreApplication::instance();
}

int QCoreApplication_Exec() {
    return QCoreApplication::exec();
}

void QCoreApplication_ProcessEvents() {
    QCoreApplication::processEvents();
}

void QCoreApplication_ProcessEvents2(int flags, int maxtime) {
    QCoreApplication::processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags), static_cast<int>(maxtime));
}

bool QCoreApplication_SendEvent(QObject* receiver, QEvent* event) {
    return QCoreApplication::sendEvent(receiver, event);
}

void QCoreApplication_PostEvent(QObject* receiver, QEvent* event) {
    QCoreApplication::postEvent(receiver, event);
}

void QCoreApplication_SendPostedEvents() {
    QCoreApplication::sendPostedEvents();
}

void QCoreApplication_RemovePostedEvents(QObject* receiver) {
    QCoreApplication::removePostedEvents(receiver);
}

QAbstractEventDispatcher* QCoreApplication_EventDispatcher() {
    return QCoreApplication::eventDispatcher();
}

void QCoreApplication_SetEventDispatcher(QAbstractEventDispatcher* eventDispatcher) {
    QCoreApplication::setEventDispatcher(eventDispatcher);
}

bool QCoreApplication_StartingUp() {
    return QCoreApplication::startingUp();
}

bool QCoreApplication_ClosingDown() {
    return QCoreApplication::closingDown();
}

libqt_string QCoreApplication_ApplicationDirPath() {
    QString _ret = QCoreApplication::applicationDirPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCoreApplication_ApplicationFilePath() {
    QString _ret = QCoreApplication::applicationFilePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

long long QCoreApplication_ApplicationPid() {
    return static_cast<long long>(QCoreApplication::applicationPid());
}

void QCoreApplication_SetLibraryPaths(libqt_list /* of libqt_string */ libraryPaths) {
    QStringList libraryPaths_QList;
    libraryPaths_QList.reserve(libraryPaths.len);
    libqt_string* libraryPaths_arr = static_cast<libqt_string*>(libraryPaths.data);
    for (size_t i = 0; i < libraryPaths.len; ++i) {
        QString libraryPaths_arr_i_QString = QString::fromUtf8(libraryPaths_arr[i].data, libraryPaths_arr[i].len);
        libraryPaths_QList.push_back(libraryPaths_arr_i_QString);
    }
    QCoreApplication::setLibraryPaths(libraryPaths_QList);
}

libqt_list /* of libqt_string */ QCoreApplication_LibraryPaths() {
    QStringList _ret = QCoreApplication::libraryPaths();
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

void QCoreApplication_AddLibraryPath(libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QCoreApplication::addLibraryPath(param1_QString);
}

void QCoreApplication_RemoveLibraryPath(libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QCoreApplication::removeLibraryPath(param1_QString);
}

bool QCoreApplication_InstallTranslator(QTranslator* messageFile) {
    return QCoreApplication::installTranslator(messageFile);
}

bool QCoreApplication_RemoveTranslator(QTranslator* messageFile) {
    return QCoreApplication::removeTranslator(messageFile);
}

libqt_string QCoreApplication_Translate(const char* context, const char* key) {
    QString _ret = QCoreApplication::translate(context, key);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCoreApplication_InstallNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
    self->installNativeEventFilter(filterObj);
}

void QCoreApplication_Connect_InstallNativeEventFilter(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*, QAbstractNativeEventFilter*) = reinterpret_cast<void (*)(QCoreApplication*, QAbstractNativeEventFilter*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::installNativeEventFilter, [self, slotFunc](QAbstractNativeEventFilter* filterObj) {
        QAbstractNativeEventFilter* sigval1 = filterObj;
        slotFunc(self, sigval1);
    });
}

void QCoreApplication_RemoveNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
    self->removeNativeEventFilter(filterObj);
}

void QCoreApplication_Connect_RemoveNativeEventFilter(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*, QAbstractNativeEventFilter*) = reinterpret_cast<void (*)(QCoreApplication*, QAbstractNativeEventFilter*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::removeNativeEventFilter, [self, slotFunc](QAbstractNativeEventFilter* filterObj) {
        QAbstractNativeEventFilter* sigval1 = filterObj;
        slotFunc(self, sigval1);
    });
}

bool QCoreApplication_IsQuitLockEnabled() {
    return QCoreApplication::isQuitLockEnabled();
}

void QCoreApplication_SetQuitLockEnabled(bool enabled) {
    QCoreApplication::setQuitLockEnabled(enabled);
}

void QCoreApplication_Quit() {
    QCoreApplication::quit();
}

void QCoreApplication_Exit() {
    QCoreApplication::exit();
}

void QCoreApplication_OrganizationNameChanged(QCoreApplication* self) {
    self->organizationNameChanged();
}

void QCoreApplication_Connect_OrganizationNameChanged(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*) = reinterpret_cast<void (*)(QCoreApplication*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::organizationNameChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCoreApplication_OrganizationDomainChanged(QCoreApplication* self) {
    self->organizationDomainChanged();
}

void QCoreApplication_Connect_OrganizationDomainChanged(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*) = reinterpret_cast<void (*)(QCoreApplication*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::organizationDomainChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCoreApplication_ApplicationNameChanged(QCoreApplication* self) {
    self->applicationNameChanged();
}

void QCoreApplication_Connect_ApplicationNameChanged(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*) = reinterpret_cast<void (*)(QCoreApplication*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::applicationNameChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCoreApplication_ApplicationVersionChanged(QCoreApplication* self) {
    self->applicationVersionChanged();
}

void QCoreApplication_Connect_ApplicationVersionChanged(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*) = reinterpret_cast<void (*)(QCoreApplication*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::applicationVersionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QCoreApplication_Tr2(const char* s, const char* c) {
    QString _ret = QCoreApplication::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCoreApplication_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCoreApplication::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCoreApplication_SetAttribute2(int attribute, bool on) {
    QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute), on);
}

void QCoreApplication_ProcessEvents1(int flags) {
    QCoreApplication::processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QCoreApplication_PostEvent3(QObject* receiver, QEvent* event, int priority) {
    QCoreApplication::postEvent(receiver, event, static_cast<int>(priority));
}

void QCoreApplication_SendPostedEvents1(QObject* receiver) {
    QCoreApplication::sendPostedEvents(receiver);
}

void QCoreApplication_SendPostedEvents2(QObject* receiver, int event_type) {
    QCoreApplication::sendPostedEvents(receiver, static_cast<int>(event_type));
}

void QCoreApplication_RemovePostedEvents2(QObject* receiver, int eventType) {
    QCoreApplication::removePostedEvents(receiver, static_cast<int>(eventType));
}

libqt_string QCoreApplication_Translate3(const char* context, const char* key, const char* disambiguation) {
    QString _ret = QCoreApplication::translate(context, key, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCoreApplication_Translate4(const char* context, const char* key, const char* disambiguation, int n) {
    QString _ret = QCoreApplication::translate(context, key, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCoreApplication_Exit1(int retcode) {
    QCoreApplication::exit(static_cast<int>(retcode));
}

// Derived class handler implementation
bool QCoreApplication_Notify(QCoreApplication* self, QObject* param1, QEvent* param2) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        return vqcoreapplication->notify(param1, param2);
    } else {
        return vqcoreapplication->notify(param1, param2);
    }
}

// Base class handler implementation
bool QCoreApplication_QBaseNotify(QCoreApplication* self, QObject* param1, QEvent* param2) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_Notify_IsBase(true);
        return vqcoreapplication->notify(param1, param2);
    } else {
        return vqcoreapplication->notify(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnNotify(QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_Notify_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_Notify_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCoreApplication_Event(QCoreApplication* self, QEvent* param1) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        return vqcoreapplication->event(param1);
    } else {
        return vqcoreapplication->event(param1);
    }
}

// Base class handler implementation
bool QCoreApplication_QBaseEvent(QCoreApplication* self, QEvent* param1) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_Event_IsBase(true);
        return vqcoreapplication->event(param1);
    } else {
        return vqcoreapplication->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnEvent(QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_Event_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCoreApplication_EventFilter(QCoreApplication* self, QObject* watched, QEvent* event) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        return vqcoreapplication->eventFilter(watched, event);
    } else {
        return vqcoreapplication->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCoreApplication_QBaseEventFilter(QCoreApplication* self, QObject* watched, QEvent* event) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_EventFilter_IsBase(true);
        return vqcoreapplication->eventFilter(watched, event);
    } else {
        return vqcoreapplication->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnEventFilter(QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_EventFilter_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCoreApplication_TimerEvent(QCoreApplication* self, QTimerEvent* event) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->timerEvent(event);
    } else {
        vqcoreapplication->timerEvent(event);
    }
}

// Base class handler implementation
void QCoreApplication_QBaseTimerEvent(QCoreApplication* self, QTimerEvent* event) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_TimerEvent_IsBase(true);
        vqcoreapplication->timerEvent(event);
    } else {
        vqcoreapplication->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnTimerEvent(QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_TimerEvent_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCoreApplication_ChildEvent(QCoreApplication* self, QChildEvent* event) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->childEvent(event);
    } else {
        vqcoreapplication->childEvent(event);
    }
}

// Base class handler implementation
void QCoreApplication_QBaseChildEvent(QCoreApplication* self, QChildEvent* event) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_ChildEvent_IsBase(true);
        vqcoreapplication->childEvent(event);
    } else {
        vqcoreapplication->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnChildEvent(QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_ChildEvent_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCoreApplication_CustomEvent(QCoreApplication* self, QEvent* event) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->customEvent(event);
    } else {
        vqcoreapplication->customEvent(event);
    }
}

// Base class handler implementation
void QCoreApplication_QBaseCustomEvent(QCoreApplication* self, QEvent* event) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_CustomEvent_IsBase(true);
        vqcoreapplication->customEvent(event);
    } else {
        vqcoreapplication->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnCustomEvent(QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_CustomEvent_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCoreApplication_ConnectNotify(QCoreApplication* self, QMetaMethod* signal) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->connectNotify(*signal);
    } else {
        vqcoreapplication->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCoreApplication_QBaseConnectNotify(QCoreApplication* self, QMetaMethod* signal) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_ConnectNotify_IsBase(true);
        vqcoreapplication->connectNotify(*signal);
    } else {
        vqcoreapplication->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnConnectNotify(QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_ConnectNotify_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCoreApplication_DisconnectNotify(QCoreApplication* self, QMetaMethod* signal) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->disconnectNotify(*signal);
    } else {
        vqcoreapplication->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCoreApplication_QBaseDisconnectNotify(QCoreApplication* self, QMetaMethod* signal) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_DisconnectNotify_IsBase(true);
        vqcoreapplication->disconnectNotify(*signal);
    } else {
        vqcoreapplication->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnDisconnectNotify(QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self)) {
        vqcoreapplication->setQCoreApplication_DisconnectNotify_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void* QCoreApplication_ResolveInterface(const QCoreApplication* self, const char* name, int revision) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        return vqcoreapplication->resolveInterface(name, static_cast<int>(revision));
    } else {
        return vqcoreapplication->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QCoreApplication_QBaseResolveInterface(const QCoreApplication* self, const char* name, int revision) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_ResolveInterface_IsBase(true);
        return vqcoreapplication->resolveInterface(name, static_cast<int>(revision));
    } else {
        return vqcoreapplication->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnResolveInterface(const QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_ResolveInterface_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCoreApplication_Sender(const QCoreApplication* self) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        return vqcoreapplication->sender();
    } else {
        return vqcoreapplication->sender();
    }
}

// Base class handler implementation
QObject* QCoreApplication_QBaseSender(const QCoreApplication* self) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_Sender_IsBase(true);
        return vqcoreapplication->sender();
    } else {
        return vqcoreapplication->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnSender(const QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_Sender_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCoreApplication_SenderSignalIndex(const QCoreApplication* self) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        return vqcoreapplication->senderSignalIndex();
    } else {
        return vqcoreapplication->senderSignalIndex();
    }
}

// Base class handler implementation
int QCoreApplication_QBaseSenderSignalIndex(const QCoreApplication* self) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_SenderSignalIndex_IsBase(true);
        return vqcoreapplication->senderSignalIndex();
    } else {
        return vqcoreapplication->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnSenderSignalIndex(const QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCoreApplication_Receivers(const QCoreApplication* self, const char* signal) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        return vqcoreapplication->receivers(signal);
    } else {
        return vqcoreapplication->receivers(signal);
    }
}

// Base class handler implementation
int QCoreApplication_QBaseReceivers(const QCoreApplication* self, const char* signal) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_Receivers_IsBase(true);
        return vqcoreapplication->receivers(signal);
    } else {
        return vqcoreapplication->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnReceivers(const QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_Receivers_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCoreApplication_IsSignalConnected(const QCoreApplication* self, QMetaMethod* signal) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        return vqcoreapplication->isSignalConnected(*signal);
    } else {
        return vqcoreapplication->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCoreApplication_QBaseIsSignalConnected(const QCoreApplication* self, QMetaMethod* signal) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_IsSignalConnected_IsBase(true);
        return vqcoreapplication->isSignalConnected(*signal);
    } else {
        return vqcoreapplication->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnIsSignalConnected(const QCoreApplication* self, intptr_t slot) {
    if (auto* vqcoreapplication = const_cast<VirtualQCoreApplication*>(dynamic_cast<const VirtualQCoreApplication*>(self))) {
        vqcoreapplication->setQCoreApplication_IsSignalConnected_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_IsSignalConnected_Callback>(slot));
    }
}

void QCoreApplication_Delete(QCoreApplication* self) {
    delete self;
}
