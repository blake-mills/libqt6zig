#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKPROXY_H
#define SRC_NETWORKC_LIBQNETWORKPROXY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QNetworkProxyFactory QNetworkProxyFactory;
typedef struct QNetworkProxyQuery QNetworkProxyQuery;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QNetworkProxy::Capabilities Capabilities; // C++ QFlags
typedef QNetworkProxy::Capability Capability; // C++ enum
typedef QNetworkProxy::ProxyType ProxyType; // C++ enum
typedef QNetworkProxyQuery::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QNetworkProxyQuery::QueryType QueryType; // C++ enum
#else
typedef int Capabilities; // C ABI QFlags
typedef int Capability; // C ABI enum
typedef int ProxyType; // C ABI enum
typedef int QueryType; // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QNetworkProxyQuery* QNetworkProxyQuery_new();
QNetworkProxyQuery* QNetworkProxyQuery_new2(QUrl* requestUrl);
QNetworkProxyQuery* QNetworkProxyQuery_new3(libqt_string hostname, int port);
QNetworkProxyQuery* QNetworkProxyQuery_new4(uint16_t bindPort);
QNetworkProxyQuery* QNetworkProxyQuery_new5(QNetworkProxyQuery* other);
QNetworkProxyQuery* QNetworkProxyQuery_new6(QUrl* requestUrl, int queryType);
QNetworkProxyQuery* QNetworkProxyQuery_new7(libqt_string hostname, int port, libqt_string protocolTag);
QNetworkProxyQuery* QNetworkProxyQuery_new8(libqt_string hostname, int port, libqt_string protocolTag, int queryType);
QNetworkProxyQuery* QNetworkProxyQuery_new9(uint16_t bindPort, libqt_string protocolTag);
QNetworkProxyQuery* QNetworkProxyQuery_new10(uint16_t bindPort, libqt_string protocolTag, int queryType);
void QNetworkProxyQuery_OperatorAssign(QNetworkProxyQuery* self, QNetworkProxyQuery* other);
void QNetworkProxyQuery_Swap(QNetworkProxyQuery* self, QNetworkProxyQuery* other);
bool QNetworkProxyQuery_OperatorEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other);
bool QNetworkProxyQuery_OperatorNotEqual(const QNetworkProxyQuery* self, QNetworkProxyQuery* other);
int QNetworkProxyQuery_QueryType(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetQueryType(QNetworkProxyQuery* self, int typeVal);
int QNetworkProxyQuery_PeerPort(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetPeerPort(QNetworkProxyQuery* self, int port);
libqt_string QNetworkProxyQuery_PeerHostName(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetPeerHostName(QNetworkProxyQuery* self, libqt_string hostname);
int QNetworkProxyQuery_LocalPort(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetLocalPort(QNetworkProxyQuery* self, int port);
libqt_string QNetworkProxyQuery_ProtocolTag(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetProtocolTag(QNetworkProxyQuery* self, libqt_string protocolTag);
QUrl* QNetworkProxyQuery_Url(const QNetworkProxyQuery* self);
void QNetworkProxyQuery_SetUrl(QNetworkProxyQuery* self, QUrl* url);
void QNetworkProxyQuery_Delete(QNetworkProxyQuery* self);

QNetworkProxy* QNetworkProxy_new();
QNetworkProxy* QNetworkProxy_new2(int typeVal);
QNetworkProxy* QNetworkProxy_new3(QNetworkProxy* other);
QNetworkProxy* QNetworkProxy_new4(int typeVal, libqt_string hostName);
QNetworkProxy* QNetworkProxy_new5(int typeVal, libqt_string hostName, uint16_t port);
QNetworkProxy* QNetworkProxy_new6(int typeVal, libqt_string hostName, uint16_t port, libqt_string user);
QNetworkProxy* QNetworkProxy_new7(int typeVal, libqt_string hostName, uint16_t port, libqt_string user, libqt_string password);
void QNetworkProxy_OperatorAssign(QNetworkProxy* self, QNetworkProxy* other);
void QNetworkProxy_Swap(QNetworkProxy* self, QNetworkProxy* other);
bool QNetworkProxy_OperatorEqual(const QNetworkProxy* self, QNetworkProxy* other);
bool QNetworkProxy_OperatorNotEqual(const QNetworkProxy* self, QNetworkProxy* other);
void QNetworkProxy_SetType(QNetworkProxy* self, int typeVal);
int QNetworkProxy_Type(const QNetworkProxy* self);
void QNetworkProxy_SetCapabilities(QNetworkProxy* self, int capab);
int QNetworkProxy_Capabilities(const QNetworkProxy* self);
bool QNetworkProxy_IsCachingProxy(const QNetworkProxy* self);
bool QNetworkProxy_IsTransparentProxy(const QNetworkProxy* self);
void QNetworkProxy_SetUser(QNetworkProxy* self, libqt_string userName);
libqt_string QNetworkProxy_User(const QNetworkProxy* self);
void QNetworkProxy_SetPassword(QNetworkProxy* self, libqt_string password);
libqt_string QNetworkProxy_Password(const QNetworkProxy* self);
void QNetworkProxy_SetHostName(QNetworkProxy* self, libqt_string hostName);
libqt_string QNetworkProxy_HostName(const QNetworkProxy* self);
void QNetworkProxy_SetPort(QNetworkProxy* self, uint16_t port);
uint16_t QNetworkProxy_Port(const QNetworkProxy* self);
void QNetworkProxy_SetApplicationProxy(QNetworkProxy* proxy);
QNetworkProxy* QNetworkProxy_ApplicationProxy();
QVariant* QNetworkProxy_Header(const QNetworkProxy* self, int header);
void QNetworkProxy_SetHeader(QNetworkProxy* self, int header, QVariant* value);
bool QNetworkProxy_HasRawHeader(const QNetworkProxy* self, libqt_string headerName);
libqt_list /* of libqt_string */ QNetworkProxy_RawHeaderList(const QNetworkProxy* self);
libqt_string QNetworkProxy_RawHeader(const QNetworkProxy* self, libqt_string headerName);
void QNetworkProxy_SetRawHeader(QNetworkProxy* self, libqt_string headerName, libqt_string value);
void QNetworkProxy_Delete(QNetworkProxy* self);

QNetworkProxyFactory* QNetworkProxyFactory_new();
libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_QueryProxy(QNetworkProxyFactory* self, QNetworkProxyQuery* query);
void QNetworkProxyFactory_OnQueryProxy(QNetworkProxyFactory* self, intptr_t slot);
libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_QBaseQueryProxy(QNetworkProxyFactory* self, QNetworkProxyQuery* query);
bool QNetworkProxyFactory_UsesSystemConfiguration();
void QNetworkProxyFactory_SetUseSystemConfiguration(bool enable);
void QNetworkProxyFactory_SetApplicationProxyFactory(QNetworkProxyFactory* factory);
libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_ProxyForQuery(QNetworkProxyQuery* query);
libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_SystemProxyForQuery();
void QNetworkProxyFactory_OperatorAssign(QNetworkProxyFactory* self, QNetworkProxyFactory* param1);
libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_SystemProxyForQuery1(QNetworkProxyQuery* query);
void QNetworkProxyFactory_Delete(QNetworkProxyFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
