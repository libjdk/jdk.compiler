#ifndef _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$1_h_
#define _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$1_h_
//$ class com.sun.tools.javac.api.JavacTaskPool$ReusableContext$1
//$ extends com.sun.source.util.TreeScanner

#include <com/sun/source/util/TreeScanner.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ClassTree;
				class Tree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class JavacTaskPool$ReusableContext;
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
					class Symbol;
					class Symtab;
					class Type;
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
				namespace api {

class JavacTaskPool$ReusableContext$1 : public ::com::sun::source::util::TreeScanner {
	$class(JavacTaskPool$ReusableContext$1, $NO_CLASS_INIT, ::com::sun::source::util::TreeScanner)
public:
	JavacTaskPool$ReusableContext$1();
	void init$(::com::sun::tools::javac::api::JavacTaskPool$ReusableContext* this$0);
	bool isCoreClass(::com::sun::tools::javac::code::Symbol* s);
	using ::com::sun::source::util::TreeScanner::scan;
	virtual ::java::lang::Void* scan(::com::sun::source::tree::Tree* tree, ::com::sun::tools::javac::code::Symtab* syms);
	virtual $Object* scan(::com::sun::source::tree::Tree* tree, Object$* syms) override;
	::com::sun::tools::javac::code::Type* supertype(::com::sun::tools::javac::code::Symbol* s);
	virtual ::java::lang::Void* visitClass(::com::sun::source::tree::ClassTree* node, ::com::sun::tools::javac::code::Symtab* syms);
	virtual $Object* visitClass(::com::sun::source::tree::ClassTree* node, Object$* syms) override;
	::com::sun::tools::javac::api::JavacTaskPool$ReusableContext* this$0 = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$1_h_