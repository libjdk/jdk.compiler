#ifndef _com_sun_tools_javac_resources_CompilerProperties$Fragments_h_
#define _com_sun_tools_javac_resources_CompilerProperties$Fragments_h_
//$ class com.sun.tools.javac.resources.CompilerProperties$Fragments
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind;
					class Kinds$KindName;
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
		class Set;
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

class $import CompilerProperties$Fragments : public ::java::lang::Object {
	$class(CompilerProperties$Fragments, 0, ::java::lang::Object)
public:
	CompilerProperties$Fragments();
	void init$();
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* AccessorReturnTypeDoesntMatch(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* AnachronisticModuleInfo($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* AnonymousClass(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ApplicableMethodFound(int32_t arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ApplicableMethodFound1(int32_t arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ApplicableMethodFound1(int32_t arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ApplicableMethodFound2(int32_t arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ApplicableMethodFound3(int32_t arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ApplicableMethodFound3(int32_t arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadClassFile(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadClassFileHeader(::java::io::File* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadClassFileHeader(::java::io::File* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadClassFileHeader(::javax::tools::JavaFileObject* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadClassFileHeader(::javax::tools::JavaFileObject* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadClassFileHeader(::java::nio::file::Path* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadClassFileHeader(::java::nio::file::Path* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstPoolEntry(::java::io::File* arg0, $String* arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstPoolEntry(::javax::tools::JavaFileObject* arg0, $String* arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstPoolEntry(::java::nio::file::Path* arg0, $String* arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstPoolIndex(::java::io::File* arg0, int32_t arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstPoolIndex(::javax::tools::JavaFileObject* arg0, int32_t arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstPoolIndex(::java::nio::file::Path* arg0, int32_t arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstantRange($String* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstantValue($String* arg0, ::com::sun::tools::javac::code::Symbol* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstantValueType(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadEnclosingMethod(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadInstanceMethodInUnboundLookup(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadIntersectionTargetForFunctionalExpr(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadIntersectionTargetForFunctionalExpr(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadSourceFileHeader(::java::io::File* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadSourceFileHeader(::java::io::File* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadSourceFileHeader(::javax::tools::JavaFileObject* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadSourceFileHeader(::javax::tools::JavaFileObject* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadSourceFileHeader(::java::nio::file::Path* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadSourceFileHeader(::java::nio::file::Path* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadStaticMethodInBoundLookup(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadStaticMethodInUnboundLookup(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CanonicalMustNotHaveStrongerAccess(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CanonicalMustNotHaveStrongerAccess($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantAccessInnerClsConstr(::com::sun::tools::javac::code::Symbol* arg0, ::java::util::List* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplyDiamond1(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplyDiamond1(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplyDiamond1(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplyDiamond1(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplyDiamond1(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplyDiamond1(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantApplySymbols(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantHide(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantImplement(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantOverride(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantResolveArgs(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::lang::Void* arg2, ::java::util::List* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantResolveLocationArgs(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::lang::Void* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantResolveLocationArgs(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::lang::Void* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantResolveLocationArgsParams(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantResolveLocationArgsParams(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CapturedType(int32_t arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ClashesWith(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ClassFileNotFound(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ClassIsNotSealed($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CountError(int32_t arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CountErrorPlural(int32_t arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CountErrorRecompile(int32_t arg0, int32_t arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CountWarn(int32_t arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CountWarnPlural(int32_t arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CountWarnRecompile(int32_t arg0, int32_t arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Descriptor(::com::sun::tools::javac::util::Name* arg0, ::java::util::List* arg1, ::com::sun::tools::javac::code::Type* arg2, ::java::util::List* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* DescriptorThrows(::com::sun::tools::javac::util::Name* arg0, ::java::util::List* arg1, ::com::sun::tools::javac::code::Type* arg2, ::java::util::List* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Diamond(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* DiamondAndExplicitParams(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* DiamondInvalidArg(::java::util::List* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* DiamondInvalidArg(::java::util::List* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* DiamondInvalidArgs(::java::util::List* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* DiamondInvalidArgs(::java::util::List* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* DiamondNonGeneric(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* DoesntExtendSealed(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* EqBounds(::java::util::List* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ExceptionMessage($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ExplicitParamDoNotConformToBounds(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FatalErrCantLocateCtor(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FatalErrCantLocateField(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FatalErrCantLocateMeth(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureNotSupportedInSource(::com::sun::tools::javac::util::JCDiagnostic* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureNotSupportedInSource(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureNotSupportedInSourcePlural(::com::sun::tools::javac::util::JCDiagnostic* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureNotSupportedInSourcePlural(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FileDoesNotContainPackage(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FileDoesntContainClass(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IllegalSignature(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InaccessibleVarargsType(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Kinds$Kind* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InapplicableMethod(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InapplicableMethod(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleAbstractDefault(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::util::Name* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Symbol* arg4, ::com::sun::tools::javac::code::Symbol* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleAbstracts(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleBounds(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleDescsInFunctionalIntf(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleDiffRet(::com::sun::tools::javac::util::Name* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleEqBounds(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleRetTypeInLambda(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleRetTypeInLambda(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleRetTypeInMref(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleRetTypeInMref(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleTypeInConditional(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleTypeInConditional(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleTypeInSwitchExpression(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleTypeInSwitchExpression(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleUnrelatedDefaults(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::util::Name* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Symbol* arg4, ::com::sun::tools::javac::code::Symbol* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleUpperBounds(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InconvertibleTypes(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InferArgLengthMismatch(::java::util::List* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InferNoConformingAssignmentExists(::java::util::List* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InferNoConformingAssignmentExists(::java::util::List* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InferNoConformingInstanceExists(::java::util::List* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InferVarargsArgumentMismatch(::java::util::List* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InferVarargsArgumentMismatch(::java::util::List* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InferredDoNotConformToEqBounds(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InferredDoNotConformToLowerBounds(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InferredDoNotConformToUpperBounds(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IntersectionType(int32_t arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InvalidDefaultInterface($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InvalidGenericLambdaTarget(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Kinds$KindName* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InvalidMref(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InvalidMref(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InvalidStaticInterface($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IsATypeVariable(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IsDuplicated(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Location(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Type* arg1, ::java::lang::Void* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Location(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::java::lang::Void* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Location1(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LowerBounds(::java::util::List* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* MethodDescriptorInvalid(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* MissingRetVal(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ModuleNameMismatch(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::util::Name* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ModuleNonZeroOpens(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* MustNotBeSupertype(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NoAbstracts(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NoConformingAssignmentExists(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NoConformingAssignmentExists(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NoSuitableFunctionalIntfInst(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NoUniqueMaximalInstanceExists(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NoUniqueMinimalInstanceExists(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotAFunctionalIntf(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotAFunctionalIntf1(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotAFunctionalIntf1(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotAnIntfComponent(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotAnIntfComponent(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotApplicableMethodFound(int32_t arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotApplicableMethodFound(int32_t arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessClassIntfCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessClassIntfCantAccessReason(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessClassIntfCantAccessReason(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessDoesNotRead(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessDoesNotReadFromUnnamed(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessDoesNotReadUnnamed(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessNotExported(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessNotExportedFromUnnamed(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessNotExportedToModule(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessNotExportedToModuleFromUnnamed(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessPackageCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefAccessPackageCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NotDefPublicCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* OverriddenDefault(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* PackageNotVisible(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* PackageNotVisible(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* PartialInstSig(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* PossibleLossOfPrecision(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ProbFoundReq(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ProbFoundReq(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* RedundantSupertype(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* RedundantSupertype(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* RefAmbiguous(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Kinds$Kind* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Symbol* arg5, ::com::sun::tools::javac::code::Symbol* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ReportAccess(::com::sun::tools::javac::code::Symbol* arg0, ::java::util::Set* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* SyntheticNameConflict(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ThrowsClauseNotAllowedForCanonicalConstructor(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TryNotApplicableToType(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TryNotApplicableToType(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeCaptureof(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeParameter(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeVar(::com::sun::tools::javac::util::Name* arg0, int32_t arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UncheckedClashWith(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UncheckedImplement(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UncheckedOverride(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UpperBounds(::java::util::List* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsArgumentMismatch(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsArgumentMismatch(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsClashWith(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsImplement(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsOverride(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsTrustmeOnNonVarargsAccessor(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsTrustmeOnNonVarargsMeth(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsTrustmeOnReifiableVarargs(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsTrustmeOnVirtualVarargs(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarargsTrustmeOnVirtualVarargsFinalOnly(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseCheckingAttribution(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseClasspath($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseLoading($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseParsingDone($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseParsingStarted(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseParsingStarted(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseParsingStarted(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseSourcepath($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseTotal($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseWroteFile(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseWroteFile(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VerboseWroteFile(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereCaptured(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2, ::com::sun::tools::javac::code::Type* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereCaptured1(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1, ::java::lang::Void* arg2, ::com::sun::tools::javac::code::Type* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereDescriptionCaptured1(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereDescriptionIntersection(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereDescriptionIntersection1(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereDescriptionTypevar(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereDescriptionTypevar1(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereFreshTypevar(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereIntersection(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereTypevar(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1, ::com::sun::tools::javac::code::Kinds$Kind* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereTypevar1(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1, ::com::sun::tools::javac::code::Kinds$Kind* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WrongNumberTypeArgs($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* XPrintProcessorInfo($String* arg0, $String* arg1, bool arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* XPrintRounds(int32_t arg0, $String* arg1, ::java::util::Set* arg2, bool arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* AccessorMethodCantThrowException;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* AccessorMethodMustNotBeGeneric;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* AccessorMethodMustNotBeStatic;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Anonymous;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ArgLengthMismatch;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadClassSignature;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstPoolTag;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadConstPoolTagAt;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadEnclosingClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadModuleInfoName;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadRequiresFlag;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadRuntimeInvisibleParamAnnotations;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadSignature;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BadTypeAnnotationValue;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* BaseMembership;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Bound;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Canonical;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CanonicalCantHaveReturnStatement;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CanonicalMustNotContainExplicitConstructorInvocation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CanonicalMustNotDeclareTypeVariables;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CanonicalWithNameMismatch;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* CantResolveModules;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ClassFileWrongClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Compact;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ConditionalTargetCantBeVoid;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* DiamondAnonymousMethodsImplicitlyOverride;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FatalErrCantClose;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FatalErrNoJavaLang;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureAnnotationsAfterTypeParams;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureCaseNull;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureDefaultMethods;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureDiamond;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureDiamondAndAnonClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureIntersectionTypesInCast;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureLambda;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureMethodReferences;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureModules;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureMultipleCaseLabels;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeaturePatternMatchingInstanceof;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeaturePatternSwitch;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeaturePrivateIntfMethods;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureRecords;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureReifiableTypesInstanceof;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureRepeatableAnnotations;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureSealedClasses;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureStaticIntfMethodInvoke;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureStaticIntfMethods;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureSwitchExpressions;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureSwitchRules;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureTextBlocks;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureTypeAnnotations;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureVarInTryWithResources;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FeatureVarSyntaxInImplicitLambda;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* FileDoesNotContainModule;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Guard;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IllegalStartOfClassFile;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ImplicitAndExplicitNotAllowed;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleArgTypesInLambda;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* IncompatibleArgTypesInMref;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* InnerCls;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameAnnotation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameConstructor;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameEnum;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameInstanceInit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameInterface;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameMethod;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameModule;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnamePackage;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameRecord;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameRecordComponent;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameStatic;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameStaticInit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameTypeVariable;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameTypeVariableBound;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameValue;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* KindnameVariable;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Lambda;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Local;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocalArrayMissingTarget;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocalCantInferNull;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocalCantInferVoid;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocalLambdaMissingTarget;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocalMissingInit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocalMrefMissingTarget;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocalSelfRef;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocnModule_path;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocnModule_source_path;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocnSystem_modules;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* LocnUpgrade_module_path;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* MalformedVarargMethod;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* MethodMustBePublic;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ModuleInfoDefinitionExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ModuleInfoInvalidSuperClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* MrefInferAndExplicitParams;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* MustNotBeSameClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NoArgs;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* NonStatic;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* ResumeAbort;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* SourceUnavailable;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* StatExprExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Static;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* StaticMrefWithTargs;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* SwitchExpressionTargetCantBeVoid;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TokenBadSymbol;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TokenCharacter;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TokenDouble;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TokenEndOfInput;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TokenFloat;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TokenIdentifier;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TokenInteger;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TokenLongInteger;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TokenString;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeCaptureof1;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeMustBeIdenticalToCorrespondingRecordComponentType;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeNone;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeNull;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeReqArrayOrIterable;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeReqClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeReqClassArray;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeReqExact;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* TypeReqRef;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UnableToAccessFile;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* Unbound;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UncheckedAssign;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UncheckedCastToType;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UndeclTypeVar;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UnexpectedConstPoolTagAt;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UnexpectedRetVal;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UnicodeStrNotSupported;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UnnamedModule;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UnnamedPackage;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* UserSelectedCompletionFailure;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarAndExplicitNotAllowed;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VarAndImplicitNotAllowed;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* VersionNotAvailable;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WhereDescriptionCaptured;
	static ::com::sun::tools::javac::util::JCDiagnostic$Fragment* WrongVersion;
};

				} // resources
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_resources_CompilerProperties$Fragments_h_