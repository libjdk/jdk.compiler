#ifndef _com_sun_tools_javac_api_JavacTrees$2_h_
#define _com_sun_tools_javac_api_JavacTrees$2_h_
//$ class com.sun.tools.javac.api.JavacTrees$2
//$ extends com.sun.source.util.DocTreeScanner

#include <com/sun/source/util/DocTreeScanner.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree;
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

class JavacTrees$2 : public ::com::sun::source::util::DocTreeScanner {
	$class(JavacTrees$2, $NO_CLASS_INIT, ::com::sun::source::util::DocTreeScanner)
public:
	JavacTrees$2();
	void init$(::com::sun::tools::javac::api::JavacTrees* this$0, $Array<::com::sun::source::doctree::DocTree>* val$last);
	using ::com::sun::source::util::DocTreeScanner::scan;
	virtual ::java::lang::Void* scan(::com::sun::source::doctree::DocTree* node, ::java::lang::Void* p);
	virtual $Object* scan(::com::sun::source::doctree::DocTree* node, Object$* p) override;
	::com::sun::tools::javac::api::JavacTrees* this$0 = nullptr;
	$Array<::com::sun::source::doctree::DocTree>* val$last = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTrees$2_h_