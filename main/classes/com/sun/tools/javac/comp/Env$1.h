#ifndef _com_sun_tools_javac_comp_Env$1_h_
#define _com_sun_tools_javac_comp_Env$1_h_
//$ class com.sun.tools.javac.comp.Env$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

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

class Env$1 : public ::java::util::Iterator {
	$class(Env$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Env$1();
	void init$(::com::sun::tools::javac::comp::Env* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::com::sun::tools::javac::comp::Env* this$0 = nullptr;
	::com::sun::tools::javac::comp::Env* next$ = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Env$1_h_