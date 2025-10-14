#ifndef _com_sun_tools_javac_util_UnsharedNameTable$HashEntry_h_
#define _com_sun_tools_javac_util_UnsharedNameTable$HashEntry_h_
//$ class com.sun.tools.javac.util.UnsharedNameTable$HashEntry
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class UnsharedNameTable$NameImpl;
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

class $import UnsharedNameTable$HashEntry : public ::java::lang::ref::WeakReference {
	$class(UnsharedNameTable$HashEntry, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	UnsharedNameTable$HashEntry();
	void init$(::com::sun::tools::javac::util::UnsharedNameTable$NameImpl* referent);
	::com::sun::tools::javac::util::UnsharedNameTable$HashEntry* next = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_UnsharedNameTable$HashEntry_h_