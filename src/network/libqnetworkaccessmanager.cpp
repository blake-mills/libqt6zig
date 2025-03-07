#include <QAbstractNetworkCache>
#include <QAnyStringView>
#include <QAuthenticator>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHstsPolicy>
#include <QHttpMultiPart>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QNetworkAccessManager>
#include <QNetworkCookieJar>
#include <QNetworkProxy>
#include <QNetworkProxyFactory>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qnetworkaccessmanager.h>
#include "libqnetworkaccessmanager.h"
#include "libqnetworkaccessmanager.hxx"

QNetworkAccessManager* QNetworkAccessManager_new() {
    return new VirtualQNetworkAccessManager();
}

QNetworkAccessManager* QNetworkAccessManager_new2(QObject* parent) {
    return new VirtualQNetworkAccessManager(parent);
}

QMetaObject* QNetworkAccessManager_MetaObject(const QNetworkAccessManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* QNetworkAccessManager_Metacast(QNetworkAccessManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QNetworkAccessManager_Metacall(QNetworkAccessManager* self, int param1, int param2, void** param3) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QNetworkAccessManager_OnMetacall(QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_Metacall_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QNetworkAccessManager_QBaseMetacall(QNetworkAccessManager* self, int param1, int param2, void** param3) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_Metacall_IsBase(true);
        return vqnetworkaccessmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QNetworkAccessManager_Tr(const char* s) {
    QString _ret = QNetworkAccessManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QNetworkAccessManager_ClearAccessCache(QNetworkAccessManager* self) {
    self->clearAccessCache();
}

void QNetworkAccessManager_ClearConnectionCache(QNetworkAccessManager* self) {
    self->clearConnectionCache();
}

QNetworkProxy* QNetworkAccessManager_Proxy(const QNetworkAccessManager* self) {
    return new QNetworkProxy(self->proxy());
}

void QNetworkAccessManager_SetProxy(QNetworkAccessManager* self, QNetworkProxy* proxy) {
    self->setProxy(*proxy);
}

QNetworkProxyFactory* QNetworkAccessManager_ProxyFactory(const QNetworkAccessManager* self) {
    return self->proxyFactory();
}

void QNetworkAccessManager_SetProxyFactory(QNetworkAccessManager* self, QNetworkProxyFactory* factory) {
    self->setProxyFactory(factory);
}

QAbstractNetworkCache* QNetworkAccessManager_Cache(const QNetworkAccessManager* self) {
    return self->cache();
}

void QNetworkAccessManager_SetCache(QNetworkAccessManager* self, QAbstractNetworkCache* cache) {
    self->setCache(cache);
}

QNetworkCookieJar* QNetworkAccessManager_CookieJar(const QNetworkAccessManager* self) {
    return self->cookieJar();
}

void QNetworkAccessManager_SetCookieJar(QNetworkAccessManager* self, QNetworkCookieJar* cookieJar) {
    self->setCookieJar(cookieJar);
}

void QNetworkAccessManager_SetStrictTransportSecurityEnabled(QNetworkAccessManager* self, bool enabled) {
    self->setStrictTransportSecurityEnabled(enabled);
}

bool QNetworkAccessManager_IsStrictTransportSecurityEnabled(const QNetworkAccessManager* self) {
    return self->isStrictTransportSecurityEnabled();
}

void QNetworkAccessManager_EnableStrictTransportSecurityStore(QNetworkAccessManager* self, bool enabled) {
    self->enableStrictTransportSecurityStore(enabled);
}

bool QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(const QNetworkAccessManager* self) {
    return self->isStrictTransportSecurityStoreEnabled();
}

void QNetworkAccessManager_AddStrictTransportSecurityHosts(QNetworkAccessManager* self, libqt_list /* of QHstsPolicy* */ knownHosts) {
    QList<QHstsPolicy> knownHosts_QList;
    knownHosts_QList.reserve(knownHosts.len);
    QHstsPolicy** knownHosts_arr = static_cast<QHstsPolicy**>(knownHosts.data);
    for (size_t i = 0; i < knownHosts.len; ++i) {
        knownHosts_QList.push_back(*(knownHosts_arr[i]));
    }
    self->addStrictTransportSecurityHosts(knownHosts_QList);
}

libqt_list /* of QHstsPolicy* */ QNetworkAccessManager_StrictTransportSecurityHosts(const QNetworkAccessManager* self) {
    QList<QHstsPolicy> _ret = self->strictTransportSecurityHosts();
    // Convert QList<> from C++ memory to manually-managed C memory
    QHstsPolicy** _arr = static_cast<QHstsPolicy**>(malloc(sizeof(QHstsPolicy*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QHstsPolicy(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QNetworkReply* QNetworkAccessManager_Head(QNetworkAccessManager* self, QNetworkRequest* request) {
    return self->head(*request);
}

QNetworkReply* QNetworkAccessManager_Get(QNetworkAccessManager* self, QNetworkRequest* request) {
    return self->get(*request);
}

QNetworkReply* QNetworkAccessManager_Post(QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data) {
    return self->post(*request, data);
}

QNetworkReply* QNetworkAccessManager_Post2(QNetworkAccessManager* self, QNetworkRequest* request, libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->post(*request, data_QByteArray);
}

QNetworkReply* QNetworkAccessManager_Put(QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data) {
    return self->put(*request, data);
}

QNetworkReply* QNetworkAccessManager_Put2(QNetworkAccessManager* self, QNetworkRequest* request, libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->put(*request, data_QByteArray);
}

QNetworkReply* QNetworkAccessManager_DeleteResource(QNetworkAccessManager* self, QNetworkRequest* request) {
    return self->deleteResource(*request);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest(QNetworkAccessManager* self, QNetworkRequest* request, libqt_string verb) {
    QByteArray verb_QByteArray(verb.data, verb.len);
    return self->sendCustomRequest(*request, verb_QByteArray);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest2(QNetworkAccessManager* self, QNetworkRequest* request, libqt_string verb, libqt_string data) {
    QByteArray verb_QByteArray(verb.data, verb.len);
    QByteArray data_QByteArray(data.data, data.len);
    return self->sendCustomRequest(*request, verb_QByteArray, data_QByteArray);
}

QNetworkReply* QNetworkAccessManager_Post3(QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart) {
    return self->post(*request, multiPart);
}

QNetworkReply* QNetworkAccessManager_Put3(QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart) {
    return self->put(*request, multiPart);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest3(QNetworkAccessManager* self, QNetworkRequest* request, libqt_string verb, QHttpMultiPart* multiPart) {
    QByteArray verb_QByteArray(verb.data, verb.len);
    return self->sendCustomRequest(*request, verb_QByteArray, multiPart);
}

void QNetworkAccessManager_ConnectToHostEncrypted(QNetworkAccessManager* self, libqt_string hostName) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHostEncrypted(hostName_QString);
}

void QNetworkAccessManager_ConnectToHostEncrypted2(QNetworkAccessManager* self, libqt_string hostName, uint16_t port, QSslConfiguration* sslConfiguration, libqt_string peerName) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    QString peerName_QString = QString::fromUtf8(peerName.data, peerName.len);
    self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), *sslConfiguration, peerName_QString);
}

void QNetworkAccessManager_ConnectToHost(QNetworkAccessManager* self, libqt_string hostName) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHost(hostName_QString);
}

void QNetworkAccessManager_SetRedirectPolicy(QNetworkAccessManager* self, int policy) {
    self->setRedirectPolicy(static_cast<QNetworkRequest::RedirectPolicy>(policy));
}

int QNetworkAccessManager_RedirectPolicy(const QNetworkAccessManager* self) {
    return static_cast<int>(self->redirectPolicy());
}

bool QNetworkAccessManager_AutoDeleteReplies(const QNetworkAccessManager* self) {
    return self->autoDeleteReplies();
}

void QNetworkAccessManager_SetAutoDeleteReplies(QNetworkAccessManager* self, bool autoDelete) {
    self->setAutoDeleteReplies(autoDelete);
}

int QNetworkAccessManager_TransferTimeout(const QNetworkAccessManager* self) {
    return self->transferTimeout();
}

void QNetworkAccessManager_SetTransferTimeout(QNetworkAccessManager* self) {
    self->setTransferTimeout();
}

void QNetworkAccessManager_ProxyAuthenticationRequired(QNetworkAccessManager* self, QNetworkProxy* proxy, QAuthenticator* authenticator) {
    self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QNetworkAccessManager_Connect_ProxyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkProxy*, QAuthenticator*) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkProxy*, QAuthenticator*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::proxyAuthenticationRequired, [self, slotFunc](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
        const QNetworkProxy& proxy_ret = proxy;
        // Cast returned reference into pointer
        QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
        QAuthenticator* sigval2 = authenticator;
        slotFunc(self, sigval1, sigval2);
    });
}

void QNetworkAccessManager_AuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QAuthenticator* authenticator) {
    self->authenticationRequired(reply, authenticator);
}

void QNetworkAccessManager_Connect_AuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*, QAuthenticator*) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*, QAuthenticator*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::authenticationRequired, [self, slotFunc](QNetworkReply* reply, QAuthenticator* authenticator) {
        QNetworkReply* sigval1 = reply;
        QAuthenticator* sigval2 = authenticator;
        slotFunc(self, sigval1, sigval2);
    });
}

void QNetworkAccessManager_Finished(QNetworkAccessManager* self, QNetworkReply* reply) {
    self->finished(reply);
}

void QNetworkAccessManager_Connect_Finished(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::finished, [self, slotFunc](QNetworkReply* reply) {
        QNetworkReply* sigval1 = reply;
        slotFunc(self, sigval1);
    });
}

