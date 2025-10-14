#ifndef _com_sun_tools_javac_resources_CompilerProperties$Notes_h_
#define _com_sun_tools_javac_resources_CompilerProperties$Notes_h_
//$ class com.sun.tools.javac.resources.CompilerProperties$Notes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Source;
					class Symbol;
					class Type;
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
					class JCDiagnostic;
					class JCDiagnostic$Fragment;
					class JCDiagnostic$Note;
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

class $export CompilerProperties$Notes : public ::java::lang::Object {
	$class(CompilerProperties$Notes, 0, ::java::lang::Object)
public:
	CompilerProperties$Notes();
	void init$();
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeferredMethodInst(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeprecatedFilename(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeprecatedFilename(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeprecatedFilename(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeprecatedFilenameAdditional(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeprecatedFilenameAdditional(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeprecatedFilenameAdditional(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* LambdaStat(bool arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* MethodRefSearchResultsMulti(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, $String* arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* MrefStat(bool arg0, ::java::lang::Void* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* MrefStat1(bool arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* MultipleElements($String* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* PreviewFilename(::java::io::File* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* PreviewFilename(::javax::tools::JavaFileObject* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* PreviewFilename(::java::nio::file::Path* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* PreviewFilenameAdditional(::java::io::File* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* PreviewFilenameAdditional(::javax::tools::JavaFileObject* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* PreviewFilenameAdditional(::java::nio::file::Path* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* PreviewPlural(::com::sun::tools::javac::code::Source* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* PreviewPluralAdditional(::com::sun::tools::javac::code::Source* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* ProcMessager($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* RemovalFilename(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* RemovalFilename(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* RemovalFilename(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* RemovalFilenameAdditional(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* RemovalFilenameAdditional(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* RemovalFilenameAdditional(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* UncheckedFilename(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* UncheckedFilename(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* UncheckedFilename(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* UncheckedFilenameAdditional(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* UncheckedFilenameAdditional(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* UncheckedFilenameAdditional(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseL2mDeduplicate(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, int32_t arg2, $String* arg3, ::java::util::List* arg4, ::java::util::List* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, int32_t arg2, $String* arg3, ::java::util::List* arg4, ::com::sun::tools::javac::util::JCDiagnostic* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, int32_t arg2, $String* arg3, ::java::util::List* arg4, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, int32_t arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4, ::java::util::List* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, int32_t arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4, ::com::sun::tools::javac::util::JCDiagnostic* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, int32_t arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, int32_t arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4, ::java::util::List* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, int32_t arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4, ::com::sun::tools::javac::util::JCDiagnostic* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, int32_t arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2, $String* arg3, ::java::util::List* arg4, ::java::util::List* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2, $String* arg3, ::java::util::List* arg4, ::com::sun::tools::javac::util::JCDiagnostic* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2, $String* arg3, ::java::util::List* arg4, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4, ::java::util::List* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4, ::com::sun::tools::javac::util::JCDiagnostic* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4, ::java::util::List* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4, ::com::sun::tools::javac::util::JCDiagnostic* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* VerboseResolveMulti1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2, $String* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* CompressedDiags;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeprecatedPlural;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeprecatedPluralAdditional;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* DeprecatedRecompile;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* Note;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* PreviewRecompile;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* RemovalPlural;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* RemovalPluralAdditional;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* RemovalRecompile;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* UncheckedPlural;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* UncheckedPluralAdditional;
	static ::com::sun::tools::javac::util::JCDiagnostic$Note* UncheckedRecompile;
};

				} // resources
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_resources_CompilerProperties$Notes_h_