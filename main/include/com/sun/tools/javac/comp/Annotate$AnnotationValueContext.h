#ifndef _com_sun_tools_javac_comp_Annotate$AnnotationValueContext_h_
#define _com_sun_tools_javac_comp_Annotate$AnnotationValueContext_h_
//$ class com.sun.tools.javac.comp.Annotate$AnnotationValueContext
//$ extends com.sun.tools.javac.comp.Check$NestedCheckContext

#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
				namespace comp {
					class Annotate;
					class Check$CheckContext;
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
					class Warner;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Annotate$AnnotationValueContext : public ::com::sun::tools::javac::comp::Check$NestedCheckContext {
	$class(Annotate$AnnotationValueContext, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Check$NestedCheckContext)
public:
	Annotate$AnnotationValueContext();
	void init$(::com::sun::tools::javac::comp::Annotate* this$0, ::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext);
	virtual bool compatible(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::util::Warner* warn) override;
	::com::sun::tools::javac::comp::Annotate* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate$AnnotationValueContext_h_