void QNetworkAccessManager_Encrypted(QNetworkAccessManager* self, QNetworkReply* reply) {
    self->encrypted(reply);
}

void QNetworkAccessManager_Connect_Encrypted(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::encrypted, [self, slotFunc](QNetworkReply* reply) {
        QNetworkReply* sigval1 = reply;
        slotFunc(self, sigval1);
    });
}

void QNetworkAccessManager_SslErrors(QNetworkAccessManager* self, QNetworkReply* reply, libqt_list /* of QSslError* */ errors) {
    QList<QSslError> errors_QList;
    errors_QList.reserve(errors.len);
    QSslError** errors_arr = static_cast<QSslError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    self->sslErrors(reply, errors_QList);
}

void QNetworkAccessManager_Connect_SslErrors(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*, libqt_list /* of QSslError* */) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*, libqt_list /* of QSslError* */)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::sslErrors, [self, slotFunc](QNetworkReply* reply, const QList<QSslError>& errors) {
        QNetworkReply* sigval1 = reply;
        const QList<QSslError>& errors_ret = errors;
        // Convert QList<> from C++ memory to manually-managed C memory
        QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
        for (size_t i = 0; i < errors_ret.length(); ++i) {
            errors_arr[i] = new QSslError(errors_ret[i]);
        }
        libqt_list errors_out;
        errors_out.len = errors_ret.length();
        errors_out.data = static_cast<void*>(errors_arr);
        libqt_list /* of QSslError* */ sigval2 = errors_out;
        slotFunc(self, sigval1, sigval2);
    });
}

