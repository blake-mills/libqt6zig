#include <QAction>
#include <QAnyStringView>
#include <QAuthenticator>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPageLayout>
#include <QPageRanges>
#include <QPointF>
#include <QRect>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWebChannel>
#include <QWebEngineCertificateError>
#include <QWebEngineClientCertificateSelection>
#include <QWebEngineFileSystemAccessRequest>
#include <QWebEngineFindTextResult>
#include <QWebEngineFullScreenRequest>
#include <QWebEngineHistory>
#include <QWebEngineHttpRequest>
#include <QWebEngineLoadingInfo>
#include <QWebEngineNavigationRequest>
#include <QWebEngineNewWindowRequest>
#include <QWebEnginePage>
#include <QWebEngineProfile>
#include <QWebEngineQuotaRequest>
#include <QWebEngineRegisterProtocolHandlerRequest>
#include <QWebEngineScriptCollection>
#include <QWebEngineSettings>
#include <QWebEngineUrlRequestInterceptor>
#include <qwebenginepage.h>
#include "libqwebenginepage.h"
#include "libqwebenginepage.hxx"

QWebEnginePage* QWebEnginePage_new() {
    return new VirtualQWebEnginePage();
}

QWebEnginePage* QWebEnginePage_new2(QWebEngineProfile* profile) {
    return new VirtualQWebEnginePage(profile);
}

QWebEnginePage* QWebEnginePage_new3(QObject* parent) {
    return new VirtualQWebEnginePage(parent);
}

QWebEnginePage* QWebEnginePage_new4(QWebEngineProfile* profile, QObject* parent) {
    return new VirtualQWebEnginePage(profile, parent);
}

