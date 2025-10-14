#ifndef _com_sun_tools_javac_api_JavacTrees$3_h_
#define _com_sun_tools_javac_api_JavacTrees$3_h_
//$ class com.sun.tools.javac.api.JavacTrees$3
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

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
				namespace tree {
					class JCTree$JCBlock;
					class JCTree$JCClassDecl;
					class JCTree$JCVariableDecl;
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
					class ListBuffer;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTrees$3 : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(JavacTrees$3, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	JavacTrees$3();
	void init$(::com::sun::tools::javac::api::JavacTrees* this$0, ::com::sun::tools::javac::util::ListBuffer* val$toClear, ::java::util::Map* val$flatNameForClass);
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::api::JavacTrees* this$0 = nullptr;
	::java::util::Map* val$flatNameForClass = nullptr;
	::com::sun::tools::javac::util::ListBuffer* val$toClear = nullptr;
	::com::sun::tools::javac::code::Symbol* owner = nullptr;
	bool localContext = false;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTrees$3_h_