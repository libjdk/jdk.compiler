#ifndef _com_sun_tools_javac_api_JavacTrees$6_h_
#define _com_sun_tools_javac_api_JavacTrees$6_h_
//$ class com.sun.tools.javac.api.JavacTrees$6
//$ extends com.sun.tools.javac.tree.JCTree$JCCompilationUnit

#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class LineMap;
			}
		}
	}
}
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
				namespace util {
					class List;
				}
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTrees$6 : public ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit {
	$class(JavacTrees$6, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit)
public:
	JavacTrees$6();
	void init$(::com::sun::tools::javac::api::JavacTrees* this$0, ::com::sun::tools::javac::util::List* defs, ::javax::tools::JavaFileObject* val$jfo);
	virtual ::com::sun::source::tree::LineMap* getLineMap() override;
	virtual int32_t getPos();
	virtual ::javax::tools::JavaFileObject* getSourcefile();
	::com::sun::tools::javac::api::JavacTrees* this$0 = nullptr;
	::javax::tools::JavaFileObject* val$jfo = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTrees$6_h_