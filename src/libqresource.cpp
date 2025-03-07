#include <QByteArray>
#include <QDateTime>
#include <QLocale>
#include <QResource>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qresource.h>
#include "libqresource.h"
#include "libqresource.hxx"

QResource* QResource_new() {
    return new QResource();
}

QResource* QResource_new2(libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new QResource(file_QString);
}

QResource* QResource_new3(libqt_string file, QLocale* locale) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new QResource(file_QString, *locale);
}

void QResource_SetFileName(QResource* self, libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->setFileName(file_QString);
}

libqt_string QResource_FileName(const QResource* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QResource_AbsoluteFilePath(const QResource* self) {
    QString _ret = self->absoluteFilePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QResource_SetLocale(QResource* self, QLocale* locale) {
    self->setLocale(*locale);
}

QLocale* QResource_Locale(const QResource* self) {
    return new QLocale(self->locale());
}

bool QResource_IsValid(const QResource* self) {
    return self->isValid();
}

int QResource_CompressionAlgorithm(const QResource* self) {
    return static_cast<int>(self->compressionAlgorithm());
}

long long QResource_Size(const QResource* self) {
    return static_cast<long long>(self->size());
}

const unsigned char* QResource_Data(const QResource* self) {
    return static_cast<const unsigned char*>(self->data());
}

long long QResource_UncompressedSize(const QResource* self) {
    return static_cast<long long>(self->uncompressedSize());
}

libqt_string QResource_UncompressedData(const QResource* self) {
    QByteArray _qb = self->uncompressedData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QDateTime* QResource_LastModified(const QResource* self) {
    return new QDateTime(self->lastModified());
}

bool QResource_RegisterResource(libqt_string rccFilename) {
    QString rccFilename_QString = QString::fromUtf8(rccFilename.data, rccFilename.len);
    return QResource::registerResource(rccFilename_QString);
}

bool QResource_UnregisterResource(libqt_string rccFilename) {
    QString rccFilename_QString = QString::fromUtf8(rccFilename.data, rccFilename.len);
    return QResource::unregisterResource(rccFilename_QString);
}

bool QResource_RegisterResourceWithRccData(const unsigned char* rccData) {
    return QResource::registerResource(static_cast<const uchar*>(rccData));
}

bool QResource_UnregisterResourceWithRccData(const unsigned char* rccData) {
    return QResource::unregisterResource(static_cast<const uchar*>(rccData));
}

bool QResource_RegisterResource2(libqt_string rccFilename, libqt_string resourceRoot) {
    QString rccFilename_QString = QString::fromUtf8(rccFilename.data, rccFilename.len);
    QString resourceRoot_QString = QString::fromUtf8(resourceRoot.data, resourceRoot.len);
    return QResource::registerResource(rccFilename_QString, resourceRoot_QString);
}

bool QResource_UnregisterResource2(libqt_string rccFilename, libqt_string resourceRoot) {
    QString rccFilename_QString = QString::fromUtf8(rccFilename.data, rccFilename.len);
    QString resourceRoot_QString = QString::fromUtf8(resourceRoot.data, resourceRoot.len);
    return QResource::unregisterResource(rccFilename_QString, resourceRoot_QString);
}

bool QResource_RegisterResource22(const unsigned char* rccData, libqt_string resourceRoot) {
    QString resourceRoot_QString = QString::fromUtf8(resourceRoot.data, resourceRoot.len);
    return QResource::registerResource(static_cast<const uchar*>(rccData), resourceRoot_QString);
}

bool QResource_UnregisterResource22(const unsigned char* rccData, libqt_string resourceRoot) {
    QString resourceRoot_QString = QString::fromUtf8(resourceRoot.data, resourceRoot.len);
    return QResource::unregisterResource(static_cast<const uchar*>(rccData), resourceRoot_QString);
}

void QResource_Delete(QResource* self) {
    delete self;
}
