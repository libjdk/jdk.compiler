#ifndef _com_sun_tools_javac_code_Types$Rewriter_h_
#define _com_sun_tools_javac_code_Types$Rewriter_h_
//$ class com.sun.tools.javac.code.Types$Rewriter
//$ extends com.sun.tools.javac.code.Types$UnaryVisitor

#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>

#pragma push_macro("B")
#undef B

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class BoundKind;
					class Type;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Types$Rewriter : public ::com::sun::tools::javac::code::Types$UnaryVisitor {
	$class(Types$Rewriter, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$UnaryVisitor)
public:
	Types$Rewriter();
	void init$(::com::sun::tools::javac::code::Types* this$0, bool high, bool rewriteTypeVars);
	virtual ::com::sun::tools::javac::code::Type* B(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Type* rewriteAsWildcardType(::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Type$TypeVar* formal, ::com::sun::tools::javac::code::BoundKind* bk);
	using ::com::sun::tools::javac::code::Types$UnaryVisitor::visit;
	virtual ::com::sun::tools::javac::code::Type* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::lang::Void* s);
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* s);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* s);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* s);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::lang::Void* s);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* s) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	bool high = false;
	bool rewriteTypeVars = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("B")

#endif // _com_sun_tools_javac_code_Types$Rewriter_h_