void QNetworkAccessManager_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator) {
    self->preSharedKeyAuthenticationRequired(reply, authenticator);
}

void QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*, QSslPreSharedKeyAuthenticator*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::preSharedKeyAuthenticationRequired, [self, slotFunc](QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator) {
        QNetworkReply* sigval1 = reply;
        QSslPreSharedKeyAuthenticator* sigval2 = authenticator;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QNetworkAccessManager_Tr2(const char* s, const char* c) {
    QString _ret = QNetworkAccessManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QNetworkAccessManager_Tr3(const char* s, const char* c, int n) {
    QString _ret = QNetworkAccessManager::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QNetworkAccessManager_EnableStrictTransportSecurityStore2(QNetworkAccessManager* self, bool enabled, libqt_string storeDir) {
    QString storeDir_QString = QString::fromUtf8(storeDir.data, storeDir.len);
    self->enableStrictTransportSecurityStore(enabled, storeDir_QString);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest32(QNetworkAccessManager* self, QNetworkRequest* request, libqt_string verb, QIODevice* data) {
    QByteArray verb_QByteArray(verb.data, verb.len);
    return self->sendCustomRequest(*request, verb_QByteArray, data);
}

void QNetworkAccessManager_ConnectToHostEncrypted22(QNetworkAccessManager* self, libqt_string hostName, uint16_t port) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port));
}

void QNetworkAccessManager_ConnectToHostEncrypted3(QNetworkAccessManager* self, libqt_string hostName, uint16_t port, QSslConfiguration* sslConfiguration) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), *sslConfiguration);
}

void QNetworkAccessManager_ConnectToHost2(QNetworkAccessManager* self, libqt_string hostName, uint16_t port) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHost(hostName_QString, static_cast<quint16>(port));
}

