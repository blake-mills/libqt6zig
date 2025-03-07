#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextDocument>
#include <QTextDocumentFragment>
#include <QTextDocumentWriter>
#include <qtextdocumentwriter.h>
#include "libqtextdocumentwriter.h"
#include "libqtextdocumentwriter.hxx"

QTextDocumentWriter* QTextDocumentWriter_new() {
    return new QTextDocumentWriter();
}

QTextDocumentWriter* QTextDocumentWriter_new2(QIODevice* device, libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    return new QTextDocumentWriter(device, format_QByteArray);
}

QTextDocumentWriter* QTextDocumentWriter_new3(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QTextDocumentWriter(fileName_QString);
}

QTextDocumentWriter* QTextDocumentWriter_new4(libqt_string fileName, libqt_string format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray format_QByteArray(format.data, format.len);
    return new QTextDocumentWriter(fileName_QString, format_QByteArray);
}

void QTextDocumentWriter_SetFormat(QTextDocumentWriter* self, libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    self->setFormat(format_QByteArray);
}

libqt_string QTextDocumentWriter_Format(const QTextDocumentWriter* self) {
    QByteArray _qb = self->format();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTextDocumentWriter_SetDevice(QTextDocumentWriter* self, QIODevice* device) {
    self->setDevice(device);
}

QIODevice* QTextDocumentWriter_Device(const QTextDocumentWriter* self) {
    return self->device();
}

void QTextDocumentWriter_SetFileName(QTextDocumentWriter* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileName(fileName_QString);
}

libqt_string QTextDocumentWriter_FileName(const QTextDocumentWriter* self) {
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

bool QTextDocumentWriter_Write(QTextDocumentWriter* self, QTextDocument* document) {
    return self->write(document);
}

bool QTextDocumentWriter_WriteWithFragment(QTextDocumentWriter* self, QTextDocumentFragment* fragment) {
    return self->write(*fragment);
}

libqt_list /* of libqt_string */ QTextDocumentWriter_SupportedDocumentFormats() {
    QList<QByteArray> _ret = QTextDocumentWriter::supportedDocumentFormats();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_qb.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QTextDocumentWriter_Delete(QTextDocumentWriter* self) {
    delete self;
}
