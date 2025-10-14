#ifndef _com_sun_tools_javac_api_JavacScope_h_
#define _com_sun_tools_javac_api_JavacScope_h_
//$ class com.sun.tools.javac.api.JavacScope
//$ extends com.sun.source.tree.Scope

#include <com/sun/source/tree/Scope.h>

#pragma push_macro("VALIDATOR")
#undef VALIDATOR

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ExecutableElement;
				class TypeElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import JavacScope : public ::com::sun::source::tree::Scope {
	$class(JavacScope, 0, ::com::sun::source::tree::Scope)
public:
	JavacScope();
	void init$(::com::sun::tools::javac::comp::Env* env);
	static ::com::sun::tools::javac::api::JavacScope* create(::com::sun::tools::javac::comp::Env* env);
	virtual bool equals(Object$* other) override;
	virtual ::javax::lang::model::element::TypeElement* getEnclosingClass() override;
	virtual ::javax::lang::model::element::ExecutableElement* getEnclosingMethod() override;
	virtual ::com::sun::tools::javac::api::JavacScope* getEnclosingScope() override;
	virtual ::com::sun::tools::javac::comp::Env* getEnv();
	virtual ::java::lang::Iterable* getLocalElements() override;
	virtual int32_t hashCode() override;
	virtual bool isStarImportScope();
	static bool lambda$static$0(::com::sun::tools::javac::code::Symbol* sym);
	virtual $String* toString() override;
	static ::java::util::function::Predicate* VALIDATOR;
	::com::sun::tools::javac::comp::Env* env = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("VALIDATOR")

#endif // _com_sun_tools_javac_api_JavacScope_h_