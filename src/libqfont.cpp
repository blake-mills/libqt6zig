#include <QFont>
#include <QList>
#include <QPaintDevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qfont.h>
#include "libqfont.h"
#include "libqfont.hxx"

QFont* QFont_new() {
    return new QFont();
}

QFont* QFont_new2(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return new QFont(family_QString);
}

QFont* QFont_new3(libqt_list /* of libqt_string */ families) {
    QStringList families_QList;
    families_QList.reserve(families.len);
    libqt_string* families_arr = static_cast<libqt_string*>(families.data);
    for (size_t i = 0; i < families.len; ++i) {
        QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
        families_QList.push_back(families_arr_i_QString);
    }
    return new QFont(families_QList);
}

QFont* QFont_new4(QFont* font, QPaintDevice* pd) {
    return new QFont(*font, pd);
}

QFont* QFont_new5(QFont* font) {
    return new QFont(*font);
}

QFont* QFont_new6(libqt_string family, int pointSize) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return new QFont(family_QString, static_cast<int>(pointSize));
}

QFont* QFont_new7(libqt_string family, int pointSize, int weight) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return new QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight));
}

QFont* QFont_new8(libqt_string family, int pointSize, int weight, bool italic) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return new QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight), italic);
}

QFont* QFont_new9(libqt_list /* of libqt_string */ families, int pointSize) {
    QStringList families_QList;
    families_QList.reserve(families.len);
    libqt_string* families_arr = static_cast<libqt_string*>(families.data);
    for (size_t i = 0; i < families.len; ++i) {
        QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
        families_QList.push_back(families_arr_i_QString);
    }
    return new QFont(families_QList, static_cast<int>(pointSize));
}

QFont* QFont_new10(libqt_list /* of libqt_string */ families, int pointSize, int weight) {
    QStringList families_QList;
    families_QList.reserve(families.len);
    libqt_string* families_arr = static_cast<libqt_string*>(families.data);
    for (size_t i = 0; i < families.len; ++i) {
        QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
        families_QList.push_back(families_arr_i_QString);
    }
    return new QFont(families_QList, static_cast<int>(pointSize), static_cast<int>(weight));
}

QFont* QFont_new11(libqt_list /* of libqt_string */ families, int pointSize, int weight, bool italic) {
    QStringList families_QList;
    families_QList.reserve(families.len);
    libqt_string* families_arr = static_cast<libqt_string*>(families.data);
    for (size_t i = 0; i < families.len; ++i) {
        QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
        families_QList.push_back(families_arr_i_QString);
    }
    return new QFont(families_QList, static_cast<int>(pointSize), static_cast<int>(weight), italic);
}

void QFont_Swap(QFont* self, QFont* other) {
    self->swap(*other);
}