void QNetworkAccessManager_SetTransferTimeout1(QNetworkAccessManager* self, int timeout) {
    self->setTransferTimeout(static_cast<int>(timeout));
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QNetworkAccessManager_SupportedSchemes(const QNetworkAccessManager* self) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        QStringList _ret = vqnetworkaccessmanager->supportedSchemes();
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
        QStringList _ret = vqnetworkaccessmanager->supportedSchemes();
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
libqt_list /* of libqt_string */ QNetworkAccessManager_QBaseSupportedSchemes(const QNetworkAccessManager* self) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_SupportedSchemes_IsBase(true);
        QStringList _ret = vqnetworkaccessmanager->supportedSchemes();
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
        QStringList _ret = vqnetworkaccessmanager->supportedSchemes();
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
void QNetworkAccessManager_OnSupportedSchemes(const QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_SupportedSchemes_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_SupportedSchemes_Callback>(slot));
    }
}

// Derived class handler implementation
QNetworkReply* QNetworkAccessManager_CreateRequest(QNetworkAccessManager* self, int op, QNetworkRequest* request, QIODevice* outgoingData) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        return vqnetworkaccessmanager->createRequest(static_cast<QNetworkAccessManager::Operation>(op), *request, outgoingData);
    } else {
        return vqnetworkaccessmanager->createRequest(static_cast<QNetworkAccessManager::Operation>(op), *request, outgoingData);
    }
}

