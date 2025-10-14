#ifndef _com_sun_tools_javac_comp_Infer$BoundFilter_h_
#define _com_sun_tools_javac_comp_Infer$BoundFilter_h_
//$ class com.sun.tools.javac.comp.Infer$BoundFilter
//$ extends java.util.function.Predicate

#include <java/util/function/Predicate.h>

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
					class InferenceContext;
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

class $import Infer$BoundFilter : public ::java::util::function::Predicate {
	$class(Infer$BoundFilter, $NO_CLASS_INIT, ::java::util::function::Predicate)
public:
	Infer$BoundFilter();
	void init$(::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual bool test(::com::sun::tools::javac::code::Type* t);
	virtual bool test(Object$* t) override;
	::com::sun::tools::javac::comp::InferenceContext* inferenceContext = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$BoundFilter_h_