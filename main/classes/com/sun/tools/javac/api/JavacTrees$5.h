#ifndef _com_sun_tools_javac_api_JavacTrees$5_h_
#define _com_sun_tools_javac_api_JavacTrees$5_h_
//$ class com.sun.tools.javac.api.JavacTrees$5
//$ extends com.sun.tools.javac.code.Type$ClassType

#include <com/sun/tools/javac/code/Type$ClassType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class JavacTrees;
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
					class Symbol$TypeSymbol;
					class Type;
					class TypeMetadata;
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
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeKind;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTrees$5 : public ::com::sun::tools::javac::code::Type$ClassType {
	$class(JavacTrees$5, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ClassType)
public:
	JavacTrees$5();
	void init$(::com::sun::tools::javac::api::JavacTrees* this$0, ::com::sun::tools::javac::code::Type* outer, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata, ::com::sun::tools::javac::code::Type$ClassType* val$classType);
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	::com::sun::tools::javac::api::JavacTrees* this$0 = nullptr;
	::com::sun::tools::javac::code::Type$ClassType* val$classType = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTrees$5_h_