// Base class handler implementation
QNetworkReply* QNetworkAccessManager_QBaseCreateRequest(QNetworkAccessManager* self, int op, QNetworkRequest* request, QIODevice* outgoingData) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_CreateRequest_IsBase(true);
        return vqnetworkaccessmanager->createRequest(static_cast<QNetworkAccessManager::Operation>(op), *request, outgoingData);
    } else {
        return vqnetworkaccessmanager->createRequest(static_cast<QNetworkAccessManager::Operation>(op), *request, outgoingData);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnCreateRequest(QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_CreateRequest_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_CreateRequest_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkAccessManager_Event(QNetworkAccessManager* self, QEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        return vqnetworkaccessmanager->event(event);
    } else {
        return vqnetworkaccessmanager->event(event);
    }
}

// Base class handler implementation
bool QNetworkAccessManager_QBaseEvent(QNetworkAccessManager* self, QEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_Event_IsBase(true);
        return vqnetworkaccessmanager->event(event);
    } else {
        return vqnetworkaccessmanager->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnEvent(QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_Event_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkAccessManager_EventFilter(QNetworkAccessManager* self, QObject* watched, QEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        return vqnetworkaccessmanager->eventFilter(watched, event);
    } else {
        return vqnetworkaccessmanager->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QNetworkAccessManager_QBaseEventFilter(QNetworkAccessManager* self, QObject* watched, QEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_EventFilter_IsBase(true);
        return vqnetworkaccessmanager->eventFilter(watched, event);
    } else {
        return vqnetworkaccessmanager->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnEventFilter(QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_EventFilter_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkAccessManager_TimerEvent(QNetworkAccessManager* self, QTimerEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->timerEvent(event);
    } else {
        vqnetworkaccessmanager->timerEvent(event);
    }
}

// Base class handler implementation
void QNetworkAccessManager_QBaseTimerEvent(QNetworkAccessManager* self, QTimerEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_TimerEvent_IsBase(true);
        vqnetworkaccessmanager->timerEvent(event);
    } else {
        vqnetworkaccessmanager->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnTimerEvent(QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_TimerEvent_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkAccessManager_ChildEvent(QNetworkAccessManager* self, QChildEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->childEvent(event);
    } else {
        vqnetworkaccessmanager->childEvent(event);
    }
}

// Base class handler implementation
void QNetworkAccessManager_QBaseChildEvent(QNetworkAccessManager* self, QChildEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_ChildEvent_IsBase(true);
        vqnetworkaccessmanager->childEvent(event);
    } else {
        vqnetworkaccessmanager->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnChildEvent(QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_ChildEvent_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkAccessManager_CustomEvent(QNetworkAccessManager* self, QEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->customEvent(event);
    } else {
        vqnetworkaccessmanager->customEvent(event);
    }
}

// Base class handler implementation
void QNetworkAccessManager_QBaseCustomEvent(QNetworkAccessManager* self, QEvent* event) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_CustomEvent_IsBase(true);
        vqnetworkaccessmanager->customEvent(event);
    } else {
        vqnetworkaccessmanager->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnCustomEvent(QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_CustomEvent_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkAccessManager_ConnectNotify(QNetworkAccessManager* self, QMetaMethod* signal) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->connectNotify(*signal);
    } else {
        vqnetworkaccessmanager->connectNotify(*signal);
    }
}

// Base class handler implementation
void QNetworkAccessManager_QBaseConnectNotify(QNetworkAccessManager* self, QMetaMethod* signal) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_ConnectNotify_IsBase(true);
        vqnetworkaccessmanager->connectNotify(*signal);
    } else {
        vqnetworkaccessmanager->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnConnectNotify(QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_ConnectNotify_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkAccessManager_DisconnectNotify(QNetworkAccessManager* self, QMetaMethod* signal) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->disconnectNotify(*signal);
    } else {
        vqnetworkaccessmanager->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QNetworkAccessManager_QBaseDisconnectNotify(QNetworkAccessManager* self, QMetaMethod* signal) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_DisconnectNotify_IsBase(true);
        vqnetworkaccessmanager->disconnectNotify(*signal);
    } else {
        vqnetworkaccessmanager->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnDisconnectNotify(QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self)) {
        vqnetworkaccessmanager->setQNetworkAccessManager_DisconnectNotify_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QNetworkAccessManager_SupportedSchemesImplementation(const QNetworkAccessManager* self) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        QStringList _ret = vqnetworkaccessmanager->supportedSchemesImplementation();
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
        QStringList _ret = vqnetworkaccessmanager->supportedSchemesImplementation();
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
libqt_list /* of libqt_string */ QNetworkAccessManager_QBaseSupportedSchemesImplementation(const QNetworkAccessManager* self) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_SupportedSchemesImplementation_IsBase(true);
        QStringList _ret = vqnetworkaccessmanager->supportedSchemesImplementation();
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
        QStringList _ret = vqnetworkaccessmanager->supportedSchemesImplementation();
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
void QNetworkAccessManager_OnSupportedSchemesImplementation(const QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_SupportedSchemesImplementation_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_SupportedSchemesImplementation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QNetworkAccessManager_Sender(const QNetworkAccessManager* self) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        return vqnetworkaccessmanager->sender();
    } else {
        return vqnetworkaccessmanager->sender();
    }
}

// Base class handler implementation
QObject* QNetworkAccessManager_QBaseSender(const QNetworkAccessManager* self) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_Sender_IsBase(true);
        return vqnetworkaccessmanager->sender();
    } else {
        return vqnetworkaccessmanager->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnSender(const QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_Sender_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QNetworkAccessManager_SenderSignalIndex(const QNetworkAccessManager* self) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        return vqnetworkaccessmanager->senderSignalIndex();
    } else {
        return vqnetworkaccessmanager->senderSignalIndex();
    }
}

// Base class handler implementation
int QNetworkAccessManager_QBaseSenderSignalIndex(const QNetworkAccessManager* self) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_SenderSignalIndex_IsBase(true);
        return vqnetworkaccessmanager->senderSignalIndex();
    } else {
        return vqnetworkaccessmanager->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnSenderSignalIndex(const QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QNetworkAccessManager_Receivers(const QNetworkAccessManager* self, const char* signal) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        return vqnetworkaccessmanager->receivers(signal);
    } else {
        return vqnetworkaccessmanager->receivers(signal);
    }
}

// Base class handler implementation
int QNetworkAccessManager_QBaseReceivers(const QNetworkAccessManager* self, const char* signal) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_Receivers_IsBase(true);
        return vqnetworkaccessmanager->receivers(signal);
    } else {
        return vqnetworkaccessmanager->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnReceivers(const QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_Receivers_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkAccessManager_IsSignalConnected(const QNetworkAccessManager* self, QMetaMethod* signal) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        return vqnetworkaccessmanager->isSignalConnected(*signal);
    } else {
        return vqnetworkaccessmanager->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QNetworkAccessManager_QBaseIsSignalConnected(const QNetworkAccessManager* self, QMetaMethod* signal) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_IsSignalConnected_IsBase(true);
        return vqnetworkaccessmanager->isSignalConnected(*signal);
    } else {
        return vqnetworkaccessmanager->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnIsSignalConnected(const QNetworkAccessManager* self, intptr_t slot) {
    if (auto* vqnetworkaccessmanager = const_cast<VirtualQNetworkAccessManager*>(dynamic_cast<const VirtualQNetworkAccessManager*>(self))) {
        vqnetworkaccessmanager->setQNetworkAccessManager_IsSignalConnected_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_IsSignalConnected_Callback>(slot));
    }
}

void QNetworkAccessManager_Delete(QNetworkAccessManager* self) {
    delete self;
}
