#ifndef LXTERMINAL_ENCODING_H
#define LXTERMINAL_ENCODING_H

typedef enum {
	TERMINAL_LANGUAGE_LOCALE,
	TERMINAL_LANGUAGE_WEST_EUROPEAN,
	TERMINAL_LANGUAGE_EAST_EUROPEAN,
	TERMINAL_LANGUAGE_EAST_ASIAN,
	TERMINAL_LANGUAGE_SE_SW_ASIAN,
	TERMINAL_LANGUAGE_MIDDLE_EASTERN,
	TERMINAL_LANGUAGE_UNICODE
} TerminalEncodingCategoryIndex;

typedef struct {
	int index;
	char *name;
} TerminalEncodingCategory;

typedef enum {
	TERMINAL_ENCODING_CURRENT_LOCALE,

	TERMINAL_ENCODING_ISO_8859_1,
	TERMINAL_ENCODING_ISO_8859_2,
	TERMINAL_ENCODING_ISO_8859_3,
	TERMINAL_ENCODING_ISO_8859_4,
	TERMINAL_ENCODING_ISO_8859_5,
	TERMINAL_ENCODING_ISO_8859_6,
	TERMINAL_ENCODING_ISO_8859_7,
	TERMINAL_ENCODING_ISO_8859_8,
	TERMINAL_ENCODING_ISO_8859_8_I,
	TERMINAL_ENCODING_ISO_8859_9,
	TERMINAL_ENCODING_ISO_8859_10,
	TERMINAL_ENCODING_ISO_8859_13,
	TERMINAL_ENCODING_ISO_8859_14,
	TERMINAL_ENCODING_ISO_8859_15,
	TERMINAL_ENCODING_ISO_8859_16,

	TERMINAL_ENCODING_UTF_7,
	TERMINAL_ENCODING_UTF_8,
	TERMINAL_ENCODING_UTF_16,
	TERMINAL_ENCODING_UCS_2,
	TERMINAL_ENCODING_UCS_4,

	TERMINAL_ENCODING_ARMSCII_8,
	TERMINAL_ENCODING_BIG5,
	TERMINAL_ENCODING_BIG5_HKSCS,
	TERMINAL_ENCODING_CP_866,

	TERMINAL_ENCODING_EUC_JP,
	TERMINAL_ENCODING_EUC_KR,
	TERMINAL_ENCODING_EUC_TW,

	TERMINAL_ENCODING_GB18030,
	TERMINAL_ENCODING_GB2312,
	TERMINAL_ENCODING_GBK,
	TERMINAL_ENCODING_GEOSTD8,
	TERMINAL_ENCODING_HZ,

	TERMINAL_ENCODING_IBM_850,
	TERMINAL_ENCODING_IBM_852,
	TERMINAL_ENCODING_IBM_855,
	TERMINAL_ENCODING_IBM_857,
	TERMINAL_ENCODING_IBM_862,
	TERMINAL_ENCODING_IBM_864,

	TERMINAL_ENCODING_ISO_2022_JP,
	TERMINAL_ENCODING_ISO_2022_KR,
	TERMINAL_ENCODING_ISO_IR_111,
	TERMINAL_ENCODING_JOHAB,
	TERMINAL_ENCODING_KOI8_R,
	TERMINAL_ENCODING_KOI8_U,

	TERMINAL_ENCODING_MAC_ARABIC,
	TERMINAL_ENCODING_MAC_CE,
	TERMINAL_ENCODING_MAC_CROATIAN,
	TERMINAL_ENCODING_MAC_CYRILLIC,
	TERMINAL_ENCODING_MAC_DEVANAGARI,
	TERMINAL_ENCODING_MAC_FARSI,
	TERMINAL_ENCODING_MAC_GREEK,
	TERMINAL_ENCODING_MAC_GUJARATI,
	TERMINAL_ENCODING_MAC_GURMUKHI,
	TERMINAL_ENCODING_MAC_HEBREW,
	TERMINAL_ENCODING_MAC_ICELANDIC,
	TERMINAL_ENCODING_MAC_ROMAN,
	TERMINAL_ENCODING_MAC_ROMANIAN,
	TERMINAL_ENCODING_MAC_TURKISH,
	TERMINAL_ENCODING_MAC_UKRAINIAN,
	
	TERMINAL_ENCODING_SHIFT_JIS,
	TERMINAL_ENCODING_TCVN,
	TERMINAL_ENCODING_TIS_620,
	TERMINAL_ENCODING_UHC,
	TERMINAL_ENCODING_VISCII,

	TERMINAL_ENCODING_WINDOWS_1250,
	TERMINAL_ENCODING_WINDOWS_1251,
	TERMINAL_ENCODING_WINDOWS_1252,
	TERMINAL_ENCODING_WINDOWS_1253,
	TERMINAL_ENCODING_WINDOWS_1254,
	TERMINAL_ENCODING_WINDOWS_1255,
	TERMINAL_ENCODING_WINDOWS_1256,
	TERMINAL_ENCODING_WINDOWS_1257,
	TERMINAL_ENCODING_WINDOWS_1258,

	TERMINAL_ENCODING_LAST
	
} TerminalEncodingIndex;

typedef struct {
	int category;
	int index;
	char *charset;
	char *name;
} TerminalEncoding;

GtkWidget *encoding_list_menu_init();
GtkAction *encoding_action_new(const gchar *name);

#endif
