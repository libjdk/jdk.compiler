#ifndef _com_sun_tools_javac_main_Option_h_
#define _com_sun_tools_javac_main_Option_h_
//$ class com.sun.tools.javac.main.Option
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("ADD_EXPORTS")
#undef ADD_EXPORTS
#pragma push_macro("ADD_MODULES")
#undef ADD_MODULES
#pragma push_macro("ADD_OPENS")
#undef ADD_OPENS
#pragma push_macro("ADD_READS")
#undef ADD_READS
#pragma push_macro("AT")
#undef AT
#pragma push_macro("BOOT_CLASS_PATH")
#undef BOOT_CLASS_PATH
#pragma push_macro("CLASS_PATH")
#undef CLASS_PATH
#pragma push_macro("COMPACT_FORMAT")
#undef COMPACT_FORMAT
#pragma push_macro("D")
#undef D
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DEFAULT_MAX_LINE_LENGTH")
#undef DEFAULT_MAX_LINE_LENGTH
#pragma push_macro("DEFAULT_MODULE_FOR_CREATED_FILES")
#undef DEFAULT_MODULE_FOR_CREATED_FILES
#pragma push_macro("DEFAULT_SYNOPSIS_WIDTH")
#undef DEFAULT_SYNOPSIS_WIDTH
#pragma push_macro("DEPRECATION")
#undef DEPRECATION
#pragma push_macro("DIAGS")
#undef DIAGS
#pragma push_macro("DJAVA_ENDORSED_DIRS")
#undef DJAVA_ENDORSED_DIRS
#pragma push_macro("DJAVA_EXT_DIRS")
#undef DJAVA_EXT_DIRS
#pragma push_macro("DOE")
#undef DOE
#pragma push_macro("ENCODING")
#undef ENCODING
#pragma push_macro("ENDORSEDDIRS")
#undef ENDORSEDDIRS
#pragma push_macro("EXTDIRS")
#undef EXTDIRS
#pragma push_macro("FULLVERSION")
#undef FULLVERSION
#pragma push_macro("G")
#undef G
#pragma push_macro("G_CUSTOM")
#undef G_CUSTOM
#pragma push_macro("G_NONE")
#undef G_NONE
#pragma push_macro("H")
#undef H
#pragma push_macro("HELP")
#undef HELP
#pragma push_macro("HELP_LINT")
#undef HELP_LINT
#pragma push_macro("IMPLICIT")
#undef IMPLICIT
#pragma push_macro("INHERIT_RUNTIME_ENVIRONMENT")
#undef INHERIT_RUNTIME_ENVIRONMENT
#pragma push_macro("J")
#undef J
#pragma push_macro("LARGE_INDENT")
#undef LARGE_INDENT
#pragma push_macro("LIMIT_MODULES")
#undef LIMIT_MODULES
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("MODULE_PATH")
#undef MODULE_PATH
#pragma push_macro("MODULE_SOURCE_PATH")
#undef MODULE_SOURCE_PATH
#pragma push_macro("MODULE_VERSION")
#undef MODULE_VERSION
#pragma push_macro("MOREINFO")
#undef MOREINFO
#pragma push_macro("MULTIRELEASE")
#undef MULTIRELEASE
#pragma push_macro("NOWARN")
#undef NOWARN
#pragma push_macro("O")
#undef O
#pragma push_macro("PARAMETERS")
#undef PARAMETERS
#pragma push_macro("PATCH_MODULE")
#undef PATCH_MODULE
#pragma push_macro("PLUGIN")
#undef PLUGIN
#pragma push_macro("PREVIEW")
#undef PREVIEW
#pragma push_macro("PRINTSOURCE")
#undef PRINTSOURCE
#pragma push_macro("PROC")
#undef PROC
#pragma push_macro("PROCESSOR")
#undef PROCESSOR
#pragma push_macro("PROCESSOR_MODULE_PATH")
#undef PROCESSOR_MODULE_PATH
#pragma push_macro("PROCESSOR_PATH")
#undef PROCESSOR_PATH
#pragma push_macro("PROFILE")
#undef PROFILE
#pragma push_macro("PROMPT")
#undef PROMPT
#pragma push_macro("RELEASE")
#undef RELEASE
#pragma push_macro("S")
#undef S
#pragma push_macro("SHOULDSTOP")
#undef SHOULDSTOP
#pragma push_macro("SMALL_INDENT")
#undef SMALL_INDENT
#pragma push_macro("SOURCE")
#undef SOURCE
#pragma push_macro("SOURCEFILE")
#undef SOURCEFILE
#pragma push_macro("SOURCE_PATH")
#undef SOURCE_PATH
#pragma push_macro("SYSTEM")
#undef SYSTEM
#pragma push_macro("TARGET")
#undef TARGET
#pragma push_macro("UPGRADE_MODULE_PATH")
#undef UPGRADE_MODULE_PATH
#pragma push_macro("VERBOSE")
#undef VERBOSE
#pragma push_macro("VERSION")
#undef VERSION
#pragma push_macro("WARNUNCHECKED")
#undef WARNUNCHECKED
#pragma push_macro("WERROR")
#undef WERROR
#pragma push_macro("X")
#undef X
#pragma push_macro("XBOOTCLASSPATH")
#undef XBOOTCLASSPATH
#pragma push_macro("XBOOTCLASSPATH_APPEND")
#undef XBOOTCLASSPATH_APPEND
#pragma push_macro("XBOOTCLASSPATH_PREPEND")
#undef XBOOTCLASSPATH_PREPEND
#pragma push_macro("XD")
#undef XD
#pragma push_macro("XDIAGS")
#undef XDIAGS
#pragma push_macro("XDOCLINT")
#undef XDOCLINT
#pragma push_macro("XDOCLINT_CUSTOM")
#undef XDOCLINT_CUSTOM
#pragma push_macro("XDOCLINT_PACKAGE")
#undef XDOCLINT_PACKAGE
#pragma push_macro("XJCOV")
#undef XJCOV
#pragma push_macro("XLINT")
#undef XLINT
#pragma push_macro("XLINT_CUSTOM")
#undef XLINT_CUSTOM
#pragma push_macro("XMAXERRS")
#undef XMAXERRS
#pragma push_macro("XMAXWARNS")
#undef XMAXWARNS
#pragma push_macro("XPKGINFO")
#undef XPKGINFO
#pragma push_macro("XPREFER")
#undef XPREFER
#pragma push_macro("XPRINT")
#undef XPRINT
#pragma push_macro("XPRINTPROCESSORINFO")
#undef XPRINTPROCESSORINFO
#pragma push_macro("XPRINTROUNDS")
#undef XPRINTROUNDS
#pragma push_macro("XSTDOUT")
#undef XSTDOUT
#pragma push_macro("XXUSERPATHSFIRST")
#undef XXUSERPATHSFIRST

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option$ArgKind;
					class Option$ChoiceKind;
					class Option$OptionGroup;
					class Option$OptionKind;
					class OptionHelper;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Log;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
		class Iterator;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $import Option : public ::java::lang::Enum {
	$class(Option, 0, ::java::lang::Enum)
public:
	Option();
	static $Array<::com::sun::tools::javac::main::Option>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group, ::com::sun::tools::javac::main::Option$ArgKind* argKind);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group, ::com::sun::tools::javac::main::Option$ArgKind* ak);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group, ::com::sun::tools::javac::main::Option$ChoiceKind* choiceKind, ::java::util::Set* choices);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group, ::com::sun::tools::javac::main::Option$ChoiceKind* choiceKind, $StringArray* choices);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group, ::com::sun::tools::javac::main::Option$ChoiceKind* choiceKind, ::java::util::Set* choices, ::com::sun::tools::javac::main::Option$ArgKind* argKind);
	static int32_t findSeparator($String* word);
	virtual ::com::sun::tools::javac::main::Option$ArgKind* getArgKind();
	static ::java::util::Set* getJavaCompilerOptions();
	static ::java::util::Set* getJavacFileManagerOptions();
	static ::java::util::Set* getJavacToolOptions();
	virtual ::com::sun::tools::javac::main::Option$OptionKind* getKind();
	static ::java::util::Set* getOptions(::com::sun::tools::javac::main::Option$OptionGroup* group);
	virtual ::java::util::regex::Pattern* getPattern();
	virtual $String* getPrimaryName();
	static ::java::util::Set* getXLintChoices();
	virtual void handleOption(::com::sun::tools::javac::main::OptionHelper* helper, $String* arg, ::java::util::Iterator* rest);
	virtual bool hasArg();
	virtual bool hasSeparateArg();
	virtual void help(::com::sun::tools::javac::util::Log* log);
	virtual void help(::com::sun::tools::javac::util::Log* log, $String* descr);
	$String* helpSynopsis($String* name, ::com::sun::tools::javac::util::Log* log);
	static bool lambda$getOptions$3(::com::sun::tools::javac::main::Option$OptionGroup* group, ::com::sun::tools::javac::main::Option* o);
	static ::java::util::EnumSet* lambda$getOptions$4();
	$String* lambda$help$2(::com::sun::tools::javac::util::Log* log, $String* s);
	static bool lambda$showHelp$0(::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option* o);
	static void lambda$showHelp$1(::com::sun::tools::javac::util::Log* log, ::com::sun::tools::javac::main::Option* o);
	static ::com::sun::tools::javac::main::Option* lookup($String* arg);
	static ::com::sun::tools::javac::main::Option* lookup($String* arg, ::java::util::Set* options);
	virtual bool matches($String* option);
	bool matches($String* option, $String* name);
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option);
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option, $String* arg);
	static void showHelp(::com::sun::tools::javac::util::Log* log, ::com::sun::tools::javac::main::Option$OptionKind* kind);
	static ::com::sun::tools::javac::main::Option* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::Option>* values();
	static ::com::sun::tools::javac::main::Option* G;
	static ::com::sun::tools::javac::main::Option* G_NONE;
	static ::com::sun::tools::javac::main::Option* G_CUSTOM;
	static ::com::sun::tools::javac::main::Option* XLINT;
	static ::com::sun::tools::javac::main::Option* XLINT_CUSTOM;
	static ::com::sun::tools::javac::main::Option* XDOCLINT;
	static ::com::sun::tools::javac::main::Option* XDOCLINT_CUSTOM;
	static ::com::sun::tools::javac::main::Option* XDOCLINT_PACKAGE;
	static ::com::sun::tools::javac::main::Option* NOWARN;
	static ::com::sun::tools::javac::main::Option* VERBOSE;
	static ::com::sun::tools::javac::main::Option* DEPRECATION;
	static ::com::sun::tools::javac::main::Option* CLASS_PATH;
	static ::com::sun::tools::javac::main::Option* SOURCE_PATH;
	static ::com::sun::tools::javac::main::Option* MODULE_SOURCE_PATH;
	static ::com::sun::tools::javac::main::Option* MODULE_PATH;
	static ::com::sun::tools::javac::main::Option* UPGRADE_MODULE_PATH;
	static ::com::sun::tools::javac::main::Option* SYSTEM;
	static ::com::sun::tools::javac::main::Option* PATCH_MODULE;
	static ::com::sun::tools::javac::main::Option* BOOT_CLASS_PATH;
	static ::com::sun::tools::javac::main::Option* XBOOTCLASSPATH_PREPEND;
	static ::com::sun::tools::javac::main::Option* XBOOTCLASSPATH_APPEND;
	static ::com::sun::tools::javac::main::Option* XBOOTCLASSPATH;
	static ::com::sun::tools::javac::main::Option* EXTDIRS;
	static ::com::sun::tools::javac::main::Option* DJAVA_EXT_DIRS;
	static ::com::sun::tools::javac::main::Option* ENDORSEDDIRS;
	static ::com::sun::tools::javac::main::Option* DJAVA_ENDORSED_DIRS;
	static ::com::sun::tools::javac::main::Option* PROC;
	static ::com::sun::tools::javac::main::Option* PROCESSOR;
	static ::com::sun::tools::javac::main::Option* PROCESSOR_PATH;
	static ::com::sun::tools::javac::main::Option* PROCESSOR_MODULE_PATH;
	static ::com::sun::tools::javac::main::Option* PARAMETERS;
	static ::com::sun::tools::javac::main::Option* D;
	static ::com::sun::tools::javac::main::Option* S;
	static ::com::sun::tools::javac::main::Option* H;
	static ::com::sun::tools::javac::main::Option* IMPLICIT;
	static ::com::sun::tools::javac::main::Option* ENCODING;
	static ::com::sun::tools::javac::main::Option* SOURCE;
	static ::com::sun::tools::javac::main::Option* TARGET;
	static ::com::sun::tools::javac::main::Option* RELEASE;
	static ::com::sun::tools::javac::main::Option* PREVIEW;
	static ::com::sun::tools::javac::main::Option* PROFILE;
	static ::com::sun::tools::javac::main::Option* VERSION;
	static ::com::sun::tools::javac::main::Option* FULLVERSION;
	static ::com::sun::tools::javac::main::Option* HELP;
	static ::com::sun::tools::javac::main::Option* A;
	static ::com::sun::tools::javac::main::Option* DEFAULT_MODULE_FOR_CREATED_FILES;
	static ::com::sun::tools::javac::main::Option* X;
	static ::com::sun::tools::javac::main::Option* HELP_LINT;
	static ::com::sun::tools::javac::main::Option* J;
	static ::com::sun::tools::javac::main::Option* MOREINFO;
	static ::com::sun::tools::javac::main::Option* WERROR;
	static ::com::sun::tools::javac::main::Option* PROMPT;
	static ::com::sun::tools::javac::main::Option* DOE;
	static ::com::sun::tools::javac::main::Option* PRINTSOURCE;
	static ::com::sun::tools::javac::main::Option* WARNUNCHECKED;
	static ::com::sun::tools::javac::main::Option* XMAXERRS;
	static ::com::sun::tools::javac::main::Option* XMAXWARNS;
	static ::com::sun::tools::javac::main::Option* XSTDOUT;
	static ::com::sun::tools::javac::main::Option* XPRINT;
	static ::com::sun::tools::javac::main::Option* XPRINTROUNDS;
	static ::com::sun::tools::javac::main::Option* XPRINTPROCESSORINFO;
	static ::com::sun::tools::javac::main::Option* XPREFER;
	static ::com::sun::tools::javac::main::Option* XXUSERPATHSFIRST;
	static ::com::sun::tools::javac::main::Option* XPKGINFO;
	static ::com::sun::tools::javac::main::Option* O;
	static ::com::sun::tools::javac::main::Option* XJCOV;
	static ::com::sun::tools::javac::main::Option* PLUGIN;
	static ::com::sun::tools::javac::main::Option* XDIAGS;
	static ::com::sun::tools::javac::main::Option* DEBUG;
	static ::com::sun::tools::javac::main::Option* SHOULDSTOP;
	static ::com::sun::tools::javac::main::Option* DIAGS;
	static ::com::sun::tools::javac::main::Option* XD;
	static ::com::sun::tools::javac::main::Option* ADD_EXPORTS;
	static ::com::sun::tools::javac::main::Option* ADD_OPENS;
	static ::com::sun::tools::javac::main::Option* ADD_READS;
	static ::com::sun::tools::javac::main::Option* MODULE;
	static ::com::sun::tools::javac::main::Option* ADD_MODULES;
	static ::com::sun::tools::javac::main::Option* LIMIT_MODULES;
	static ::com::sun::tools::javac::main::Option* MODULE_VERSION;
	static ::com::sun::tools::javac::main::Option* AT;
	static ::com::sun::tools::javac::main::Option* SOURCEFILE;
	static ::com::sun::tools::javac::main::Option* MULTIRELEASE;
	static ::com::sun::tools::javac::main::Option* INHERIT_RUNTIME_ENVIRONMENT;
	static $Array<::com::sun::tools::javac::main::Option>* $VALUES;
	$String* primaryName = nullptr;
	$StringArray* names = nullptr;
	$String* argsNameKey = nullptr;
	$String* descrKey = nullptr;
	::com::sun::tools::javac::main::Option$OptionKind* kind = nullptr;
	::com::sun::tools::javac::main::Option$OptionGroup* group = nullptr;
	::com::sun::tools::javac::main::Option$ArgKind* argKind = nullptr;
	::com::sun::tools::javac::main::Option$ChoiceKind* choiceKind = nullptr;
	::java::util::Set* choices = nullptr;
	static $String* SMALL_INDENT;
	static $String* LARGE_INDENT;
	static const int32_t DEFAULT_SYNOPSIS_WIDTH = 28;
	static const int32_t DEFAULT_MAX_LINE_LENGTH = 80;
	static $String* COMPACT_FORMAT;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("A")
