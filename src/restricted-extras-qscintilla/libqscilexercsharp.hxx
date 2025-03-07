#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCSHARP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCSHARP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCSharp so that we can call protected methods
class VirtualQsciLexerCSharp : public QsciLexerCSharp {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerCSharp_Metacall_Callback = int (*)(QsciLexerCSharp*, QMetaObject::Call, int, void**);
    using QsciLexerCSharp_SetFoldAtElse_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetFoldComments_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetFoldCompact_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetFoldPreprocessor_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetStylePreprocessor_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_Language_Callback = const char* (*)();
    using QsciLexerCSharp_Lexer_Callback = const char* (*)();
    using QsciLexerCSharp_LexerId_Callback = int (*)();
    using QsciLexerCSharp_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerCSharp_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerCSharp_BlockEnd_Callback = const char* (*)(const QsciLexerCSharp*, int*);
    using QsciLexerCSharp_BlockLookback_Callback = int (*)();
    using QsciLexerCSharp_BlockStart_Callback = const char* (*)(const QsciLexerCSharp*, int*);
    using QsciLexerCSharp_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCSharp*, int*);
    using QsciLexerCSharp_BraceStyle_Callback = int (*)();
    using QsciLexerCSharp_CaseSensitive_Callback = bool (*)();
    using QsciLexerCSharp_Color_Callback = QColor (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_EolFill_Callback = bool (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_Font_Callback = QFont (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_IndentationGuideView_Callback = int (*)();
    using QsciLexerCSharp_Keywords_Callback = const char* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultStyle_Callback = int (*)();
    using QsciLexerCSharp_Description_Callback = QString (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_Paper_Callback = QColor (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultEolFill_Callback = bool (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_SetEditor_Callback = void (*)(QsciLexerCSharp*, QsciScintilla*);
    using QsciLexerCSharp_RefreshProperties_Callback = void (*)();
    using QsciLexerCSharp_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerCSharp_WordCharacters_Callback = const char* (*)();
    using QsciLexerCSharp_SetAutoIndentStyle_Callback = void (*)(QsciLexerCSharp*, int);
    using QsciLexerCSharp_SetColor_Callback = void (*)(QsciLexerCSharp*, const QColor&, int);
    using QsciLexerCSharp_SetEolFill_Callback = void (*)(QsciLexerCSharp*, bool, int);
    using QsciLexerCSharp_SetFont_Callback = void (*)(QsciLexerCSharp*, const QFont&, int);
    using QsciLexerCSharp_SetPaper_Callback = void (*)(QsciLexerCSharp*, const QColor&, int);
    using QsciLexerCSharp_ReadProperties_Callback = bool (*)(QsciLexerCSharp*, QSettings&, const QString&);
    using QsciLexerCSharp_WriteProperties_Callback = bool (*)(const QsciLexerCSharp*, QSettings&, const QString&);
    using QsciLexerCSharp_Event_Callback = bool (*)(QsciLexerCSharp*, QEvent*);
    using QsciLexerCSharp_EventFilter_Callback = bool (*)(QsciLexerCSharp*, QObject*, QEvent*);
    using QsciLexerCSharp_TimerEvent_Callback = void (*)(QsciLexerCSharp*, QTimerEvent*);
    using QsciLexerCSharp_ChildEvent_Callback = void (*)(QsciLexerCSharp*, QChildEvent*);
    using QsciLexerCSharp_CustomEvent_Callback = void (*)(QsciLexerCSharp*, QEvent*);
    using QsciLexerCSharp_ConnectNotify_Callback = void (*)(QsciLexerCSharp*, const QMetaMethod&);
    using QsciLexerCSharp_DisconnectNotify_Callback = void (*)(QsciLexerCSharp*, const QMetaMethod&);
    using QsciLexerCSharp_Sender_Callback = QObject* (*)();
    using QsciLexerCSharp_SenderSignalIndex_Callback = int (*)();
    using QsciLexerCSharp_Receivers_Callback = int (*)(const QsciLexerCSharp*, const char*);
    using QsciLexerCSharp_IsSignalConnected_Callback = bool (*)(const QsciLexerCSharp*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerCSharp_Metacall_Callback qscilexercsharp_metacall_callback = nullptr;
    QsciLexerCSharp_SetFoldAtElse_Callback qscilexercsharp_setfoldatelse_callback = nullptr;
    QsciLexerCSharp_SetFoldComments_Callback qscilexercsharp_setfoldcomments_callback = nullptr;
    QsciLexerCSharp_SetFoldCompact_Callback qscilexercsharp_setfoldcompact_callback = nullptr;
    QsciLexerCSharp_SetFoldPreprocessor_Callback qscilexercsharp_setfoldpreprocessor_callback = nullptr;
    QsciLexerCSharp_SetStylePreprocessor_Callback qscilexercsharp_setstylepreprocessor_callback = nullptr;
    QsciLexerCSharp_Language_Callback qscilexercsharp_language_callback = nullptr;
    QsciLexerCSharp_Lexer_Callback qscilexercsharp_lexer_callback = nullptr;
    QsciLexerCSharp_LexerId_Callback qscilexercsharp_lexerid_callback = nullptr;
    QsciLexerCSharp_AutoCompletionFillups_Callback qscilexercsharp_autocompletionfillups_callback = nullptr;
    QsciLexerCSharp_AutoCompletionWordSeparators_Callback qscilexercsharp_autocompletionwordseparators_callback = nullptr;
    QsciLexerCSharp_BlockEnd_Callback qscilexercsharp_blockend_callback = nullptr;
    QsciLexerCSharp_BlockLookback_Callback qscilexercsharp_blocklookback_callback = nullptr;
    QsciLexerCSharp_BlockStart_Callback qscilexercsharp_blockstart_callback = nullptr;
    QsciLexerCSharp_BlockStartKeyword_Callback qscilexercsharp_blockstartkeyword_callback = nullptr;
    QsciLexerCSharp_BraceStyle_Callback qscilexercsharp_bracestyle_callback = nullptr;
    QsciLexerCSharp_CaseSensitive_Callback qscilexercsharp_casesensitive_callback = nullptr;
    QsciLexerCSharp_Color_Callback qscilexercsharp_color_callback = nullptr;
    QsciLexerCSharp_EolFill_Callback qscilexercsharp_eolfill_callback = nullptr;
    QsciLexerCSharp_Font_Callback qscilexercsharp_font_callback = nullptr;
    QsciLexerCSharp_IndentationGuideView_Callback qscilexercsharp_indentationguideview_callback = nullptr;
    QsciLexerCSharp_Keywords_Callback qscilexercsharp_keywords_callback = nullptr;
    QsciLexerCSharp_DefaultStyle_Callback qscilexercsharp_defaultstyle_callback = nullptr;
    QsciLexerCSharp_Description_Callback qscilexercsharp_description_callback = nullptr;
    QsciLexerCSharp_Paper_Callback qscilexercsharp_paper_callback = nullptr;
    QsciLexerCSharp_DefaultColorWithStyle_Callback qscilexercsharp_defaultcolorwithstyle_callback = nullptr;
    QsciLexerCSharp_DefaultEolFill_Callback qscilexercsharp_defaulteolfill_callback = nullptr;
    QsciLexerCSharp_DefaultFontWithStyle_Callback qscilexercsharp_defaultfontwithstyle_callback = nullptr;
    QsciLexerCSharp_DefaultPaperWithStyle_Callback qscilexercsharp_defaultpaperwithstyle_callback = nullptr;
    QsciLexerCSharp_SetEditor_Callback qscilexercsharp_seteditor_callback = nullptr;
    QsciLexerCSharp_RefreshProperties_Callback qscilexercsharp_refreshproperties_callback = nullptr;
    QsciLexerCSharp_StyleBitsNeeded_Callback qscilexercsharp_stylebitsneeded_callback = nullptr;
    QsciLexerCSharp_WordCharacters_Callback qscilexercsharp_wordcharacters_callback = nullptr;
    QsciLexerCSharp_SetAutoIndentStyle_Callback qscilexercsharp_setautoindentstyle_callback = nullptr;
    QsciLexerCSharp_SetColor_Callback qscilexercsharp_setcolor_callback = nullptr;
    QsciLexerCSharp_SetEolFill_Callback qscilexercsharp_seteolfill_callback = nullptr;
    QsciLexerCSharp_SetFont_Callback qscilexercsharp_setfont_callback = nullptr;
    QsciLexerCSharp_SetPaper_Callback qscilexercsharp_setpaper_callback = nullptr;
    QsciLexerCSharp_ReadProperties_Callback qscilexercsharp_readproperties_callback = nullptr;
    QsciLexerCSharp_WriteProperties_Callback qscilexercsharp_writeproperties_callback = nullptr;
    QsciLexerCSharp_Event_Callback qscilexercsharp_event_callback = nullptr;
    QsciLexerCSharp_EventFilter_Callback qscilexercsharp_eventfilter_callback = nullptr;
    QsciLexerCSharp_TimerEvent_Callback qscilexercsharp_timerevent_callback = nullptr;
    QsciLexerCSharp_ChildEvent_Callback qscilexercsharp_childevent_callback = nullptr;
    QsciLexerCSharp_CustomEvent_Callback qscilexercsharp_customevent_callback = nullptr;
    QsciLexerCSharp_ConnectNotify_Callback qscilexercsharp_connectnotify_callback = nullptr;
    QsciLexerCSharp_DisconnectNotify_Callback qscilexercsharp_disconnectnotify_callback = nullptr;
    QsciLexerCSharp_Sender_Callback qscilexercsharp_sender_callback = nullptr;
    QsciLexerCSharp_SenderSignalIndex_Callback qscilexercsharp_sendersignalindex_callback = nullptr;
    QsciLexerCSharp_Receivers_Callback qscilexercsharp_receivers_callback = nullptr;
    QsciLexerCSharp_IsSignalConnected_Callback qscilexercsharp_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexercsharp_metacall_isbase = false;
    mutable bool qscilexercsharp_setfoldatelse_isbase = false;
    mutable bool qscilexercsharp_setfoldcomments_isbase = false;
    mutable bool qscilexercsharp_setfoldcompact_isbase = false;
    mutable bool qscilexercsharp_setfoldpreprocessor_isbase = false;
    mutable bool qscilexercsharp_setstylepreprocessor_isbase = false;
    mutable bool qscilexercsharp_language_isbase = false;
    mutable bool qscilexercsharp_lexer_isbase = false;
    mutable bool qscilexercsharp_lexerid_isbase = false;
    mutable bool qscilexercsharp_autocompletionfillups_isbase = false;
    mutable bool qscilexercsharp_autocompletionwordseparators_isbase = false;
    mutable bool qscilexercsharp_blockend_isbase = false;
    mutable bool qscilexercsharp_blocklookback_isbase = false;
    mutable bool qscilexercsharp_blockstart_isbase = false;
    mutable bool qscilexercsharp_blockstartkeyword_isbase = false;
    mutable bool qscilexercsharp_bracestyle_isbase = false;
    mutable bool qscilexercsharp_casesensitive_isbase = false;
    mutable bool qscilexercsharp_color_isbase = false;
    mutable bool qscilexercsharp_eolfill_isbase = false;
    mutable bool qscilexercsharp_font_isbase = false;
    mutable bool qscilexercsharp_indentationguideview_isbase = false;
    mutable bool qscilexercsharp_keywords_isbase = false;
    mutable bool qscilexercsharp_defaultstyle_isbase = false;
    mutable bool qscilexercsharp_description_isbase = false;
    mutable bool qscilexercsharp_paper_isbase = false;
    mutable bool qscilexercsharp_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexercsharp_defaulteolfill_isbase = false;
    mutable bool qscilexercsharp_defaultfontwithstyle_isbase = false;
    mutable bool qscilexercsharp_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexercsharp_seteditor_isbase = false;
    mutable bool qscilexercsharp_refreshproperties_isbase = false;
    mutable bool qscilexercsharp_stylebitsneeded_isbase = false;
    mutable bool qscilexercsharp_wordcharacters_isbase = false;
    mutable bool qscilexercsharp_setautoindentstyle_isbase = false;
    mutable bool qscilexercsharp_setcolor_isbase = false;
    mutable bool qscilexercsharp_seteolfill_isbase = false;
    mutable bool qscilexercsharp_setfont_isbase = false;
    mutable bool qscilexercsharp_setpaper_isbase = false;
    mutable bool qscilexercsharp_readproperties_isbase = false;
    mutable bool qscilexercsharp_writeproperties_isbase = false;
    mutable bool qscilexercsharp_event_isbase = false;
    mutable bool qscilexercsharp_eventfilter_isbase = false;
    mutable bool qscilexercsharp_timerevent_isbase = false;
    mutable bool qscilexercsharp_childevent_isbase = false;
    mutable bool qscilexercsharp_customevent_isbase = false;
    mutable bool qscilexercsharp_connectnotify_isbase = false;
    mutable bool qscilexercsharp_disconnectnotify_isbase = false;
    mutable bool qscilexercsharp_sender_isbase = false;
    mutable bool qscilexercsharp_sendersignalindex_isbase = false;
    mutable bool qscilexercsharp_receivers_isbase = false;
    mutable bool qscilexercsharp_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerCSharp() : QsciLexerCSharp(){};
    VirtualQsciLexerCSharp(QObject* parent) : QsciLexerCSharp(parent){};

    ~VirtualQsciLexerCSharp() {
        qscilexercsharp_metacall_callback = nullptr;
        qscilexercsharp_setfoldatelse_callback = nullptr;
        qscilexercsharp_setfoldcomments_callback = nullptr;
        qscilexercsharp_setfoldcompact_callback = nullptr;
        qscilexercsharp_setfoldpreprocessor_callback = nullptr;
        qscilexercsharp_setstylepreprocessor_callback = nullptr;
        qscilexercsharp_language_callback = nullptr;
        qscilexercsharp_lexer_callback = nullptr;
        qscilexercsharp_lexerid_callback = nullptr;
        qscilexercsharp_autocompletionfillups_callback = nullptr;
        qscilexercsharp_autocompletionwordseparators_callback = nullptr;
        qscilexercsharp_blockend_callback = nullptr;
        qscilexercsharp_blocklookback_callback = nullptr;
        qscilexercsharp_blockstart_callback = nullptr;
        qscilexercsharp_blockstartkeyword_callback = nullptr;
        qscilexercsharp_bracestyle_callback = nullptr;
        qscilexercsharp_casesensitive_callback = nullptr;
        qscilexercsharp_color_callback = nullptr;
        qscilexercsharp_eolfill_callback = nullptr;
        qscilexercsharp_font_callback = nullptr;
        qscilexercsharp_indentationguideview_callback = nullptr;
        qscilexercsharp_keywords_callback = nullptr;
        qscilexercsharp_defaultstyle_callback = nullptr;
        qscilexercsharp_description_callback = nullptr;
        qscilexercsharp_paper_callback = nullptr;
        qscilexercsharp_defaultcolorwithstyle_callback = nullptr;
        qscilexercsharp_defaulteolfill_callback = nullptr;
        qscilexercsharp_defaultfontwithstyle_callback = nullptr;
        qscilexercsharp_defaultpaperwithstyle_callback = nullptr;
        qscilexercsharp_seteditor_callback = nullptr;
        qscilexercsharp_refreshproperties_callback = nullptr;
        qscilexercsharp_stylebitsneeded_callback = nullptr;
        qscilexercsharp_wordcharacters_callback = nullptr;
        qscilexercsharp_setautoindentstyle_callback = nullptr;
        qscilexercsharp_setcolor_callback = nullptr;
        qscilexercsharp_seteolfill_callback = nullptr;
        qscilexercsharp_setfont_callback = nullptr;
        qscilexercsharp_setpaper_callback = nullptr;
        qscilexercsharp_readproperties_callback = nullptr;
        qscilexercsharp_writeproperties_callback = nullptr;
        qscilexercsharp_event_callback = nullptr;
        qscilexercsharp_eventfilter_callback = nullptr;
        qscilexercsharp_timerevent_callback = nullptr;
        qscilexercsharp_childevent_callback = nullptr;
        qscilexercsharp_customevent_callback = nullptr;
        qscilexercsharp_connectnotify_callback = nullptr;
        qscilexercsharp_disconnectnotify_callback = nullptr;
        qscilexercsharp_sender_callback = nullptr;
        qscilexercsharp_sendersignalindex_callback = nullptr;
        qscilexercsharp_receivers_callback = nullptr;
        qscilexercsharp_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerCSharp_Metacall_Callback(QsciLexerCSharp_Metacall_Callback cb) { qscilexercsharp_metacall_callback = cb; }
    void setQsciLexerCSharp_SetFoldAtElse_Callback(QsciLexerCSharp_SetFoldAtElse_Callback cb) { qscilexercsharp_setfoldatelse_callback = cb; }
    void setQsciLexerCSharp_SetFoldComments_Callback(QsciLexerCSharp_SetFoldComments_Callback cb) { qscilexercsharp_setfoldcomments_callback = cb; }
    void setQsciLexerCSharp_SetFoldCompact_Callback(QsciLexerCSharp_SetFoldCompact_Callback cb) { qscilexercsharp_setfoldcompact_callback = cb; }
    void setQsciLexerCSharp_SetFoldPreprocessor_Callback(QsciLexerCSharp_SetFoldPreprocessor_Callback cb) { qscilexercsharp_setfoldpreprocessor_callback = cb; }
    void setQsciLexerCSharp_SetStylePreprocessor_Callback(QsciLexerCSharp_SetStylePreprocessor_Callback cb) { qscilexercsharp_setstylepreprocessor_callback = cb; }
    void setQsciLexerCSharp_Language_Callback(QsciLexerCSharp_Language_Callback cb) { qscilexercsharp_language_callback = cb; }
    void setQsciLexerCSharp_Lexer_Callback(QsciLexerCSharp_Lexer_Callback cb) { qscilexercsharp_lexer_callback = cb; }
    void setQsciLexerCSharp_LexerId_Callback(QsciLexerCSharp_LexerId_Callback cb) { qscilexercsharp_lexerid_callback = cb; }
    void setQsciLexerCSharp_AutoCompletionFillups_Callback(QsciLexerCSharp_AutoCompletionFillups_Callback cb) { qscilexercsharp_autocompletionfillups_callback = cb; }
    void setQsciLexerCSharp_AutoCompletionWordSeparators_Callback(QsciLexerCSharp_AutoCompletionWordSeparators_Callback cb) { qscilexercsharp_autocompletionwordseparators_callback = cb; }
    void setQsciLexerCSharp_BlockEnd_Callback(QsciLexerCSharp_BlockEnd_Callback cb) { qscilexercsharp_blockend_callback = cb; }
    void setQsciLexerCSharp_BlockLookback_Callback(QsciLexerCSharp_BlockLookback_Callback cb) { qscilexercsharp_blocklookback_callback = cb; }
    void setQsciLexerCSharp_BlockStart_Callback(QsciLexerCSharp_BlockStart_Callback cb) { qscilexercsharp_blockstart_callback = cb; }
    void setQsciLexerCSharp_BlockStartKeyword_Callback(QsciLexerCSharp_BlockStartKeyword_Callback cb) { qscilexercsharp_blockstartkeyword_callback = cb; }
    void setQsciLexerCSharp_BraceStyle_Callback(QsciLexerCSharp_BraceStyle_Callback cb) { qscilexercsharp_bracestyle_callback = cb; }
    void setQsciLexerCSharp_CaseSensitive_Callback(QsciLexerCSharp_CaseSensitive_Callback cb) { qscilexercsharp_casesensitive_callback = cb; }
    void setQsciLexerCSharp_Color_Callback(QsciLexerCSharp_Color_Callback cb) { qscilexercsharp_color_callback = cb; }
    void setQsciLexerCSharp_EolFill_Callback(QsciLexerCSharp_EolFill_Callback cb) { qscilexercsharp_eolfill_callback = cb; }
    void setQsciLexerCSharp_Font_Callback(QsciLexerCSharp_Font_Callback cb) { qscilexercsharp_font_callback = cb; }
    void setQsciLexerCSharp_IndentationGuideView_Callback(QsciLexerCSharp_IndentationGuideView_Callback cb) { qscilexercsharp_indentationguideview_callback = cb; }
    void setQsciLexerCSharp_Keywords_Callback(QsciLexerCSharp_Keywords_Callback cb) { qscilexercsharp_keywords_callback = cb; }
    void setQsciLexerCSharp_DefaultStyle_Callback(QsciLexerCSharp_DefaultStyle_Callback cb) { qscilexercsharp_defaultstyle_callback = cb; }
    void setQsciLexerCSharp_Description_Callback(QsciLexerCSharp_Description_Callback cb) { qscilexercsharp_description_callback = cb; }
    void setQsciLexerCSharp_Paper_Callback(QsciLexerCSharp_Paper_Callback cb) { qscilexercsharp_paper_callback = cb; }
    void setQsciLexerCSharp_DefaultColorWithStyle_Callback(QsciLexerCSharp_DefaultColorWithStyle_Callback cb) { qscilexercsharp_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerCSharp_DefaultEolFill_Callback(QsciLexerCSharp_DefaultEolFill_Callback cb) { qscilexercsharp_defaulteolfill_callback = cb; }
    void setQsciLexerCSharp_DefaultFontWithStyle_Callback(QsciLexerCSharp_DefaultFontWithStyle_Callback cb) { qscilexercsharp_defaultfontwithstyle_callback = cb; }
    void setQsciLexerCSharp_DefaultPaperWithStyle_Callback(QsciLexerCSharp_DefaultPaperWithStyle_Callback cb) { qscilexercsharp_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerCSharp_SetEditor_Callback(QsciLexerCSharp_SetEditor_Callback cb) { qscilexercsharp_seteditor_callback = cb; }
    void setQsciLexerCSharp_RefreshProperties_Callback(QsciLexerCSharp_RefreshProperties_Callback cb) { qscilexercsharp_refreshproperties_callback = cb; }
    void setQsciLexerCSharp_StyleBitsNeeded_Callback(QsciLexerCSharp_StyleBitsNeeded_Callback cb) { qscilexercsharp_stylebitsneeded_callback = cb; }
    void setQsciLexerCSharp_WordCharacters_Callback(QsciLexerCSharp_WordCharacters_Callback cb) { qscilexercsharp_wordcharacters_callback = cb; }
    void setQsciLexerCSharp_SetAutoIndentStyle_Callback(QsciLexerCSharp_SetAutoIndentStyle_Callback cb) { qscilexercsharp_setautoindentstyle_callback = cb; }
    void setQsciLexerCSharp_SetColor_Callback(QsciLexerCSharp_SetColor_Callback cb) { qscilexercsharp_setcolor_callback = cb; }
    void setQsciLexerCSharp_SetEolFill_Callback(QsciLexerCSharp_SetEolFill_Callback cb) { qscilexercsharp_seteolfill_callback = cb; }
    void setQsciLexerCSharp_SetFont_Callback(QsciLexerCSharp_SetFont_Callback cb) { qscilexercsharp_setfont_callback = cb; }
    void setQsciLexerCSharp_SetPaper_Callback(QsciLexerCSharp_SetPaper_Callback cb) { qscilexercsharp_setpaper_callback = cb; }
    void setQsciLexerCSharp_ReadProperties_Callback(QsciLexerCSharp_ReadProperties_Callback cb) { qscilexercsharp_readproperties_callback = cb; }
    void setQsciLexerCSharp_WriteProperties_Callback(QsciLexerCSharp_WriteProperties_Callback cb) { qscilexercsharp_writeproperties_callback = cb; }
    void setQsciLexerCSharp_Event_Callback(QsciLexerCSharp_Event_Callback cb) { qscilexercsharp_event_callback = cb; }
    void setQsciLexerCSharp_EventFilter_Callback(QsciLexerCSharp_EventFilter_Callback cb) { qscilexercsharp_eventfilter_callback = cb; }
    void setQsciLexerCSharp_TimerEvent_Callback(QsciLexerCSharp_TimerEvent_Callback cb) { qscilexercsharp_timerevent_callback = cb; }
    void setQsciLexerCSharp_ChildEvent_Callback(QsciLexerCSharp_ChildEvent_Callback cb) { qscilexercsharp_childevent_callback = cb; }
    void setQsciLexerCSharp_CustomEvent_Callback(QsciLexerCSharp_CustomEvent_Callback cb) { qscilexercsharp_customevent_callback = cb; }
    void setQsciLexerCSharp_ConnectNotify_Callback(QsciLexerCSharp_ConnectNotify_Callback cb) { qscilexercsharp_connectnotify_callback = cb; }
    void setQsciLexerCSharp_DisconnectNotify_Callback(QsciLexerCSharp_DisconnectNotify_Callback cb) { qscilexercsharp_disconnectnotify_callback = cb; }
    void setQsciLexerCSharp_Sender_Callback(QsciLexerCSharp_Sender_Callback cb) { qscilexercsharp_sender_callback = cb; }
    void setQsciLexerCSharp_SenderSignalIndex_Callback(QsciLexerCSharp_SenderSignalIndex_Callback cb) { qscilexercsharp_sendersignalindex_callback = cb; }
    void setQsciLexerCSharp_Receivers_Callback(QsciLexerCSharp_Receivers_Callback cb) { qscilexercsharp_receivers_callback = cb; }
    void setQsciLexerCSharp_IsSignalConnected_Callback(QsciLexerCSharp_IsSignalConnected_Callback cb) { qscilexercsharp_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerCSharp_Metacall_IsBase(bool value) const { qscilexercsharp_metacall_isbase = value; }
    void setQsciLexerCSharp_SetFoldAtElse_IsBase(bool value) const { qscilexercsharp_setfoldatelse_isbase = value; }
    void setQsciLexerCSharp_SetFoldComments_IsBase(bool value) const { qscilexercsharp_setfoldcomments_isbase = value; }
    void setQsciLexerCSharp_SetFoldCompact_IsBase(bool value) const { qscilexercsharp_setfoldcompact_isbase = value; }
    void setQsciLexerCSharp_SetFoldPreprocessor_IsBase(bool value) const { qscilexercsharp_setfoldpreprocessor_isbase = value; }
    void setQsciLexerCSharp_SetStylePreprocessor_IsBase(bool value) const { qscilexercsharp_setstylepreprocessor_isbase = value; }
    void setQsciLexerCSharp_Language_IsBase(bool value) const { qscilexercsharp_language_isbase = value; }
    void setQsciLexerCSharp_Lexer_IsBase(bool value) const { qscilexercsharp_lexer_isbase = value; }
    void setQsciLexerCSharp_LexerId_IsBase(bool value) const { qscilexercsharp_lexerid_isbase = value; }
    void setQsciLexerCSharp_AutoCompletionFillups_IsBase(bool value) const { qscilexercsharp_autocompletionfillups_isbase = value; }
    void setQsciLexerCSharp_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexercsharp_autocompletionwordseparators_isbase = value; }
    void setQsciLexerCSharp_BlockEnd_IsBase(bool value) const { qscilexercsharp_blockend_isbase = value; }
    void setQsciLexerCSharp_BlockLookback_IsBase(bool value) const { qscilexercsharp_blocklookback_isbase = value; }
    void setQsciLexerCSharp_BlockStart_IsBase(bool value) const { qscilexercsharp_blockstart_isbase = value; }
    void setQsciLexerCSharp_BlockStartKeyword_IsBase(bool value) const { qscilexercsharp_blockstartkeyword_isbase = value; }
    void setQsciLexerCSharp_BraceStyle_IsBase(bool value) const { qscilexercsharp_bracestyle_isbase = value; }
    void setQsciLexerCSharp_CaseSensitive_IsBase(bool value) const { qscilexercsharp_casesensitive_isbase = value; }
    void setQsciLexerCSharp_Color_IsBase(bool value) const { qscilexercsharp_color_isbase = value; }
    void setQsciLexerCSharp_EolFill_IsBase(bool value) const { qscilexercsharp_eolfill_isbase = value; }
    void setQsciLexerCSharp_Font_IsBase(bool value) const { qscilexercsharp_font_isbase = value; }
    void setQsciLexerCSharp_IndentationGuideView_IsBase(bool value) const { qscilexercsharp_indentationguideview_isbase = value; }
    void setQsciLexerCSharp_Keywords_IsBase(bool value) const { qscilexercsharp_keywords_isbase = value; }
    void setQsciLexerCSharp_DefaultStyle_IsBase(bool value) const { qscilexercsharp_defaultstyle_isbase = value; }
    void setQsciLexerCSharp_Description_IsBase(bool value) const { qscilexercsharp_description_isbase = value; }
    void setQsciLexerCSharp_Paper_IsBase(bool value) const { qscilexercsharp_paper_isbase = value; }
    void setQsciLexerCSharp_DefaultColorWithStyle_IsBase(bool value) const { qscilexercsharp_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerCSharp_DefaultEolFill_IsBase(bool value) const { qscilexercsharp_defaulteolfill_isbase = value; }
    void setQsciLexerCSharp_DefaultFontWithStyle_IsBase(bool value) const { qscilexercsharp_defaultfontwithstyle_isbase = value; }
    void setQsciLexerCSharp_DefaultPaperWithStyle_IsBase(bool value) const { qscilexercsharp_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerCSharp_SetEditor_IsBase(bool value) const { qscilexercsharp_seteditor_isbase = value; }
    void setQsciLexerCSharp_RefreshProperties_IsBase(bool value) const { qscilexercsharp_refreshproperties_isbase = value; }
    void setQsciLexerCSharp_StyleBitsNeeded_IsBase(bool value) const { qscilexercsharp_stylebitsneeded_isbase = value; }
    void setQsciLexerCSharp_WordCharacters_IsBase(bool value) const { qscilexercsharp_wordcharacters_isbase = value; }
    void setQsciLexerCSharp_SetAutoIndentStyle_IsBase(bool value) const { qscilexercsharp_setautoindentstyle_isbase = value; }
    void setQsciLexerCSharp_SetColor_IsBase(bool value) const { qscilexercsharp_setcolor_isbase = value; }
    void setQsciLexerCSharp_SetEolFill_IsBase(bool value) const { qscilexercsharp_seteolfill_isbase = value; }
    void setQsciLexerCSharp_SetFont_IsBase(bool value) const { qscilexercsharp_setfont_isbase = value; }
    void setQsciLexerCSharp_SetPaper_IsBase(bool value) const { qscilexercsharp_setpaper_isbase = value; }
    void setQsciLexerCSharp_ReadProperties_IsBase(bool value) const { qscilexercsharp_readproperties_isbase = value; }
    void setQsciLexerCSharp_WriteProperties_IsBase(bool value) const { qscilexercsharp_writeproperties_isbase = value; }
    void setQsciLexerCSharp_Event_IsBase(bool value) const { qscilexercsharp_event_isbase = value; }
    void setQsciLexerCSharp_EventFilter_IsBase(bool value) const { qscilexercsharp_eventfilter_isbase = value; }
    void setQsciLexerCSharp_TimerEvent_IsBase(bool value) const { qscilexercsharp_timerevent_isbase = value; }
    void setQsciLexerCSharp_ChildEvent_IsBase(bool value) const { qscilexercsharp_childevent_isbase = value; }
    void setQsciLexerCSharp_CustomEvent_IsBase(bool value) const { qscilexercsharp_customevent_isbase = value; }
    void setQsciLexerCSharp_ConnectNotify_IsBase(bool value) const { qscilexercsharp_connectnotify_isbase = value; }
    void setQsciLexerCSharp_DisconnectNotify_IsBase(bool value) const { qscilexercsharp_disconnectnotify_isbase = value; }
    void setQsciLexerCSharp_Sender_IsBase(bool value) const { qscilexercsharp_sender_isbase = value; }
    void setQsciLexerCSharp_SenderSignalIndex_IsBase(bool value) const { qscilexercsharp_sendersignalindex_isbase = value; }
    void setQsciLexerCSharp_Receivers_IsBase(bool value) const { qscilexercsharp_receivers_isbase = value; }
    void setQsciLexerCSharp_IsSignalConnected_IsBase(bool value) const { qscilexercsharp_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercsharp_metacall_isbase) {
            qscilexercsharp_metacall_isbase = false;
            return QsciLexerCSharp::qt_metacall(param1, param2, param3);
        } else if (qscilexercsharp_metacall_callback != nullptr) {
            return qscilexercsharp_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerCSharp::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexercsharp_setfoldatelse_isbase) {
            qscilexercsharp_setfoldatelse_isbase = false;
            QsciLexerCSharp::setFoldAtElse(fold);
        } else if (qscilexercsharp_setfoldatelse_callback != nullptr) {
            qscilexercsharp_setfoldatelse_callback(this, fold);
        } else {
            QsciLexerCSharp::setFoldAtElse(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexercsharp_setfoldcomments_isbase) {
            qscilexercsharp_setfoldcomments_isbase = false;
            QsciLexerCSharp::setFoldComments(fold);
        } else if (qscilexercsharp_setfoldcomments_callback != nullptr) {
            qscilexercsharp_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerCSharp::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexercsharp_setfoldcompact_isbase) {
            qscilexercsharp_setfoldcompact_isbase = false;
            QsciLexerCSharp::setFoldCompact(fold);
        } else if (qscilexercsharp_setfoldcompact_callback != nullptr) {
            qscilexercsharp_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerCSharp::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexercsharp_setfoldpreprocessor_isbase) {
            qscilexercsharp_setfoldpreprocessor_isbase = false;
            QsciLexerCSharp::setFoldPreprocessor(fold);
        } else if (qscilexercsharp_setfoldpreprocessor_callback != nullptr) {
            qscilexercsharp_setfoldpreprocessor_callback(this, fold);
        } else {
            QsciLexerCSharp::setFoldPreprocessor(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexercsharp_setstylepreprocessor_isbase) {
            qscilexercsharp_setstylepreprocessor_isbase = false;
            QsciLexerCSharp::setStylePreprocessor(style);
        } else if (qscilexercsharp_setstylepreprocessor_callback != nullptr) {
            qscilexercsharp_setstylepreprocessor_callback(this, style);
        } else {
            QsciLexerCSharp::setStylePreprocessor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexercsharp_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercsharp_lexer_isbase) {
            qscilexercsharp_lexer_isbase = false;
            return QsciLexerCSharp::lexer();
        } else if (qscilexercsharp_lexer_callback != nullptr) {
            return qscilexercsharp_lexer_callback();
        } else {
            return QsciLexerCSharp::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercsharp_lexerid_isbase) {
            qscilexercsharp_lexerid_isbase = false;
            return QsciLexerCSharp::lexerId();
        } else if (qscilexercsharp_lexerid_callback != nullptr) {
            return qscilexercsharp_lexerid_callback();
        } else {
            return QsciLexerCSharp::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercsharp_autocompletionfillups_isbase) {
            qscilexercsharp_autocompletionfillups_isbase = false;
            return QsciLexerCSharp::autoCompletionFillups();
        } else if (qscilexercsharp_autocompletionfillups_callback != nullptr) {
            return qscilexercsharp_autocompletionfillups_callback();
        } else {
            return QsciLexerCSharp::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexercsharp_autocompletionwordseparators_isbase) {
            qscilexercsharp_autocompletionwordseparators_isbase = false;
            return QsciLexerCSharp::autoCompletionWordSeparators();
        } else if (qscilexercsharp_autocompletionwordseparators_callback != nullptr) {
            return qscilexercsharp_autocompletionwordseparators_callback();
        } else {
            return QsciLexerCSharp::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercsharp_blockend_isbase) {
            qscilexercsharp_blockend_isbase = false;
            return QsciLexerCSharp::blockEnd(style);
        } else if (qscilexercsharp_blockend_callback != nullptr) {
            return qscilexercsharp_blockend_callback(this, style);
        } else {
            return QsciLexerCSharp::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercsharp_blocklookback_isbase) {
            qscilexercsharp_blocklookback_isbase = false;
            return QsciLexerCSharp::blockLookback();
        } else if (qscilexercsharp_blocklookback_callback != nullptr) {
            return qscilexercsharp_blocklookback_callback();
        } else {
            return QsciLexerCSharp::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercsharp_blockstart_isbase) {
            qscilexercsharp_blockstart_isbase = false;
            return QsciLexerCSharp::blockStart(style);
        } else if (qscilexercsharp_blockstart_callback != nullptr) {
            return qscilexercsharp_blockstart_callback(this, style);
        } else {
            return QsciLexerCSharp::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercsharp_blockstartkeyword_isbase) {
            qscilexercsharp_blockstartkeyword_isbase = false;
            return QsciLexerCSharp::blockStartKeyword(style);
        } else if (qscilexercsharp_blockstartkeyword_callback != nullptr) {
            return qscilexercsharp_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerCSharp::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercsharp_bracestyle_isbase) {
            qscilexercsharp_bracestyle_isbase = false;
            return QsciLexerCSharp::braceStyle();
        } else if (qscilexercsharp_bracestyle_callback != nullptr) {
            return qscilexercsharp_bracestyle_callback();
        } else {
            return QsciLexerCSharp::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercsharp_casesensitive_isbase) {
            qscilexercsharp_casesensitive_isbase = false;
            return QsciLexerCSharp::caseSensitive();
        } else if (qscilexercsharp_casesensitive_callback != nullptr) {
            return qscilexercsharp_casesensitive_callback();
        } else {
            return QsciLexerCSharp::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercsharp_color_isbase) {
            qscilexercsharp_color_isbase = false;
            return QsciLexerCSharp::color(style);
        } else if (qscilexercsharp_color_callback != nullptr) {
            return qscilexercsharp_color_callback(this, style);
        } else {
            return QsciLexerCSharp::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercsharp_eolfill_isbase) {
            qscilexercsharp_eolfill_isbase = false;
            return QsciLexerCSharp::eolFill(style);
        } else if (qscilexercsharp_eolfill_callback != nullptr) {
            return qscilexercsharp_eolfill_callback(this, style);
        } else {
            return QsciLexerCSharp::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercsharp_font_isbase) {
            qscilexercsharp_font_isbase = false;
            return QsciLexerCSharp::font(style);
        } else if (qscilexercsharp_font_callback != nullptr) {
            return qscilexercsharp_font_callback(this, style);
        } else {
            return QsciLexerCSharp::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercsharp_indentationguideview_isbase) {
            qscilexercsharp_indentationguideview_isbase = false;
            return QsciLexerCSharp::indentationGuideView();
        } else if (qscilexercsharp_indentationguideview_callback != nullptr) {
            return qscilexercsharp_indentationguideview_callback();
        } else {
            return QsciLexerCSharp::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercsharp_keywords_isbase) {
            qscilexercsharp_keywords_isbase = false;
            return QsciLexerCSharp::keywords(set);
        } else if (qscilexercsharp_keywords_callback != nullptr) {
            return qscilexercsharp_keywords_callback(this, set);
        } else {
            return QsciLexerCSharp::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercsharp_defaultstyle_isbase) {
            qscilexercsharp_defaultstyle_isbase = false;
            return QsciLexerCSharp::defaultStyle();
        } else if (qscilexercsharp_defaultstyle_callback != nullptr) {
            return qscilexercsharp_defaultstyle_callback();
        } else {
            return QsciLexerCSharp::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexercsharp_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercsharp_paper_isbase) {
            qscilexercsharp_paper_isbase = false;
            return QsciLexerCSharp::paper(style);
        } else if (qscilexercsharp_paper_callback != nullptr) {
            return qscilexercsharp_paper_callback(this, style);
        } else {
            return QsciLexerCSharp::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercsharp_defaultcolorwithstyle_isbase) {
            qscilexercsharp_defaultcolorwithstyle_isbase = false;
            return QsciLexerCSharp::defaultColor(style);
        } else if (qscilexercsharp_defaultcolorwithstyle_callback != nullptr) {
            return qscilexercsharp_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerCSharp::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercsharp_defaulteolfill_isbase) {
            qscilexercsharp_defaulteolfill_isbase = false;
            return QsciLexerCSharp::defaultEolFill(style);
        } else if (qscilexercsharp_defaulteolfill_callback != nullptr) {
            return qscilexercsharp_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerCSharp::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercsharp_defaultfontwithstyle_isbase) {
            qscilexercsharp_defaultfontwithstyle_isbase = false;
            return QsciLexerCSharp::defaultFont(style);
        } else if (qscilexercsharp_defaultfontwithstyle_callback != nullptr) {
            return qscilexercsharp_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerCSharp::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercsharp_defaultpaperwithstyle_isbase) {
            qscilexercsharp_defaultpaperwithstyle_isbase = false;
            return QsciLexerCSharp::defaultPaper(style);
        } else if (qscilexercsharp_defaultpaperwithstyle_callback != nullptr) {
            return qscilexercsharp_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerCSharp::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercsharp_seteditor_isbase) {
            qscilexercsharp_seteditor_isbase = false;
            QsciLexerCSharp::setEditor(editor);
        } else if (qscilexercsharp_seteditor_callback != nullptr) {
            qscilexercsharp_seteditor_callback(this, editor);
        } else {
            QsciLexerCSharp::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercsharp_refreshproperties_isbase) {
            qscilexercsharp_refreshproperties_isbase = false;
            QsciLexerCSharp::refreshProperties();
        } else if (qscilexercsharp_refreshproperties_callback != nullptr) {
            qscilexercsharp_refreshproperties_callback();
        } else {
            QsciLexerCSharp::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercsharp_stylebitsneeded_isbase) {
            qscilexercsharp_stylebitsneeded_isbase = false;
            return QsciLexerCSharp::styleBitsNeeded();
        } else if (qscilexercsharp_stylebitsneeded_callback != nullptr) {
            return qscilexercsharp_stylebitsneeded_callback();
        } else {
            return QsciLexerCSharp::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercsharp_wordcharacters_isbase) {
            qscilexercsharp_wordcharacters_isbase = false;
            return QsciLexerCSharp::wordCharacters();
        } else if (qscilexercsharp_wordcharacters_callback != nullptr) {
            return qscilexercsharp_wordcharacters_callback();
        } else {
            return QsciLexerCSharp::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercsharp_setautoindentstyle_isbase) {
            qscilexercsharp_setautoindentstyle_isbase = false;
            QsciLexerCSharp::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexercsharp_setautoindentstyle_callback != nullptr) {
            qscilexercsharp_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerCSharp::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercsharp_setcolor_isbase) {
            qscilexercsharp_setcolor_isbase = false;
            QsciLexerCSharp::setColor(c, style);
        } else if (qscilexercsharp_setcolor_callback != nullptr) {
            qscilexercsharp_setcolor_callback(this, c, style);
        } else {
            QsciLexerCSharp::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercsharp_seteolfill_isbase) {
            qscilexercsharp_seteolfill_isbase = false;
            QsciLexerCSharp::setEolFill(eoffill, style);
        } else if (qscilexercsharp_seteolfill_callback != nullptr) {
            qscilexercsharp_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerCSharp::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercsharp_setfont_isbase) {
            qscilexercsharp_setfont_isbase = false;
            QsciLexerCSharp::setFont(f, style);
        } else if (qscilexercsharp_setfont_callback != nullptr) {
            qscilexercsharp_setfont_callback(this, f, style);
        } else {
            QsciLexerCSharp::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercsharp_setpaper_isbase) {
            qscilexercsharp_setpaper_isbase = false;
            QsciLexerCSharp::setPaper(c, style);
        } else if (qscilexercsharp_setpaper_callback != nullptr) {
            qscilexercsharp_setpaper_callback(this, c, style);
        } else {
            QsciLexerCSharp::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercsharp_readproperties_isbase) {
            qscilexercsharp_readproperties_isbase = false;
            return QsciLexerCSharp::readProperties(qs, prefix);
        } else if (qscilexercsharp_readproperties_callback != nullptr) {
            return qscilexercsharp_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerCSharp::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercsharp_writeproperties_isbase) {
            qscilexercsharp_writeproperties_isbase = false;
            return QsciLexerCSharp::writeProperties(qs, prefix);
        } else if (qscilexercsharp_writeproperties_callback != nullptr) {
            return qscilexercsharp_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerCSharp::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercsharp_event_isbase) {
            qscilexercsharp_event_isbase = false;
            return QsciLexerCSharp::event(event);
        } else if (qscilexercsharp_event_callback != nullptr) {
            return qscilexercsharp_event_callback(this, event);
        } else {
            return QsciLexerCSharp::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercsharp_eventfilter_isbase) {
            qscilexercsharp_eventfilter_isbase = false;
            return QsciLexerCSharp::eventFilter(watched, event);
        } else if (qscilexercsharp_eventfilter_callback != nullptr) {
            return qscilexercsharp_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerCSharp::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercsharp_timerevent_isbase) {
            qscilexercsharp_timerevent_isbase = false;
            QsciLexerCSharp::timerEvent(event);
        } else if (qscilexercsharp_timerevent_callback != nullptr) {
            qscilexercsharp_timerevent_callback(this, event);
        } else {
            QsciLexerCSharp::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercsharp_childevent_isbase) {
            qscilexercsharp_childevent_isbase = false;
            QsciLexerCSharp::childEvent(event);
        } else if (qscilexercsharp_childevent_callback != nullptr) {
            qscilexercsharp_childevent_callback(this, event);
        } else {
            QsciLexerCSharp::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercsharp_customevent_isbase) {
            qscilexercsharp_customevent_isbase = false;
            QsciLexerCSharp::customEvent(event);
        } else if (qscilexercsharp_customevent_callback != nullptr) {
            qscilexercsharp_customevent_callback(this, event);
        } else {
            QsciLexerCSharp::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercsharp_connectnotify_isbase) {
            qscilexercsharp_connectnotify_isbase = false;
            QsciLexerCSharp::connectNotify(signal);
        } else if (qscilexercsharp_connectnotify_callback != nullptr) {
            qscilexercsharp_connectnotify_callback(this, signal);
        } else {
            QsciLexerCSharp::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercsharp_disconnectnotify_isbase) {
            qscilexercsharp_disconnectnotify_isbase = false;
            QsciLexerCSharp::disconnectNotify(signal);
        } else if (qscilexercsharp_disconnectnotify_callback != nullptr) {
            qscilexercsharp_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerCSharp::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexercsharp_sender_isbase) {
            qscilexercsharp_sender_isbase = false;
            return QsciLexerCSharp::sender();
        } else if (qscilexercsharp_sender_callback != nullptr) {
            return qscilexercsharp_sender_callback();
        } else {
            return QsciLexerCSharp::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexercsharp_sendersignalindex_isbase) {
            qscilexercsharp_sendersignalindex_isbase = false;
            return QsciLexerCSharp::senderSignalIndex();
        } else if (qscilexercsharp_sendersignalindex_callback != nullptr) {
            return qscilexercsharp_sendersignalindex_callback();
        } else {
            return QsciLexerCSharp::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexercsharp_receivers_isbase) {
            qscilexercsharp_receivers_isbase = false;
            return QsciLexerCSharp::receivers(signal);
        } else if (qscilexercsharp_receivers_callback != nullptr) {
            return qscilexercsharp_receivers_callback(this, signal);
        } else {
            return QsciLexerCSharp::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexercsharp_issignalconnected_isbase) {
            qscilexercsharp_issignalconnected_isbase = false;
            return QsciLexerCSharp::isSignalConnected(signal);
        } else if (qscilexercsharp_issignalconnected_callback != nullptr) {
            return qscilexercsharp_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerCSharp::isSignalConnected(signal);
        }
    }
};

#endif
