#include <QCommandLineOption>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcommandlineoption.h>
#include "libqcommandlineoption.h"
#include "libqcommandlineoption.hxx"

QCommandLineOption* QCommandLineOption_new(libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QCommandLineOption(name_QString);
}

QCommandLineOption* QCommandLineOption_new2(libqt_list /* of libqt_string */ names) {
    QStringList names_QList;
    names_QList.reserve(names.len);
    libqt_string* names_arr = static_cast<libqt_string*>(names.data);
    for (size_t i = 0; i < names.len; ++i) {
        QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
        names_QList.push_back(names_arr_i_QString);
    }
    return new QCommandLineOption(names_QList);
}

QCommandLineOption* QCommandLineOption_new3(libqt_string name, libqt_string description) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    return new QCommandLineOption(name_QString, description_QString);
}

QCommandLineOption* QCommandLineOption_new4(libqt_list /* of libqt_string */ names, libqt_string description) {
    QStringList names_QList;
    names_QList.reserve(names.len);
    libqt_string* names_arr = static_cast<libqt_string*>(names.data);
    for (size_t i = 0; i < names.len; ++i) {
        QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
        names_QList.push_back(names_arr_i_QString);
    }
    QString description_QString = QString::fromUtf8(description.data, description.len);
    return new QCommandLineOption(names_QList, description_QString);
}

QCommandLineOption* QCommandLineOption_new5(QCommandLineOption* other) {
    return new QCommandLineOption(*other);
}

QCommandLineOption* QCommandLineOption_new6(libqt_string name, libqt_string description, libqt_string valueName) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString valueName_QString = QString::fromUtf8(valueName.data, valueName.len);
    return new QCommandLineOption(name_QString, description_QString, valueName_QString);
}

QCommandLineOption* QCommandLineOption_new7(libqt_string name, libqt_string description, libqt_string valueName, libqt_string defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString valueName_QString = QString::fromUtf8(valueName.data, valueName.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    return new QCommandLineOption(name_QString, description_QString, valueName_QString, defaultValue_QString);
}

QCommandLineOption* QCommandLineOption_new8(libqt_list /* of libqt_string */ names, libqt_string description, libqt_string valueName) {
    QStringList names_QList;
    names_QList.reserve(names.len);
    libqt_string* names_arr = static_cast<libqt_string*>(names.data);
    for (size_t i = 0; i < names.len; ++i) {
        QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
        names_QList.push_back(names_arr_i_QString);
    }
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString valueName_QString = QString::fromUtf8(valueName.data, valueName.len);
    return new QCommandLineOption(names_QList, description_QString, valueName_QString);
}

QCommandLineOption* QCommandLineOption_new9(libqt_list /* of libqt_string */ names, libqt_string description, libqt_string valueName, libqt_string defaultValue) {
    QStringList names_QList;
    names_QList.reserve(names.len);
    libqt_string* names_arr = static_cast<libqt_string*>(names.data);
    for (size_t i = 0; i < names.len; ++i) {
        QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
        names_QList.push_back(names_arr_i_QString);
    }
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString valueName_QString = QString::fromUtf8(valueName.data, valueName.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    return new QCommandLineOption(names_QList, description_QString, valueName_QString, defaultValue_QString);
}

void QCommandLineOption_OperatorAssign(QCommandLineOption* self, QCommandLineOption* other) {
    self->operator=(*other);
}

void QCommandLineOption_Swap(QCommandLineOption* self, QCommandLineOption* other) {
    self->swap(*other);
}

libqt_list /* of libqt_string */ QCommandLineOption_Names(const QCommandLineOption* self) {
    QStringList _ret = self->names();
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

void QCommandLineOption_SetValueName(QCommandLineOption* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setValueName(name_QString);
}

libqt_string QCommandLineOption_ValueName(const QCommandLineOption* self) {
    QString _ret = self->valueName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCommandLineOption_SetDescription(QCommandLineOption* self, libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

libqt_string QCommandLineOption_Description(const QCommandLineOption* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QCommandLineOption_SetDefaultValue(QCommandLineOption* self, libqt_string defaultValue) {
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    self->setDefaultValue(defaultValue_QString);
}

void QCommandLineOption_SetDefaultValues(QCommandLineOption* self, libqt_list /* of libqt_string */ defaultValues) {
    QStringList defaultValues_QList;
    defaultValues_QList.reserve(defaultValues.len);
    libqt_string* defaultValues_arr = static_cast<libqt_string*>(defaultValues.data);
    for (size_t i = 0; i < defaultValues.len; ++i) {
        QString defaultValues_arr_i_QString = QString::fromUtf8(defaultValues_arr[i].data, defaultValues_arr[i].len);
        defaultValues_QList.push_back(defaultValues_arr_i_QString);
    }
    self->setDefaultValues(defaultValues_QList);
}

libqt_list /* of libqt_string */ QCommandLineOption_DefaultValues(const QCommandLineOption* self) {
    QStringList _ret = self->defaultValues();
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

int QCommandLineOption_Flags(const QCommandLineOption* self) {
    return static_cast<int>(self->flags());
}

void QCommandLineOption_SetFlags(QCommandLineOption* self, int aflags) {
    self->setFlags(static_cast<QCommandLineOption::Flags>(aflags));
}

void QCommandLineOption_Delete(QCommandLineOption* self) {
    delete self;
}
