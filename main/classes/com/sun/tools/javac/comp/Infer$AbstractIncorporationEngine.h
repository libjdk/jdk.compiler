#ifndef _com_sun_tools_javac_comp_Infer$AbstractIncorporationEngine_h_
#define _com_sun_tools_javac_comp_Infer$AbstractIncorporationEngine_h_
//$ class com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine
//$ extends com.sun.tools.javac.code.Type$UndetVar$UndetVarListener

#include <com/sun/tools/javac/code/Type$UndetVar$UndetVarListener.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$UndetVar;
					class Type$UndetVar$InferenceBound;
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
					class Infer;
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
				namespace comp {

class $export Infer$AbstractIncorporationEngine : public ::com::sun::tools::javac::code::Type$UndetVar$UndetVarListener {
	$class(Infer$AbstractIncorporationEngine, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$UndetVar$UndetVarListener)
public:
	Infer$AbstractIncorporationEngine();
	void init$(::com::sun::tools::javac::comp::Infer* this$0);
	virtual ::com::sun::tools::javac::util::List* getIncorporationActions(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::code::Type* t, bool update) {return nullptr;}
	virtual void varBoundChanged(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::code::Type* bound, bool update) override;
	virtual void varInstantiated(::com::sun::tools::javac::code::Type$UndetVar* uv) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$AbstractIncorporationEngine_h_