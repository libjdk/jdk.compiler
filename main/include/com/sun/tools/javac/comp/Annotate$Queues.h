#ifndef _com_sun_tools_javac_comp_Annotate$Queues_h_
#define _com_sun_tools_javac_comp_Annotate$Queues_h_
//$ class com.sun.tools.javac.comp.Annotate$Queues
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Annotate$Queues : public ::java::lang::Object {
	$class(Annotate$Queues, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Annotate$Queues();
	void init$();
	void init$(::com::sun::tools::javac::util::ListBuffer* q, ::com::sun::tools::javac::util::ListBuffer* validateQ, ::com::sun::tools::javac::util::ListBuffer* typesQ, ::com::sun::tools::javac::util::ListBuffer* afterTypesQ);
	::com::sun::tools::javac::util::ListBuffer* q = nullptr;
	::com::sun::tools::javac::util::ListBuffer* validateQ = nullptr;
	::com::sun::tools::javac::util::ListBuffer* typesQ = nullptr;
	::com::sun::tools::javac::util::ListBuffer* afterTypesQ = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate$Queues_h_