#ifndef _com_sun_tools_javac_comp_Resolve$1_h_
#define _com_sun_tools_javac_comp_Resolve$1_h_
//$ class com.sun.tools.javac.comp.Resolve$1
//$ extends com.sun.tools.javac.code.Types$SimpleVisitor

#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$ClassType;
					class Type$MethodType;
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
				namespace comp {
					class Env;
					class Resolve;
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
namespace java {
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$1 : public ::com::sun::tools::javac::code::Types$SimpleVisitor {
	$class(Resolve$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SimpleVisitor)
public:
	Resolve$1();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	using ::com::sun::tools::javac::code::Types$SimpleVisitor::visit;
	virtual void visit(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::comp::Env* env);
	virtual ::java::lang::Void* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::com::sun::tools::javac::comp::Env* env);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* env) override;
	virtual ::java::lang::Void* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::com::sun::tools::javac::comp::Env* env);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* env) override;
	virtual ::java::lang::Void* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::com::sun::tools::javac::comp::Env* env);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* env) override;
	virtual ::java::lang::Void* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::comp::Env* env);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* env) override;
	virtual ::java::lang::Void* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::com::sun::tools::javac::comp::Env* env);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* env) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$1_h_