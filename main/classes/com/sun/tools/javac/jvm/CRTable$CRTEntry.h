#ifndef _com_sun_tools_javac_jvm_CRTable$CRTEntry_h_
#define _com_sun_tools_javac_jvm_CRTable$CRTEntry_h_
//$ class com.sun.tools.javac.jvm.CRTable$CRTEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export CRTable$CRTEntry : public ::java::lang::Object {
	$class(CRTable$CRTEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CRTable$CRTEntry();
	void init$(Object$* tree, int32_t flags, int32_t startPc, int32_t endPc);
	$Object* tree = nullptr;
	int32_t flags = 0;
	int32_t startPc = 0;
	int32_t endPc = 0;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_CRTable$CRTEntry_h_