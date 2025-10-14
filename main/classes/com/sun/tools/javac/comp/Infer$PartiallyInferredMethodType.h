#ifndef _com_sun_tools_javac_comp_Infer$PartiallyInferredMethodType_h_
#define _com_sun_tools_javac_comp_Infer$PartiallyInferredMethodType_h_
//$ class com.sun.tools.javac.comp.Infer$PartiallyInferredMethodType
//$ extends com.sun.tools.javac.code.Type$MethodType

#include <com/sun/tools/javac/code/Type$MethodType.h>

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
					class Attr$ResultInfo;
					class Env;
					class Infer;
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

class $export Infer$PartiallyInferredMethodType : public ::com::sun::tools::javac::code::Type$MethodType {
	$class(Infer$PartiallyInferredMethodType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$MethodType)
public:
	Infer$PartiallyInferredMethodType();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$MethodType* mtype, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Warner* warn);
	virtual ::com::sun::tools::javac::code::Type* check(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual bool isPartial() override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
	::com::sun::tools::javac::comp::InferenceContext* inferenceContext = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::util::Warner* warn = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$PartiallyInferredMethodType_h_