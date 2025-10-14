#ifndef _com_sun_tools_javac_jvm_CRTable$SourceRange_h_
#define _com_sun_tools_javac_jvm_CRTable$SourceRange_h_
//$ class com.sun.tools.javac.jvm.CRTable$SourceRange
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export CRTable$SourceRange : public ::java::lang::Object {
	$class(CRTable$SourceRange, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CRTable$SourceRange();
	void init$();
	void init$(int32_t startPos, int32_t endPos);
	virtual ::com::sun::tools::javac::jvm::CRTable$SourceRange* mergeWith(::com::sun::tools::javac::jvm::CRTable$SourceRange* sr);
	int32_t startPos = 0;
	int32_t endPos = 0;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_CRTable$SourceRange_h_