libqt_string QFont_Family(const QFont* self) {
    QString _ret = self->family();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFont_SetFamily(QFont* self, libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    self->setFamily(family_QString);
}

libqt_list /* of libqt_string */ QFont_Families(const QFont* self) {
    QStringList _ret = self->families();
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

void QFont_SetFamilies(QFont* self, libqt_list /* of libqt_string */ families) {
    QStringList families_QList;
    families_QList.reserve(families.len);
    libqt_string* families_arr = static_cast<libqt_string*>(families.data);
    for (size_t i = 0; i < families.len; ++i) {
        QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
        families_QList.push_back(families_arr_i_QString);
    }
    self->setFamilies(families_QList);
}

libqt_string QFont_StyleName(const QFont* self) {
    QString _ret = self->styleName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFont_SetStyleName(QFont* self, libqt_string styleName) {
    QString styleName_QString = QString::fromUtf8(styleName.data, styleName.len);
    self->setStyleName(styleName_QString);
}

int QFont_PointSize(const QFont* self) {
    return self->pointSize();
}

void QFont_SetPointSize(QFont* self, int pointSize) {
    self->setPointSize(static_cast<int>(pointSize));
}

double QFont_PointSizeF(const QFont* self) {
    return static_cast<double>(self->pointSizeF());
}

void QFont_SetPointSizeF(QFont* self, double pointSizeF) {
    self->setPointSizeF(static_cast<double>(pointSizeF));
}

int QFont_PixelSize(const QFont* self) {
    return self->pixelSize();
}

void QFont_SetPixelSize(QFont* self, int pixelSize) {
    self->setPixelSize(static_cast<int>(pixelSize));
}

int QFont_Weight(const QFont* self) {
    return static_cast<int>(self->weight());
}

void QFont_SetWeight(QFont* self, int weight) {
    self->setWeight(static_cast<QFont::Weight>(weight));
}

bool QFont_Bold(const QFont* self) {
    return self->bold();
}

void QFont_SetBold(QFont* self, bool bold) {
    self->setBold(bold);
}

void QFont_SetStyle(QFont* self, int style) {
    self->setStyle(static_cast<QFont::Style>(style));
}

int QFont_Style(const QFont* self) {
    return static_cast<int>(self->style());
}

bool QFont_Italic(const QFont* self) {
    return self->italic();
}

void QFont_SetItalic(QFont* self, bool b) {
    self->setItalic(b);
}

bool QFont_Underline(const QFont* self) {
    return self->underline();
}

void QFont_SetUnderline(QFont* self, bool underline) {
    self->setUnderline(underline);
}

bool QFont_Overline(const QFont* self) {
    return self->overline();
}

void QFont_SetOverline(QFont* self, bool overline) {
    self->setOverline(overline);
}

bool QFont_StrikeOut(const QFont* self) {
    return self->strikeOut();
}

void QFont_SetStrikeOut(QFont* self, bool strikeOut) {
    self->setStrikeOut(strikeOut);
}

bool QFont_FixedPitch(const QFont* self) {
    return self->fixedPitch();
}

void QFont_SetFixedPitch(QFont* self, bool fixedPitch) {
    self->setFixedPitch(fixedPitch);
}

bool QFont_Kerning(const QFont* self) {
    return self->kerning();
}

void QFont_SetKerning(QFont* self, bool kerning) {
    self->setKerning(kerning);
}

int QFont_StyleHint(const QFont* self) {
    return static_cast<int>(self->styleHint());
}

int QFont_StyleStrategy(const QFont* self) {
    return static_cast<int>(self->styleStrategy());
}

void QFont_SetStyleHint(QFont* self, int param1) {
    self->setStyleHint(static_cast<QFont::StyleHint>(param1));
}

void QFont_SetStyleStrategy(QFont* self, int s) {
    self->setStyleStrategy(static_cast<QFont::StyleStrategy>(s));
}

int QFont_Stretch(const QFont* self) {
    return self->stretch();
}

void QFont_SetStretch(QFont* self, int stretch) {
    self->setStretch(static_cast<int>(stretch));
}

double QFont_LetterSpacing(const QFont* self) {
    return static_cast<double>(self->letterSpacing());
}

int QFont_LetterSpacingType(const QFont* self) {
    return static_cast<int>(self->letterSpacingType());
}

void QFont_SetLetterSpacing(QFont* self, int typeVal, double spacing) {
    self->setLetterSpacing(static_cast<QFont::SpacingType>(typeVal), static_cast<qreal>(spacing));
}

double QFont_WordSpacing(const QFont* self) {
    return static_cast<double>(self->wordSpacing());
}

void QFont_SetWordSpacing(QFont* self, double spacing) {
    self->setWordSpacing(static_cast<qreal>(spacing));
}

void QFont_SetCapitalization(QFont* self, int capitalization) {
    self->setCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

int QFont_Capitalization(const QFont* self) {
    return static_cast<int>(self->capitalization());
}

void QFont_SetHintingPreference(QFont* self, int hintingPreference) {
    self->setHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

int QFont_HintingPreference(const QFont* self) {
    return static_cast<int>(self->hintingPreference());
}

bool QFont_ExactMatch(const QFont* self) {
    return self->exactMatch();
}

void QFont_OperatorAssign(QFont* self, QFont* param1) {
    self->operator=(*param1);
}

bool QFont_OperatorEqual(const QFont* self, QFont* param1) {
    return (*self == *param1);
}

bool QFont_OperatorNotEqual(const QFont* self, QFont* param1) {
    return (*self != *param1);
}

bool QFont_OperatorLesser(const QFont* self, QFont* param1) {
    return (*self < *param1);
}

QVariant* QFont_ToQVariant(const QFont* self) {
    return new QVariant(self->operator QVariant());
}

bool QFont_IsCopyOf(const QFont* self, QFont* param1) {
    return self->isCopyOf(*param1);
}

libqt_string QFont_Key(const QFont* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFont_ToString(const QFont* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QFont_FromString(QFont* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return self->fromString(param1_QString);
}

libqt_string QFont_Substitute(libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = QFont::substitute(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QFont_Substitutes(libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QStringList _ret = QFont::substitutes(param1_QString);
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

libqt_list /* of libqt_string */ QFont_Substitutions() {
    QStringList _ret = QFont::substitutions();
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

void QFont_InsertSubstitution(libqt_string param1, libqt_string param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QFont::insertSubstitution(param1_QString, param2_QString);
}

void QFont_InsertSubstitutions(libqt_string param1, libqt_list /* of libqt_string */ param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QStringList param2_QList;
    param2_QList.reserve(param2.len);
    libqt_string* param2_arr = static_cast<libqt_string*>(param2.data);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_arr_i_QString = QString::fromUtf8(param2_arr[i].data, param2_arr[i].len);
        param2_QList.push_back(param2_arr_i_QString);
    }
    QFont::insertSubstitutions(param1_QString, param2_QList);
}

void QFont_RemoveSubstitutions(libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QFont::removeSubstitutions(param1_QString);
}

void QFont_Initialize() {
    QFont::initialize();
}

void QFont_Cleanup() {
    QFont::cleanup();
}

void QFont_CacheStatistics() {
    QFont::cacheStatistics();
}

libqt_string QFont_DefaultFamily(const QFont* self) {
    QString _ret = self->defaultFamily();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QFont* QFont_Resolve(const QFont* self, QFont* param1) {
    return new QFont(self->resolve(*param1));
}

unsigned int QFont_ResolveMask(const QFont* self) {
    return static_cast<unsigned int>(self->resolveMask());
}

void QFont_SetResolveMask(QFont* self, unsigned int mask) {
    self->setResolveMask(static_cast<uint>(mask));
}

void QFont_SetLegacyWeight(QFont* self, int legacyWeight) {
    self->setLegacyWeight(static_cast<int>(legacyWeight));
}

int QFont_LegacyWeight(const QFont* self) {
    return self->legacyWeight();
}

void QFont_SetStyleHint2(QFont* self, int param1, int param2) {
    self->setStyleHint(static_cast<QFont::StyleHint>(param1), static_cast<QFont::StyleStrategy>(param2));
}

void QFont_Delete(QFont* self) {
    delete self;
}