QMetaObject* QWebEnginePage_MetaObject(const QWebEnginePage* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEnginePage_Metacast(QWebEnginePage* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEnginePage_Metacall(QWebEnginePage* self, int param1, int param2, void** param3) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWebEnginePage_OnMetacall(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_Metacall_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWebEnginePage_QBaseMetacall(QWebEnginePage* self, int param1, int param2, void** param3) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_Metacall_IsBase(true);
        return vqwebenginepage->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWebEnginePage_Tr(const char* s) {
    QString _ret = QWebEnginePage::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QWebEngineHistory* QWebEnginePage_History(const QWebEnginePage* self) {
    return self->history();
}

bool QWebEnginePage_HasSelection(const QWebEnginePage* self) {
    return self->hasSelection();
}

libqt_string QWebEnginePage_SelectedText(const QWebEnginePage* self) {
    QString _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QWebEngineProfile* QWebEnginePage_Profile(const QWebEnginePage* self) {
    return self->profile();
}

QAction* QWebEnginePage_Action(const QWebEnginePage* self, int action) {
    return self->action(static_cast<QWebEnginePage::WebAction>(action));
}

void QWebEnginePage_ReplaceMisspelledWord(QWebEnginePage* self, libqt_string replacement) {
    QString replacement_QString = QString::fromUtf8(replacement.data, replacement.len);
    self->replaceMisspelledWord(replacement_QString);
}

void QWebEnginePage_SetFeaturePermission(QWebEnginePage* self, QUrl* securityOrigin, int feature, int policy) {
    self->setFeaturePermission(*securityOrigin, static_cast<QWebEnginePage::Feature>(feature), static_cast<QWebEnginePage::PermissionPolicy>(policy));
}

bool QWebEnginePage_IsLoading(const QWebEnginePage* self) {
    return self->isLoading();
}

void QWebEnginePage_Load(QWebEnginePage* self, QUrl* url) {
    self->load(*url);
}

void QWebEnginePage_LoadWithRequest(QWebEnginePage* self, QWebEngineHttpRequest* request) {
    self->load(*request);
}

void QWebEnginePage_Download(QWebEnginePage* self, QUrl* url) {
    self->download(*url);
}

void QWebEnginePage_SetHtml(QWebEnginePage* self, libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString);
}

void QWebEnginePage_SetContent(QWebEnginePage* self, libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setContent(data_QByteArray);
}

libqt_string QWebEnginePage_Title(const QWebEnginePage* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEnginePage_SetUrl(QWebEnginePage* self, QUrl* url) {
    self->setUrl(*url);
}

QUrl* QWebEnginePage_Url(const QWebEnginePage* self) {
    return new QUrl(self->url());
}

QUrl* QWebEnginePage_RequestedUrl(const QWebEnginePage* self) {
    return new QUrl(self->requestedUrl());
}

QUrl* QWebEnginePage_IconUrl(const QWebEnginePage* self) {
    return new QUrl(self->iconUrl());
}

QIcon* QWebEnginePage_Icon(const QWebEnginePage* self) {
    return new QIcon(self->icon());
}

double QWebEnginePage_ZoomFactor(const QWebEnginePage* self) {
    return static_cast<double>(self->zoomFactor());
}

void QWebEnginePage_SetZoomFactor(QWebEnginePage* self, double factor) {
    self->setZoomFactor(static_cast<qreal>(factor));
}

QPointF* QWebEnginePage_ScrollPosition(const QWebEnginePage* self) {
    return new QPointF(self->scrollPosition());
}

QSizeF* QWebEnginePage_ContentsSize(const QWebEnginePage* self) {
    return new QSizeF(self->contentsSize());
}

QWebEngineScriptCollection* QWebEnginePage_Scripts(QWebEnginePage* self) {
    QWebEngineScriptCollection& _ret = self->scripts();
    // Cast returned reference into pointer
    return &_ret;
}

QWebEngineSettings* QWebEnginePage_Settings(const QWebEnginePage* self) {
    return self->settings();
}

QWebChannel* QWebEnginePage_WebChannel(const QWebEnginePage* self) {
    return self->webChannel();
}

void QWebEnginePage_SetWebChannel(QWebEnginePage* self, QWebChannel* param1) {
    self->setWebChannel(param1);
}

QColor* QWebEnginePage_BackgroundColor(const QWebEnginePage* self) {
    return new QColor(self->backgroundColor());
}

void QWebEnginePage_SetBackgroundColor(QWebEnginePage* self, QColor* color) {
    self->setBackgroundColor(*color);
}

void QWebEnginePage_Save(const QWebEnginePage* self, libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->save(filePath_QString);
}

bool QWebEnginePage_IsAudioMuted(const QWebEnginePage* self) {
    return self->isAudioMuted();
}

void QWebEnginePage_SetAudioMuted(QWebEnginePage* self, bool muted) {
    self->setAudioMuted(muted);
}

bool QWebEnginePage_RecentlyAudible(const QWebEnginePage* self) {
    return self->recentlyAudible();
}

long long QWebEnginePage_RenderProcessPid(const QWebEnginePage* self) {
    return static_cast<long long>(self->renderProcessPid());
}

void QWebEnginePage_PrintToPdf(QWebEnginePage* self, libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString);
}

void QWebEnginePage_SetInspectedPage(QWebEnginePage* self, QWebEnginePage* page) {
    self->setInspectedPage(page);
}

QWebEnginePage* QWebEnginePage_InspectedPage(const QWebEnginePage* self) {
    return self->inspectedPage();
}

void QWebEnginePage_SetDevToolsPage(QWebEnginePage* self, QWebEnginePage* page) {
    self->setDevToolsPage(page);
}

QWebEnginePage* QWebEnginePage_DevToolsPage(const QWebEnginePage* self) {
    return self->devToolsPage();
}

void QWebEnginePage_SetUrlRequestInterceptor(QWebEnginePage* self, QWebEngineUrlRequestInterceptor* interceptor) {
    self->setUrlRequestInterceptor(interceptor);
}

int QWebEnginePage_LifecycleState(const QWebEnginePage* self) {
    return static_cast<int>(self->lifecycleState());
}

void QWebEnginePage_SetLifecycleState(QWebEnginePage* self, int state) {
    self->setLifecycleState(static_cast<QWebEnginePage::LifecycleState>(state));
}

int QWebEnginePage_RecommendedState(const QWebEnginePage* self) {
    return static_cast<int>(self->recommendedState());
}

bool QWebEnginePage_IsVisible(const QWebEnginePage* self) {
    return self->isVisible();
}

void QWebEnginePage_SetVisible(QWebEnginePage* self, bool visible) {
    self->setVisible(visible);
}

void QWebEnginePage_AcceptAsNewWindow(QWebEnginePage* self, QWebEngineNewWindowRequest* request) {
    self->acceptAsNewWindow(*request);
}

void QWebEnginePage_LoadStarted(QWebEnginePage* self) {
    self->loadStarted();
}

void QWebEnginePage_Connect_LoadStarted(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*) = reinterpret_cast<void (*)(QWebEnginePage*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::loadStarted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEnginePage_LoadProgress(QWebEnginePage* self, int progress) {
    self->loadProgress(static_cast<int>(progress));
}

void QWebEnginePage_Connect_LoadProgress(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, int) = reinterpret_cast<void (*)(QWebEnginePage*, int)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::loadProgress, [self, slotFunc](int progress) {
        int sigval1 = progress;
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_LoadFinished(QWebEnginePage* self, bool ok) {
    self->loadFinished(ok);
}

void QWebEnginePage_Connect_LoadFinished(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, bool) = reinterpret_cast<void (*)(QWebEnginePage*, bool)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::loadFinished, [self, slotFunc](bool ok) {
        bool sigval1 = ok;
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_LoadingChanged(QWebEnginePage* self, QWebEngineLoadingInfo* loadingInfo) {
    self->loadingChanged(*loadingInfo);
}

void QWebEnginePage_Connect_LoadingChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineLoadingInfo*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineLoadingInfo*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::loadingChanged, [self, slotFunc](const QWebEngineLoadingInfo& loadingInfo) {
        const QWebEngineLoadingInfo& loadingInfo_ret = loadingInfo;
        // Cast returned reference into pointer
        QWebEngineLoadingInfo* sigval1 = const_cast<QWebEngineLoadingInfo*>(&loadingInfo_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_LinkHovered(QWebEnginePage* self, libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->linkHovered(url_QString);
}

void QWebEnginePage_Connect_LinkHovered(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, libqt_string) = reinterpret_cast<void (*)(QWebEnginePage*, libqt_string)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::linkHovered, [self, slotFunc](const QString& url) {
        const QString url_ret = url;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray url_b = url_ret.toUtf8();
        libqt_string url_str;
        url_str.len = url_b.length();
        url_str.data = static_cast<char*>(malloc((url_str.len + 1) * sizeof(char)));
        memcpy(url_str.data, url_b.data(), url_str.len);
        url_str.data[url_str.len] = '\0';
        libqt_string sigval1 = url_str;
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_SelectionChanged(QWebEnginePage* self) {
    self->selectionChanged();
}

void QWebEnginePage_Connect_SelectionChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*) = reinterpret_cast<void (*)(QWebEnginePage*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEnginePage_GeometryChangeRequested(QWebEnginePage* self, QRect* geom) {
    self->geometryChangeRequested(*geom);
}

void QWebEnginePage_Connect_GeometryChangeRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QRect*) = reinterpret_cast<void (*)(QWebEnginePage*, QRect*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::geometryChangeRequested, [self, slotFunc](const QRect& geom) {
        const QRect& geom_ret = geom;
        // Cast returned reference into pointer
        QRect* sigval1 = const_cast<QRect*>(&geom_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_WindowCloseRequested(QWebEnginePage* self) {
    self->windowCloseRequested();
}

void QWebEnginePage_Connect_WindowCloseRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*) = reinterpret_cast<void (*)(QWebEnginePage*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::windowCloseRequested, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEnginePage_FeaturePermissionRequested(QWebEnginePage* self, QUrl* securityOrigin, int feature) {
    self->featurePermissionRequested(*securityOrigin, static_cast<QWebEnginePage::Feature>(feature));
}

void QWebEnginePage_Connect_FeaturePermissionRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QUrl*, int) = reinterpret_cast<void (*)(QWebEnginePage*, QUrl*, int)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::featurePermissionRequested, [self, slotFunc](const QUrl& securityOrigin, QWebEnginePage::Feature feature) {
        const QUrl& securityOrigin_ret = securityOrigin;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&securityOrigin_ret);
        int sigval2 = static_cast<int>(feature);
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebEnginePage_FeaturePermissionRequestCanceled(QWebEnginePage* self, QUrl* securityOrigin, int feature) {
    self->featurePermissionRequestCanceled(*securityOrigin, static_cast<QWebEnginePage::Feature>(feature));
}

void QWebEnginePage_Connect_FeaturePermissionRequestCanceled(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QUrl*, int) = reinterpret_cast<void (*)(QWebEnginePage*, QUrl*, int)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::featurePermissionRequestCanceled, [self, slotFunc](const QUrl& securityOrigin, QWebEnginePage::Feature feature) {
        const QUrl& securityOrigin_ret = securityOrigin;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&securityOrigin_ret);
        int sigval2 = static_cast<int>(feature);
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebEnginePage_FullScreenRequested(QWebEnginePage* self, QWebEngineFullScreenRequest* fullScreenRequest) {
    self->fullScreenRequested(*fullScreenRequest);
}

void QWebEnginePage_Connect_FullScreenRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineFullScreenRequest*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineFullScreenRequest*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::fullScreenRequested, [self, slotFunc](QWebEngineFullScreenRequest fullScreenRequest) {
        QWebEngineFullScreenRequest* sigval1 = new QWebEngineFullScreenRequest(fullScreenRequest);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_QuotaRequested(QWebEnginePage* self, QWebEngineQuotaRequest* quotaRequest) {
    self->quotaRequested(*quotaRequest);
}

void QWebEnginePage_Connect_QuotaRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineQuotaRequest*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineQuotaRequest*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::quotaRequested, [self, slotFunc](QWebEngineQuotaRequest quotaRequest) {
        QWebEngineQuotaRequest* sigval1 = new QWebEngineQuotaRequest(quotaRequest);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_RegisterProtocolHandlerRequested(QWebEnginePage* self, QWebEngineRegisterProtocolHandlerRequest* request) {
    self->registerProtocolHandlerRequested(*request);
}

void QWebEnginePage_Connect_RegisterProtocolHandlerRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineRegisterProtocolHandlerRequest*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineRegisterProtocolHandlerRequest*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::registerProtocolHandlerRequested, [self, slotFunc](QWebEngineRegisterProtocolHandlerRequest request) {
        QWebEngineRegisterProtocolHandlerRequest* sigval1 = new QWebEngineRegisterProtocolHandlerRequest(request);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_FileSystemAccessRequested(QWebEnginePage* self, QWebEngineFileSystemAccessRequest* request) {
    self->fileSystemAccessRequested(*request);
}

void QWebEnginePage_Connect_FileSystemAccessRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineFileSystemAccessRequest*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineFileSystemAccessRequest*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::fileSystemAccessRequested, [self, slotFunc](QWebEngineFileSystemAccessRequest request) {
        QWebEngineFileSystemAccessRequest* sigval1 = new QWebEngineFileSystemAccessRequest(request);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_SelectClientCertificate(QWebEnginePage* self, QWebEngineClientCertificateSelection* clientCertSelection) {
    self->selectClientCertificate(*clientCertSelection);
}

void QWebEnginePage_Connect_SelectClientCertificate(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineClientCertificateSelection*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineClientCertificateSelection*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::selectClientCertificate, [self, slotFunc](QWebEngineClientCertificateSelection clientCertSelection) {
        QWebEngineClientCertificateSelection* sigval1 = new QWebEngineClientCertificateSelection(clientCertSelection);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_AuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator) {
    self->authenticationRequired(*requestUrl, authenticator);
}

void QWebEnginePage_Connect_AuthenticationRequired(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QUrl*, QAuthenticator*) = reinterpret_cast<void (*)(QWebEnginePage*, QUrl*, QAuthenticator*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::authenticationRequired, [self, slotFunc](const QUrl& requestUrl, QAuthenticator* authenticator) {
        const QUrl& requestUrl_ret = requestUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&requestUrl_ret);
        QAuthenticator* sigval2 = authenticator;
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebEnginePage_ProxyAuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator, libqt_string proxyHost) {
    QString proxyHost_QString = QString::fromUtf8(proxyHost.data, proxyHost.len);
    self->proxyAuthenticationRequired(*requestUrl, authenticator, proxyHost_QString);
}

void QWebEnginePage_Connect_ProxyAuthenticationRequired(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QUrl*, QAuthenticator*, libqt_string) = reinterpret_cast<void (*)(QWebEnginePage*, QUrl*, QAuthenticator*, libqt_string)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::proxyAuthenticationRequired, [self, slotFunc](const QUrl& requestUrl, QAuthenticator* authenticator, const QString& proxyHost) {
        const QUrl& requestUrl_ret = requestUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&requestUrl_ret);
        QAuthenticator* sigval2 = authenticator;
        const QString proxyHost_ret = proxyHost;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray proxyHost_b = proxyHost_ret.toUtf8();
        libqt_string proxyHost_str;
        proxyHost_str.len = proxyHost_b.length();
        proxyHost_str.data = static_cast<char*>(malloc((proxyHost_str.len + 1) * sizeof(char)));
        memcpy(proxyHost_str.data, proxyHost_b.data(), proxyHost_str.len);
        proxyHost_str.data[proxyHost_str.len] = '\0';
        libqt_string sigval3 = proxyHost_str;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QWebEnginePage_RenderProcessTerminated(QWebEnginePage* self, int terminationStatus, int exitCode) {
    self->renderProcessTerminated(static_cast<QWebEnginePage::RenderProcessTerminationStatus>(terminationStatus), static_cast<int>(exitCode));
}

void QWebEnginePage_Connect_RenderProcessTerminated(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, int, int) = reinterpret_cast<void (*)(QWebEnginePage*, int, int)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::renderProcessTerminated, [self, slotFunc](QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
        int sigval1 = static_cast<int>(terminationStatus);
        int sigval2 = exitCode;
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebEnginePage_CertificateError(QWebEnginePage* self, QWebEngineCertificateError* certificateError) {
    self->certificateError(*certificateError);
}

void QWebEnginePage_Connect_CertificateError(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineCertificateError*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineCertificateError*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::certificateError, [self, slotFunc](const QWebEngineCertificateError& certificateError) {
        const QWebEngineCertificateError& certificateError_ret = certificateError;
        // Cast returned reference into pointer
        QWebEngineCertificateError* sigval1 = const_cast<QWebEngineCertificateError*>(&certificateError_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_NavigationRequested(QWebEnginePage* self, QWebEngineNavigationRequest* request) {
    self->navigationRequested(*request);
}

void QWebEnginePage_Connect_NavigationRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineNavigationRequest*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineNavigationRequest*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::navigationRequested, [self, slotFunc](QWebEngineNavigationRequest& request) {
        QWebEngineNavigationRequest& request_ret = request;
        // Cast returned reference into pointer
        QWebEngineNavigationRequest* sigval1 = &request_ret;
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_NewWindowRequested(QWebEnginePage* self, QWebEngineNewWindowRequest* request) {
    self->newWindowRequested(*request);
}

void QWebEnginePage_Connect_NewWindowRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineNewWindowRequest*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineNewWindowRequest*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::newWindowRequested, [self, slotFunc](QWebEngineNewWindowRequest& request) {
        QWebEngineNewWindowRequest& request_ret = request;
        // Cast returned reference into pointer
        QWebEngineNewWindowRequest* sigval1 = &request_ret;
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_TitleChanged(QWebEnginePage* self, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->titleChanged(title_QString);
}

void QWebEnginePage_Connect_TitleChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, libqt_string) = reinterpret_cast<void (*)(QWebEnginePage*, libqt_string)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::titleChanged, [self, slotFunc](const QString& title) {
        const QString title_ret = title;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray title_b = title_ret.toUtf8();
        libqt_string title_str;
        title_str.len = title_b.length();
        title_str.data = static_cast<char*>(malloc((title_str.len + 1) * sizeof(char)));
        memcpy(title_str.data, title_b.data(), title_str.len);
        title_str.data[title_str.len] = '\0';
        libqt_string sigval1 = title_str;
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_UrlChanged(QWebEnginePage* self, QUrl* url) {
    self->urlChanged(*url);
}

void QWebEnginePage_Connect_UrlChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QUrl*) = reinterpret_cast<void (*)(QWebEnginePage*, QUrl*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::urlChanged, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_IconUrlChanged(QWebEnginePage* self, QUrl* url) {
    self->iconUrlChanged(*url);
}

void QWebEnginePage_Connect_IconUrlChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QUrl*) = reinterpret_cast<void (*)(QWebEnginePage*, QUrl*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::iconUrlChanged, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_IconChanged(QWebEnginePage* self, QIcon* icon) {
    self->iconChanged(*icon);
}

void QWebEnginePage_Connect_IconChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QIcon*) = reinterpret_cast<void (*)(QWebEnginePage*, QIcon*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::iconChanged, [self, slotFunc](const QIcon& icon) {
        const QIcon& icon_ret = icon;
        // Cast returned reference into pointer
        QIcon* sigval1 = const_cast<QIcon*>(&icon_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_ScrollPositionChanged(QWebEnginePage* self, QPointF* position) {
    self->scrollPositionChanged(*position);
}

void QWebEnginePage_Connect_ScrollPositionChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QPointF*) = reinterpret_cast<void (*)(QWebEnginePage*, QPointF*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::scrollPositionChanged, [self, slotFunc](const QPointF& position) {
        const QPointF& position_ret = position;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&position_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_ContentsSizeChanged(QWebEnginePage* self, QSizeF* size) {
    self->contentsSizeChanged(*size);
}

void QWebEnginePage_Connect_ContentsSizeChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QSizeF*) = reinterpret_cast<void (*)(QWebEnginePage*, QSizeF*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::contentsSizeChanged, [self, slotFunc](const QSizeF& size) {
        const QSizeF& size_ret = size;
        // Cast returned reference into pointer
        QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_AudioMutedChanged(QWebEnginePage* self, bool muted) {
    self->audioMutedChanged(muted);
}

void QWebEnginePage_Connect_AudioMutedChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, bool) = reinterpret_cast<void (*)(QWebEnginePage*, bool)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::audioMutedChanged, [self, slotFunc](bool muted) {
        bool sigval1 = muted;
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_RecentlyAudibleChanged(QWebEnginePage* self, bool recentlyAudible) {
    self->recentlyAudibleChanged(recentlyAudible);
}

void QWebEnginePage_Connect_RecentlyAudibleChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, bool) = reinterpret_cast<void (*)(QWebEnginePage*, bool)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::recentlyAudibleChanged, [self, slotFunc](bool recentlyAudible) {
        bool sigval1 = recentlyAudible;
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_RenderProcessPidChanged(QWebEnginePage* self, long long pid) {
    self->renderProcessPidChanged(static_cast<qint64>(pid));
}

void QWebEnginePage_Connect_RenderProcessPidChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, long long) = reinterpret_cast<void (*)(QWebEnginePage*, long long)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::renderProcessPidChanged, [self, slotFunc](qint64 pid) {
        long long sigval1 = static_cast<long long>(pid);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_PdfPrintingFinished(QWebEnginePage* self, libqt_string filePath, bool success) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->pdfPrintingFinished(filePath_QString, success);
}

void QWebEnginePage_Connect_PdfPrintingFinished(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, libqt_string, bool) = reinterpret_cast<void (*)(QWebEnginePage*, libqt_string, bool)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::pdfPrintingFinished, [self, slotFunc](const QString& filePath, bool success) {
        const QString filePath_ret = filePath;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray filePath_b = filePath_ret.toUtf8();
        libqt_string filePath_str;
        filePath_str.len = filePath_b.length();
        filePath_str.data = static_cast<char*>(malloc((filePath_str.len + 1) * sizeof(char)));
        memcpy(filePath_str.data, filePath_b.data(), filePath_str.len);
        filePath_str.data[filePath_str.len] = '\0';
        libqt_string sigval1 = filePath_str;
        bool sigval2 = success;
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebEnginePage_PrintRequested(QWebEnginePage* self) {
    self->printRequested();
}

void QWebEnginePage_Connect_PrintRequested(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*) = reinterpret_cast<void (*)(QWebEnginePage*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::printRequested, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEnginePage_VisibleChanged(QWebEnginePage* self, bool visible) {
    self->visibleChanged(visible);
}

void QWebEnginePage_Connect_VisibleChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, bool) = reinterpret_cast<void (*)(QWebEnginePage*, bool)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::visibleChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_LifecycleStateChanged(QWebEnginePage* self, int state) {
    self->lifecycleStateChanged(static_cast<QWebEnginePage::LifecycleState>(state));
}

void QWebEnginePage_Connect_LifecycleStateChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, int) = reinterpret_cast<void (*)(QWebEnginePage*, int)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::lifecycleStateChanged, [self, slotFunc](QWebEnginePage::LifecycleState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_RecommendedStateChanged(QWebEnginePage* self, int state) {
    self->recommendedStateChanged(static_cast<QWebEnginePage::LifecycleState>(state));
}

void QWebEnginePage_Connect_RecommendedStateChanged(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, int) = reinterpret_cast<void (*)(QWebEnginePage*, int)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::recommendedStateChanged, [self, slotFunc](QWebEnginePage::LifecycleState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_FindTextFinished(QWebEnginePage* self, QWebEngineFindTextResult* result) {
    self->findTextFinished(*result);
}

void QWebEnginePage_Connect_FindTextFinished(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*, QWebEngineFindTextResult*) = reinterpret_cast<void (*)(QWebEnginePage*, QWebEngineFindTextResult*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::findTextFinished, [self, slotFunc](const QWebEngineFindTextResult& result) {
        const QWebEngineFindTextResult& result_ret = result;
        // Cast returned reference into pointer
        QWebEngineFindTextResult* sigval1 = const_cast<QWebEngineFindTextResult*>(&result_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEnginePage_QAboutToDelete(QWebEnginePage* self) {
    self->_q_aboutToDelete();
}

void QWebEnginePage_Connect_QAboutToDelete(QWebEnginePage* self, intptr_t slot) {
    void (*slotFunc)(QWebEnginePage*) = reinterpret_cast<void (*)(QWebEnginePage*)>(slot);
    QWebEnginePage::connect(self, &QWebEnginePage::_q_aboutToDelete, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QWebEnginePage_Tr2(const char* s, const char* c) {
    QString _ret = QWebEnginePage::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEnginePage_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEnginePage::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEnginePage_Download2(QWebEnginePage* self, QUrl* url, libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->download(*url, filename_QString);
}

void QWebEnginePage_SetHtml2(QWebEnginePage* self, libqt_string html, QUrl* baseUrl) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString, *baseUrl);
}

void QWebEnginePage_SetContent2(QWebEnginePage* self, libqt_string data, libqt_string mimeType) {
    QByteArray data_QByteArray(data.data, data.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->setContent(data_QByteArray, mimeType_QString);
}

void QWebEnginePage_SetContent3(QWebEnginePage* self, libqt_string data, libqt_string mimeType, QUrl* baseUrl) {
    QByteArray data_QByteArray(data.data, data.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebEnginePage_SetWebChannel2(QWebEnginePage* self, QWebChannel* param1, unsigned int worldId) {
    self->setWebChannel(param1, static_cast<quint32>(worldId));
}

void QWebEnginePage_Save2(const QWebEnginePage* self, libqt_string filePath, int format) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->save(filePath_QString, static_cast<QWebEngineDownloadRequest::SavePageFormat>(format));
}

void QWebEnginePage_PrintToPdf2(QWebEnginePage* self, libqt_string filePath, QPageLayout* layout) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString, *layout);
}

void QWebEnginePage_PrintToPdf3(QWebEnginePage* self, libqt_string filePath, QPageLayout* layout, QPageRanges* ranges) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString, *layout, *ranges);
}

// Derived class handler implementation
void QWebEnginePage_TriggerAction(QWebEnginePage* self, int action, bool checked) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->triggerAction(static_cast<QWebEnginePage::WebAction>(action), checked);
    } else {
        vqwebenginepage->triggerAction(static_cast<QWebEnginePage::WebAction>(action), checked);
    }
}

// Base class handler implementation
void QWebEnginePage_QBaseTriggerAction(QWebEnginePage* self, int action, bool checked) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_TriggerAction_IsBase(true);
        vqwebenginepage->triggerAction(static_cast<QWebEnginePage::WebAction>(action), checked);
    } else {
        vqwebenginepage->triggerAction(static_cast<QWebEnginePage::WebAction>(action), checked);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnTriggerAction(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_TriggerAction_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_TriggerAction_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEnginePage_Event(QWebEnginePage* self, QEvent* param1) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        return vqwebenginepage->event(param1);
    } else {
        return vqwebenginepage->event(param1);
    }
}

// Base class handler implementation
bool QWebEnginePage_QBaseEvent(QWebEnginePage* self, QEvent* param1) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_Event_IsBase(true);
        return vqwebenginepage->event(param1);
    } else {
        return vqwebenginepage->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnEvent(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_Event_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QWebEnginePage* QWebEnginePage_CreateWindow(QWebEnginePage* self, int typeVal) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        return vqwebenginepage->createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    } else {
        return vqwebenginepage->createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    }
}

// Base class handler implementation
QWebEnginePage* QWebEnginePage_QBaseCreateWindow(QWebEnginePage* self, int typeVal) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_CreateWindow_IsBase(true);
        return vqwebenginepage->createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    } else {
        return vqwebenginepage->createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnCreateWindow(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_CreateWindow_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_CreateWindow_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QWebEnginePage_ChooseFiles(QWebEnginePage* self, int mode, libqt_list /* of libqt_string */ oldFiles, libqt_list /* of libqt_string */ acceptedMimeTypes) {
    QStringList oldFiles_QList;
    oldFiles_QList.reserve(oldFiles.len);
    libqt_string* oldFiles_arr = static_cast<libqt_string*>(oldFiles.data);
    for (size_t i = 0; i < oldFiles.len; ++i) {
        QString oldFiles_arr_i_QString = QString::fromUtf8(oldFiles_arr[i].data, oldFiles_arr[i].len);
        oldFiles_QList.push_back(oldFiles_arr_i_QString);
    }
    QStringList acceptedMimeTypes_QList;
    acceptedMimeTypes_QList.reserve(acceptedMimeTypes.len);
    libqt_string* acceptedMimeTypes_arr = static_cast<libqt_string*>(acceptedMimeTypes.data);
    for (size_t i = 0; i < acceptedMimeTypes.len; ++i) {
        QString acceptedMimeTypes_arr_i_QString = QString::fromUtf8(acceptedMimeTypes_arr[i].data, acceptedMimeTypes_arr[i].len);
        acceptedMimeTypes_QList.push_back(acceptedMimeTypes_arr_i_QString);
    }
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        QStringList _ret = vqwebenginepage->chooseFiles(static_cast<QWebEnginePage::FileSelectionMode>(mode), oldFiles_QList, acceptedMimeTypes_QList);
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
        QStringList _ret = vqwebenginepage->chooseFiles(static_cast<QWebEnginePage::FileSelectionMode>(mode), oldFiles_QList, acceptedMimeTypes_QList);
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
libqt_list /* of libqt_string */ QWebEnginePage_QBaseChooseFiles(QWebEnginePage* self, int mode, libqt_list /* of libqt_string */ oldFiles, libqt_list /* of libqt_string */ acceptedMimeTypes) {
    QStringList oldFiles_QList;
    oldFiles_QList.reserve(oldFiles.len);
    libqt_string* oldFiles_arr = static_cast<libqt_string*>(oldFiles.data);
    for (size_t i = 0; i < oldFiles.len; ++i) {
        QString oldFiles_arr_i_QString = QString::fromUtf8(oldFiles_arr[i].data, oldFiles_arr[i].len);
        oldFiles_QList.push_back(oldFiles_arr_i_QString);
    }
    QStringList acceptedMimeTypes_QList;
    acceptedMimeTypes_QList.reserve(acceptedMimeTypes.len);
    libqt_string* acceptedMimeTypes_arr = static_cast<libqt_string*>(acceptedMimeTypes.data);
    for (size_t i = 0; i < acceptedMimeTypes.len; ++i) {
        QString acceptedMimeTypes_arr_i_QString = QString::fromUtf8(acceptedMimeTypes_arr[i].data, acceptedMimeTypes_arr[i].len);
        acceptedMimeTypes_QList.push_back(acceptedMimeTypes_arr_i_QString);
    }
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_ChooseFiles_IsBase(true);
        QStringList _ret = vqwebenginepage->chooseFiles(static_cast<QWebEnginePage::FileSelectionMode>(mode), oldFiles_QList, acceptedMimeTypes_QList);
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
        QStringList _ret = vqwebenginepage->chooseFiles(static_cast<QWebEnginePage::FileSelectionMode>(mode), oldFiles_QList, acceptedMimeTypes_QList);
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
void QWebEnginePage_OnChooseFiles(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_ChooseFiles_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_ChooseFiles_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEnginePage_JavaScriptAlert(QWebEnginePage* self, QUrl* securityOrigin, libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->javaScriptAlert(*securityOrigin, msg_QString);
    } else {
        vqwebenginepage->javaScriptAlert(*securityOrigin, msg_QString);
    }
}

// Base class handler implementation
void QWebEnginePage_QBaseJavaScriptAlert(QWebEnginePage* self, QUrl* securityOrigin, libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_JavaScriptAlert_IsBase(true);
        vqwebenginepage->javaScriptAlert(*securityOrigin, msg_QString);
    } else {
        vqwebenginepage->javaScriptAlert(*securityOrigin, msg_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnJavaScriptAlert(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_JavaScriptAlert_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_JavaScriptAlert_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEnginePage_JavaScriptConfirm(QWebEnginePage* self, QUrl* securityOrigin, libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        return vqwebenginepage->javaScriptConfirm(*securityOrigin, msg_QString);
    } else {
        return vqwebenginepage->javaScriptConfirm(*securityOrigin, msg_QString);
    }
}

// Base class handler implementation
bool QWebEnginePage_QBaseJavaScriptConfirm(QWebEnginePage* self, QUrl* securityOrigin, libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_JavaScriptConfirm_IsBase(true);
        return vqwebenginepage->javaScriptConfirm(*securityOrigin, msg_QString);
    } else {
        return vqwebenginepage->javaScriptConfirm(*securityOrigin, msg_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnJavaScriptConfirm(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_JavaScriptConfirm_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_JavaScriptConfirm_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEnginePage_JavaScriptConsoleMessage(QWebEnginePage* self, int level, libqt_string message, int lineNumber, libqt_string sourceID) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString sourceID_QString = QString::fromUtf8(sourceID.data, sourceID.len);
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->javaScriptConsoleMessage(static_cast<QWebEnginePage::JavaScriptConsoleMessageLevel>(level), message_QString, static_cast<int>(lineNumber), sourceID_QString);
    } else {
        vqwebenginepage->javaScriptConsoleMessage(static_cast<QWebEnginePage::JavaScriptConsoleMessageLevel>(level), message_QString, static_cast<int>(lineNumber), sourceID_QString);
    }
}

// Base class handler implementation
void QWebEnginePage_QBaseJavaScriptConsoleMessage(QWebEnginePage* self, int level, libqt_string message, int lineNumber, libqt_string sourceID) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString sourceID_QString = QString::fromUtf8(sourceID.data, sourceID.len);
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_JavaScriptConsoleMessage_IsBase(true);
        vqwebenginepage->javaScriptConsoleMessage(static_cast<QWebEnginePage::JavaScriptConsoleMessageLevel>(level), message_QString, static_cast<int>(lineNumber), sourceID_QString);
    } else {
        vqwebenginepage->javaScriptConsoleMessage(static_cast<QWebEnginePage::JavaScriptConsoleMessageLevel>(level), message_QString, static_cast<int>(lineNumber), sourceID_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnJavaScriptConsoleMessage(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_JavaScriptConsoleMessage_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_JavaScriptConsoleMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEnginePage_AcceptNavigationRequest(QWebEnginePage* self, QUrl* url, int typeVal, bool isMainFrame) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        return vqwebenginepage->acceptNavigationRequest(*url, static_cast<QWebEnginePage::NavigationType>(typeVal), isMainFrame);
    } else {
        return vqwebenginepage->acceptNavigationRequest(*url, static_cast<QWebEnginePage::NavigationType>(typeVal), isMainFrame);
    }
}

// Base class handler implementation
bool QWebEnginePage_QBaseAcceptNavigationRequest(QWebEnginePage* self, QUrl* url, int typeVal, bool isMainFrame) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_AcceptNavigationRequest_IsBase(true);
        return vqwebenginepage->acceptNavigationRequest(*url, static_cast<QWebEnginePage::NavigationType>(typeVal), isMainFrame);
    } else {
        return vqwebenginepage->acceptNavigationRequest(*url, static_cast<QWebEnginePage::NavigationType>(typeVal), isMainFrame);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnAcceptNavigationRequest(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_AcceptNavigationRequest_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_AcceptNavigationRequest_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEnginePage_EventFilter(QWebEnginePage* self, QObject* watched, QEvent* event) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        return vqwebenginepage->eventFilter(watched, event);
    } else {
        return vqwebenginepage->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebEnginePage_QBaseEventFilter(QWebEnginePage* self, QObject* watched, QEvent* event) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_EventFilter_IsBase(true);
        return vqwebenginepage->eventFilter(watched, event);
    } else {
        return vqwebenginepage->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnEventFilter(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_EventFilter_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEnginePage_TimerEvent(QWebEnginePage* self, QTimerEvent* event) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->timerEvent(event);
    } else {
        vqwebenginepage->timerEvent(event);
    }
}

// Base class handler implementation
void QWebEnginePage_QBaseTimerEvent(QWebEnginePage* self, QTimerEvent* event) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_TimerEvent_IsBase(true);
        vqwebenginepage->timerEvent(event);
    } else {
        vqwebenginepage->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnTimerEvent(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_TimerEvent_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEnginePage_ChildEvent(QWebEnginePage* self, QChildEvent* event) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->childEvent(event);
    } else {
        vqwebenginepage->childEvent(event);
    }
}

// Base class handler implementation
void QWebEnginePage_QBaseChildEvent(QWebEnginePage* self, QChildEvent* event) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_ChildEvent_IsBase(true);
        vqwebenginepage->childEvent(event);
    } else {
        vqwebenginepage->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnChildEvent(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_ChildEvent_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEnginePage_CustomEvent(QWebEnginePage* self, QEvent* event) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->customEvent(event);
    } else {
        vqwebenginepage->customEvent(event);
    }
}

// Base class handler implementation
void QWebEnginePage_QBaseCustomEvent(QWebEnginePage* self, QEvent* event) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_CustomEvent_IsBase(true);
        vqwebenginepage->customEvent(event);
    } else {
        vqwebenginepage->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnCustomEvent(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_CustomEvent_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEnginePage_ConnectNotify(QWebEnginePage* self, QMetaMethod* signal) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->connectNotify(*signal);
    } else {
        vqwebenginepage->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEnginePage_QBaseConnectNotify(QWebEnginePage* self, QMetaMethod* signal) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_ConnectNotify_IsBase(true);
        vqwebenginepage->connectNotify(*signal);
    } else {
        vqwebenginepage->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnConnectNotify(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_ConnectNotify_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEnginePage_DisconnectNotify(QWebEnginePage* self, QMetaMethod* signal) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->disconnectNotify(*signal);
    } else {
        vqwebenginepage->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEnginePage_QBaseDisconnectNotify(QWebEnginePage* self, QMetaMethod* signal) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_DisconnectNotify_IsBase(true);
        vqwebenginepage->disconnectNotify(*signal);
    } else {
        vqwebenginepage->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnDisconnectNotify(QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = dynamic_cast<VirtualQWebEnginePage*>(self)) {
        vqwebenginepage->setQWebEnginePage_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebEnginePage_Sender(const QWebEnginePage* self) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        return vqwebenginepage->sender();
    } else {
        return vqwebenginepage->sender();
    }
}

// Base class handler implementation
QObject* QWebEnginePage_QBaseSender(const QWebEnginePage* self) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        vqwebenginepage->setQWebEnginePage_Sender_IsBase(true);
        return vqwebenginepage->sender();
    } else {
        return vqwebenginepage->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnSender(const QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        vqwebenginepage->setQWebEnginePage_Sender_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEnginePage_SenderSignalIndex(const QWebEnginePage* self) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        return vqwebenginepage->senderSignalIndex();
    } else {
        return vqwebenginepage->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebEnginePage_QBaseSenderSignalIndex(const QWebEnginePage* self) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        vqwebenginepage->setQWebEnginePage_SenderSignalIndex_IsBase(true);
        return vqwebenginepage->senderSignalIndex();
    } else {
        return vqwebenginepage->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnSenderSignalIndex(const QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        vqwebenginepage->setQWebEnginePage_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEnginePage_Receivers(const QWebEnginePage* self, const char* signal) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        return vqwebenginepage->receivers(signal);
    } else {
        return vqwebenginepage->receivers(signal);
    }
}

// Base class handler implementation
int QWebEnginePage_QBaseReceivers(const QWebEnginePage* self, const char* signal) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        vqwebenginepage->setQWebEnginePage_Receivers_IsBase(true);
        return vqwebenginepage->receivers(signal);
    } else {
        return vqwebenginepage->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnReceivers(const QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        vqwebenginepage->setQWebEnginePage_Receivers_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEnginePage_IsSignalConnected(const QWebEnginePage* self, QMetaMethod* signal) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        return vqwebenginepage->isSignalConnected(*signal);
    } else {
        return vqwebenginepage->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebEnginePage_QBaseIsSignalConnected(const QWebEnginePage* self, QMetaMethod* signal) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        vqwebenginepage->setQWebEnginePage_IsSignalConnected_IsBase(true);
        return vqwebenginepage->isSignalConnected(*signal);
    } else {
        return vqwebenginepage->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEnginePage_OnIsSignalConnected(const QWebEnginePage* self, intptr_t slot) {
    if (auto* vqwebenginepage = const_cast<VirtualQWebEnginePage*>(dynamic_cast<const VirtualQWebEnginePage*>(self))) {
        vqwebenginepage->setQWebEnginePage_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebEnginePage::QWebEnginePage_IsSignalConnected_Callback>(slot));
    }
}

void QWebEnginePage_Delete(QWebEnginePage* self) {
    delete self;
}
