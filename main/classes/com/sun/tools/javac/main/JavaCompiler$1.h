#ifndef _com_sun_tools_javac_main_JavaCompiler$1_h_
#define _com_sun_tools_javac_main_JavaCompiler$1_h_
//$ class com.sun.tools.javac.main.JavaCompiler$1
//$ extends com.sun.tools.javac.code.Symbol

#include <com/sun/tools/javac/code/Symbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind;
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
				namespace main {
					class JavaCompiler;
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
					class Name;
				}
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ElementVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class JavaCompiler$1 : public ::com::sun::tools::javac::code::Symbol {
	$class(JavaCompiler$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol)
public:
	JavaCompiler$1();
	using ::com::sun::tools::javac::code::Symbol::clone;
	using ::com::sun::tools::javac::code::Symbol::accept;
	void init$(::com::sun::tools::javac::main::JavaCompiler* this$0, ::com::sun::tools::javac::code::Kinds$Kind* kind, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual bool exists() override;
	::com::sun::tools::javac::main::JavaCompiler* this$0 = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_JavaCompiler$1_h_