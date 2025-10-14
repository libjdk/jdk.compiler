#ifndef _com_sun_tools_javac_comp_Annotate$AnnotationContext_h_
#define _com_sun_tools_javac_comp_Annotate$AnnotationContext_h_
//$ class com.sun.tools.javac.comp.Annotate$AnnotationContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Annotate;
					class Env;
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

class Annotate$AnnotationContext : public ::java::lang::Object {
	$class(Annotate$AnnotationContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Annotate$AnnotationContext();
	void init$(::com::sun::tools::javac::comp::Annotate* this$0, ::com::sun::tools::javac::comp::Env* env, ::java::util::Map* annotated, ::java::util::Map* pos, bool isTypeCompound);
	::com::sun::tools::javac::comp::Annotate* this$0 = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::java::util::Map* annotated = nullptr;
	::java::util::Map* pos = nullptr;
	bool isTypeCompound = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate$AnnotationContext_h_