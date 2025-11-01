#ifndef _com_sun_tools_javac_code_Types$TypeMapping_h_
#define _com_sun_tools_javac_code_Types$TypeMapping_h_
//$ class com.sun.tools.javac.code.Types$TypeMapping
//$ extends com.sun.tools.javac.code.Types$MapVisitor
//$ implements java.util.function.Function

#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <java/util/function/Function.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$CapturedType;
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
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Types$TypeMapping : public ::com::sun::tools::javac::code::Types$MapVisitor, public ::java::util::function::Function {
	$class(Types$TypeMapping, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$MapVisitor, ::java::util::function::Function)
public:
	Types$TypeMapping();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::com::sun::tools::javac::code::Type* apply(::com::sun::tools::javac::code::Type* type);
	virtual $Object* apply(Object$* type) override;
	::com::sun::tools::javac::code::Type* lambda$visit$0(Object$* s, ::com::sun::tools::javac::code::Type* t);
	using ::com::sun::tools::javac::code::Types$MapVisitor::visit;
	virtual $String* toString() override;
	virtual ::com::sun::tools::javac::util::List* visit(::com::sun::tools::javac::util::List* ts, Object$* s);
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* s) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$TypeMapping_h_