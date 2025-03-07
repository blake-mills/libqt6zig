#include <QChar>
#include <QDir>
#include <QFileInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdir.h>
#include "libqdir.h"
#include "libqdir.hxx"

QDir* QDir_new(QDir* param1) {
    return new QDir(*param1);
}

QDir* QDir_new2() {
    return new QDir();
}

QDir* QDir_new3(libqt_string path, libqt_string nameFilter) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
    return new QDir(path_QString, nameFilter_QString);
}

QDir* QDir_new4(libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QDir(path_QString);
}

QDir* QDir_new5(libqt_string path, libqt_string nameFilter, int sort) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
    return new QDir(path_QString, nameFilter_QString, static_cast<QDir::SortFlags>(sort));
}

QDir* QDir_new6(libqt_string path, libqt_string nameFilter, int sort, int filter) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
    return new QDir(path_QString, nameFilter_QString, static_cast<QDir::SortFlags>(sort), static_cast<QDir::Filters>(filter));
}

void QDir_OperatorAssign(QDir* self, QDir* param1) {
    self->operator=(*param1);
}

void QDir_Swap(QDir* self, QDir* other) {
    self->swap(*other);
}

void QDir_SetPath(QDir* self, libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setPath(path_QString);
}

libqt_string QDir_Path(const QDir* self) {
    QString _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDir_AbsolutePath(const QDir* self) {
    QString _ret = self->absolutePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDir_CanonicalPath(const QDir* self) {
    QString _ret = self->canonicalPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QDir_SetSearchPaths(libqt_string prefix, libqt_list /* of libqt_string */ searchPaths) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    QStringList searchPaths_QList;
    searchPaths_QList.reserve(searchPaths.len);
    libqt_string* searchPaths_arr = static_cast<libqt_string*>(searchPaths.data);
    for (size_t i = 0; i < searchPaths.len; ++i) {
        QString searchPaths_arr_i_QString = QString::fromUtf8(searchPaths_arr[i].data, searchPaths_arr[i].len);
        searchPaths_QList.push_back(searchPaths_arr_i_QString);
    }
    QDir::setSearchPaths(prefix_QString, searchPaths_QList);
}

void QDir_AddSearchPath(libqt_string prefix, libqt_string path) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QDir::addSearchPath(prefix_QString, path_QString);
}

libqt_list /* of libqt_string */ QDir_SearchPaths(libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    QStringList _ret = QDir::searchPaths(prefix_QString);
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

libqt_string QDir_DirName(const QDir* self) {
    QString _ret = self->dirName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDir_FilePath(const QDir* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString _ret = self->filePath(fileName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDir_AbsoluteFilePath(const QDir* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString _ret = self->absoluteFilePath(fileName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDir_RelativeFilePath(const QDir* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString _ret = self->relativeFilePath(fileName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDir_ToNativeSeparators(libqt_string pathName) {
    QString pathName_QString = QString::fromUtf8(pathName.data, pathName.len);
    QString _ret = QDir::toNativeSeparators(pathName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDir_FromNativeSeparators(libqt_string pathName) {
    QString pathName_QString = QString::fromUtf8(pathName.data, pathName.len);
    QString _ret = QDir::fromNativeSeparators(pathName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QDir_Cd(QDir* self, libqt_string dirName) {
    QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
    return self->cd(dirName_QString);
}

bool QDir_CdUp(QDir* self) {
    return self->cdUp();
}

libqt_list /* of libqt_string */ QDir_NameFilters(const QDir* self) {
    QStringList _ret = self->nameFilters();
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

void QDir_SetNameFilters(QDir* self, libqt_list /* of libqt_string */ nameFilters) {
    QStringList nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    self->setNameFilters(nameFilters_QList);
}

int QDir_Filter(const QDir* self) {
    return static_cast<int>(self->filter());
}

void QDir_SetFilter(QDir* self, int filter) {
    self->setFilter(static_cast<QDir::Filters>(filter));
}

int QDir_Sorting(const QDir* self) {
    return static_cast<int>(self->sorting());
}

void QDir_SetSorting(QDir* self, int sort) {
    self->setSorting(static_cast<QDir::SortFlags>(sort));
}

unsigned int QDir_Count(const QDir* self) {
    return static_cast<unsigned int>(self->count());
}

bool QDir_IsEmpty(const QDir* self) {
    return self->isEmpty();
}

libqt_string QDir_OperatorSubscript(const QDir* self, int param1) {
    QString _ret = self->operator[](static_cast<int>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QDir_NameFiltersFromString(libqt_string nameFilter) {
    QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
    QStringList _ret = QDir::nameFiltersFromString(nameFilter_QString);
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

libqt_list /* of libqt_string */ QDir_EntryList(const QDir* self) {
    QStringList _ret = self->entryList();
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

libqt_list /* of libqt_string */ QDir_EntryListWithNameFilters(const QDir* self, libqt_list /* of libqt_string */ nameFilters) {
    QStringList nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    QStringList _ret = self->entryList(nameFilters_QList);
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

libqt_list /* of QFileInfo* */ QDir_EntryInfoList(const QDir* self) {
    QFileInfoList _ret = self->entryInfoList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QFileInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QFileInfo* */ QDir_EntryInfoListWithNameFilters(const QDir* self, libqt_list /* of libqt_string */ nameFilters) {
    QStringList nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    QFileInfoList _ret = self->entryInfoList(nameFilters_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QFileInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QDir_Mkdir(const QDir* self, libqt_string dirName) {
    QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
    return self->mkdir(dirName_QString);
}

bool QDir_Mkdir2(const QDir* self, libqt_string dirName, int permissions) {
    QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
    return self->mkdir(dirName_QString, static_cast<QFile::Permissions>(permissions));
}

bool QDir_Rmdir(const QDir* self, libqt_string dirName) {
    QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
    return self->rmdir(dirName_QString);
}

bool QDir_Mkpath(const QDir* self, libqt_string dirPath) {
    QString dirPath_QString = QString::fromUtf8(dirPath.data, dirPath.len);
    return self->mkpath(dirPath_QString);
}

bool QDir_Rmpath(const QDir* self, libqt_string dirPath) {
    QString dirPath_QString = QString::fromUtf8(dirPath.data, dirPath.len);
    return self->rmpath(dirPath_QString);
}

bool QDir_RemoveRecursively(QDir* self) {
    return self->removeRecursively();
}

bool QDir_IsReadable(const QDir* self) {
    return self->isReadable();
}

bool QDir_Exists(const QDir* self) {
    return self->exists();
}

bool QDir_IsRoot(const QDir* self) {
    return self->isRoot();
}

bool QDir_IsRelativePath(libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return QDir::isRelativePath(path_QString);
}

bool QDir_IsAbsolutePath(libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return QDir::isAbsolutePath(path_QString);
}

bool QDir_IsRelative(const QDir* self) {
    return self->isRelative();
}

bool QDir_IsAbsolute(const QDir* self) {
    return self->isAbsolute();
}

bool QDir_MakeAbsolute(QDir* self) {
    return self->makeAbsolute();
}

bool QDir_OperatorEqual(const QDir* self, QDir* dir) {
    return (*self == *dir);
}

bool QDir_OperatorNotEqual(const QDir* self, QDir* dir) {
    return (*self != *dir);
}

bool QDir_Remove(QDir* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->remove(fileName_QString);
}

bool QDir_Rename(QDir* self, libqt_string oldName, libqt_string newName) {
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->rename(oldName_QString, newName_QString);
}

bool QDir_ExistsWithName(const QDir* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->exists(name_QString);
}

libqt_list /* of QFileInfo* */ QDir_Drives() {
    QFileInfoList _ret = QDir::drives();
    // Convert QList<> from C++ memory to manually-managed C memory
    QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QFileInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QChar* QDir_ListSeparator() {
    return new QChar(QDir::listSeparator());
}

QChar* QDir_Separator() {
    return new QChar(QDir::separator());
}

bool QDir_SetCurrent(libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return QDir::setCurrent(path_QString);
}

QDir* QDir_Current() {
    return new QDir(QDir::current());
}

libqt_string QDir_CurrentPath() {
    QString _ret = QDir::currentPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QDir* QDir_Home() {
    return new QDir(QDir::home());
}

libqt_string QDir_HomePath() {
    QString _ret = QDir::homePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QDir* QDir_Root() {
    return new QDir(QDir::root());
}

libqt_string QDir_RootPath() {
    QString _ret = QDir::rootPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QDir* QDir_Temp() {
    return new QDir(QDir::temp());
}

libqt_string QDir_TempPath() {
    QString _ret = QDir::tempPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QDir_Match(libqt_list /* of libqt_string */ filters, libqt_string fileName) {
    QStringList filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QDir::match(filters_QList, fileName_QString);
}

bool QDir_Match2(libqt_string filter, libqt_string fileName) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QDir::match(filter_QString, fileName_QString);
}

libqt_string QDir_CleanPath(libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString _ret = QDir::cleanPath(path_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QDir_Refresh(const QDir* self) {
    self->refresh();
}

bool QDir_IsEmpty1(const QDir* self, int filters) {
    return self->isEmpty(static_cast<QDir::Filters>(filters));
}

libqt_list /* of libqt_string */ QDir_EntryList1(const QDir* self, int filters) {
    QStringList _ret = self->entryList(static_cast<QDir::Filters>(filters));
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

libqt_list /* of libqt_string */ QDir_EntryList2(const QDir* self, int filters, int sort) {
    QStringList _ret = self->entryList(static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
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

libqt_list /* of libqt_string */ QDir_EntryList22(const QDir* self, libqt_list /* of libqt_string */ nameFilters, int filters) {
    QStringList nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    QStringList _ret = self->entryList(nameFilters_QList, static_cast<QDir::Filters>(filters));
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

libqt_list /* of libqt_string */ QDir_EntryList3(const QDir* self, libqt_list /* of libqt_string */ nameFilters, int filters, int sort) {
    QStringList nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    QStringList _ret = self->entryList(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
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

libqt_list /* of QFileInfo* */ QDir_EntryInfoList1(const QDir* self, int filters) {
    QFileInfoList _ret = self->entryInfoList(static_cast<QDir::Filters>(filters));
    // Convert QList<> from C++ memory to manually-managed C memory
    QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QFileInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QFileInfo* */ QDir_EntryInfoList2(const QDir* self, int filters, int sort) {
    QFileInfoList _ret = self->entryInfoList(static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
    // Convert QList<> from C++ memory to manually-managed C memory
    QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QFileInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QFileInfo* */ QDir_EntryInfoList22(const QDir* self, libqt_list /* of libqt_string */ nameFilters, int filters) {
    QStringList nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    QFileInfoList _ret = self->entryInfoList(nameFilters_QList, static_cast<QDir::Filters>(filters));
    // Convert QList<> from C++ memory to manually-managed C memory
    QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QFileInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QFileInfo* */ QDir_EntryInfoList3(const QDir* self, libqt_list /* of libqt_string */ nameFilters, int filters, int sort) {
    QStringList nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    QFileInfoList _ret = self->entryInfoList(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
    // Convert QList<> from C++ memory to manually-managed C memory
    QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QFileInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDir_Delete(QDir* self) {
    delete self;
}