#pragma pop_macro("ADD_EXPORTS")
#pragma pop_macro("ADD_MODULES")
#pragma pop_macro("ADD_OPENS")
#pragma pop_macro("ADD_READS")
#pragma pop_macro("AT")
#pragma pop_macro("BOOT_CLASS_PATH")
#pragma pop_macro("CLASS_PATH")
#pragma pop_macro("COMPACT_FORMAT")
#pragma pop_macro("D")
#pragma pop_macro("DEBUG")
#pragma pop_macro("DEFAULT_MAX_LINE_LENGTH")
#pragma pop_macro("DEFAULT_MODULE_FOR_CREATED_FILES")
#pragma pop_macro("DEFAULT_SYNOPSIS_WIDTH")
#pragma pop_macro("DEPRECATION")
#pragma pop_macro("DIAGS")
#pragma pop_macro("DJAVA_ENDORSED_DIRS")
#pragma pop_macro("DJAVA_EXT_DIRS")
#pragma pop_macro("DOE")
#pragma pop_macro("ENCODING")
#pragma pop_macro("ENDORSEDDIRS")
#pragma pop_macro("EXTDIRS")
#pragma pop_macro("FULLVERSION")
#pragma pop_macro("G")
#pragma pop_macro("G_CUSTOM")
#pragma pop_macro("G_NONE")
#pragma pop_macro("H")
#pragma pop_macro("HELP")
#pragma pop_macro("HELP_LINT")
#pragma pop_macro("IMPLICIT")
#pragma pop_macro("INHERIT_RUNTIME_ENVIRONMENT")
#pragma pop_macro("J")
#pragma pop_macro("LARGE_INDENT")
#pragma pop_macro("LIMIT_MODULES")
#pragma pop_macro("MODULE")
#pragma pop_macro("MODULE_PATH")
#pragma pop_macro("MODULE_SOURCE_PATH")
#pragma pop_macro("MODULE_VERSION")
#pragma pop_macro("MOREINFO")
#pragma pop_macro("MULTIRELEASE")
#pragma pop_macro("NOWARN")
#pragma pop_macro("O")
#pragma pop_macro("PARAMETERS")
#pragma pop_macro("PATCH_MODULE")
#pragma pop_macro("PLUGIN")
#pragma pop_macro("PREVIEW")
#pragma pop_macro("PRINTSOURCE")
#pragma pop_macro("PROC")
#pragma pop_macro("PROCESSOR")
#pragma pop_macro("PROCESSOR_MODULE_PATH")
#pragma pop_macro("PROCESSOR_PATH")
#pragma pop_macro("PROFILE")
#pragma pop_macro("PROMPT")
#pragma pop_macro("RELEASE")
#pragma pop_macro("S")
#pragma pop_macro("SHOULDSTOP")
#pragma pop_macro("SMALL_INDENT")
#pragma pop_macro("SOURCE")
#pragma pop_macro("SOURCEFILE")
#pragma pop_macro("SOURCE_PATH")
#pragma pop_macro("SYSTEM")
#pragma pop_macro("TARGET")
#pragma pop_macro("UPGRADE_MODULE_PATH")
#pragma pop_macro("VERBOSE")
#pragma pop_macro("VERSION")
#pragma pop_macro("WARNUNCHECKED")
#pragma pop_macro("WERROR")
#pragma pop_macro("X")
#pragma pop_macro("XBOOTCLASSPATH")
#pragma pop_macro("XBOOTCLASSPATH_APPEND")
#pragma pop_macro("XBOOTCLASSPATH_PREPEND")
#pragma pop_macro("XD")
#pragma pop_macro("XDIAGS")
#pragma pop_macro("XDOCLINT")
#pragma pop_macro("XDOCLINT_CUSTOM")
#pragma pop_macro("XDOCLINT_PACKAGE")
#pragma pop_macro("XJCOV")
#pragma pop_macro("XLINT")
#pragma pop_macro("XLINT_CUSTOM")
#pragma pop_macro("XMAXERRS")
#pragma pop_macro("XMAXWARNS")
#pragma pop_macro("XPKGINFO")
#pragma pop_macro("XPREFER")
#pragma pop_macro("XPRINT")
#pragma pop_macro("XPRINTPROCESSORINFO")
#pragma pop_macro("XPRINTROUNDS")
#pragma pop_macro("XSTDOUT")
#pragma pop_macro("XXUSERPATHSFIRST")

#endif // _com_sun_tools_javac_main_Option_h_