#ifndef _com_sun_tools_javac_comp_Attr$BreakAttr_h_
#define _com_sun_tools_javac_comp_Attr$BreakAttr_h_
//$ class com.sun.tools.javac.comp.Attr$BreakAttr
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Env;
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

class Attr$BreakAttr : public ::java::lang::RuntimeException {
	$class(Attr$BreakAttr, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Attr$BreakAttr();
	void init$(::com::sun::tools::javac::comp::Env* env);
	static const int64_t serialVersionUID = (int64_t)0x9FE645588D4D9CFB;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	Attr$BreakAttr(const Attr$BreakAttr& e);
	virtual void throw$() override;
	inline Attr$BreakAttr* operator ->() {
		return (Attr$BreakAttr*)throwing$;
	}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$BreakAttr_h_