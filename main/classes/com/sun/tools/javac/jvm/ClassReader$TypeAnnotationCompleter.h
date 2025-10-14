#ifndef _com_sun_tools_javac_jvm_ClassReader$TypeAnnotationCompleter_h_
#define _com_sun_tools_javac_jvm_ClassReader$TypeAnnotationCompleter_h_
//$ class com.sun.tools.javac.jvm.ClassReader$TypeAnnotationCompleter
//$ extends com.sun.tools.javac.jvm.ClassReader$AnnotationCompleter

#include <com/sun/tools/javac/jvm/ClassReader$AnnotationCompleter.h>

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
				namespace jvm {
					class ClassReader;
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
				namespace jvm {

class $export ClassReader$TypeAnnotationCompleter : public ::com::sun::tools::javac::jvm::ClassReader$AnnotationCompleter {
	$class(ClassReader$TypeAnnotationCompleter, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::ClassReader$AnnotationCompleter)
public:
	ClassReader$TypeAnnotationCompleter();
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::List* proxies);
	virtual ::com::sun::tools::javac::util::List* deproxyTypeCompoundList(::com::sun::tools::javac::util::List* proxies);
	virtual void run() override;
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
	::com::sun::tools::javac::util::List* proxies = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$TypeAnnotationCompleter_h_