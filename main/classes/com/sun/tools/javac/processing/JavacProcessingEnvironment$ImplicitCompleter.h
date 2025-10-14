#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$ImplicitCompleter_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$ImplicitCompleter_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$ImplicitCompleter
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

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
				namespace processing {
					class JavacProcessingEnvironment;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCCompilationUnit;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$ImplicitCompleter : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(JavacProcessingEnvironment$ImplicitCompleter, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	JavacProcessingEnvironment$ImplicitCompleter();
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0, ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* topLevel);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* topLevel = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$ImplicitCompleter_h_