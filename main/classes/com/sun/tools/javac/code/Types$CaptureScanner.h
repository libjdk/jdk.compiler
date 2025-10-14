#ifndef _com_sun_tools_javac_code_Types$CaptureScanner_h_
#define _com_sun_tools_javac_code_Types$CaptureScanner_h_
//$ class com.sun.tools.javac.code.Types$CaptureScanner
//$ extends com.sun.tools.javac.code.Types$SimpleVisitor

#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$CapturedType;
					class Type$ClassType;
					class Type$TypeVar;
					class Type$WildcardType;
					class Types;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Types$CaptureScanner : public ::com::sun::tools::javac::code::Types$SimpleVisitor {
	$class(Types$CaptureScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SimpleVisitor)
public:
	Types$CaptureScanner();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	void lambda$visitClassType$0(::java::util::Set* seen, ::com::sun::tools::javac::code::Type* s);
	virtual ::java::lang::Void* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::util::Set* seen);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* seen) override;
	virtual ::java::lang::Void* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::util::Set* seen);
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* seen) override;
	virtual ::java::lang::Void* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::util::Set* seen);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* seen) override;
	virtual ::java::lang::Void* visitType(::com::sun::tools::javac::code::Type* t, ::java::util::Set* types);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* types) override;
	virtual ::java::lang::Void* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::util::Set* seen);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* seen) override;
	virtual ::java::lang::Void* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::util::Set* seen);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* seen) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$CaptureScanner_h_