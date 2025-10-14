#ifndef _com_sun_tools_javac_comp_ArgumentAttr$LocalCacheContext_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$LocalCacheContext_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$LocalCacheContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class ArgumentAttr;
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
				namespace comp {

class $import ArgumentAttr$LocalCacheContext : public ::java::lang::Object {
	$class(ArgumentAttr$LocalCacheContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArgumentAttr$LocalCacheContext();
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0);
	virtual void leave();
	::com::sun::tools::javac::comp::ArgumentAttr* this$0 = nullptr;
	::java::util::Map* prevCache = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$LocalCacheContext_h_