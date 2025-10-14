#ifndef _com_sun_tools_javac_util_RichDiagnosticFormatter$1_h_
#define _com_sun_tools_javac_util_RichDiagnosticFormatter$1_h_
//$ class com.sun.tools.javac.util.RichDiagnosticFormatter$1
//$ extends com.sun.tools.javac.code.Types$UnaryVisitor

#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$CapturedType;
					class Type$ClassType;
					class Type$ErrorType;
					class Type$ForAll;
					class Type$MethodType;
					class Type$TypeVar;
					class Type$WildcardType;
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
					class List;
					class RichDiagnosticFormatter;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class RichDiagnosticFormatter$1 : public ::com::sun::tools::javac::code::Types$UnaryVisitor {
	$class(RichDiagnosticFormatter$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$UnaryVisitor)
public:
	RichDiagnosticFormatter$1();
	void init$(::com::sun::tools::javac::util::RichDiagnosticFormatter* this$0);
	::com::sun::tools::javac::util::List* getBounds(::com::sun::tools::javac::code::Type* bound);
	using ::com::sun::tools::javac::code::Types$UnaryVisitor::visit;
	virtual ::java::lang::Void* visit(::com::sun::tools::javac::util::List* ts);
	virtual ::java::lang::Void* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::lang::Void* ignored);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* ignored) override;
	virtual ::java::lang::Void* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::lang::Void* ignored);
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* ignored) override;
	virtual ::java::lang::Void* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* ignored);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* ignored) override;
	virtual ::java::lang::Void* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, ::java::lang::Void* ignored);
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* ignored) override;
	virtual ::java::lang::Void* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, ::java::lang::Void* ignored);
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* ignored) override;
	virtual ::java::lang::Void* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::java::lang::Void* ignored);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* ignored) override;
	virtual ::java::lang::Void* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* ignored);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* ignored) override;
	virtual ::java::lang::Void* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* ignored);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* ignored) override;
	virtual ::java::lang::Void* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::lang::Void* ignored);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* ignored) override;
	::com::sun::tools::javac::util::RichDiagnosticFormatter* this$0 = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_RichDiagnosticFormatter$1_h_