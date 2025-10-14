#ifndef _com_sun_tools_sjavac_CompileChunk_h_
#define _com_sun_tools_sjavac_CompileChunk_h_
//$ class com.sun.tools.sjavac.CompileChunk
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class CompileChunk : public ::java::lang::Comparable {
	$class(CompileChunk, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	CompileChunk();
	void init$();
	virtual int32_t compareTo(::com::sun::tools::sjavac::CompileChunk* c);
	virtual int32_t compareTo(Object$* c) override;
	virtual bool equal(::com::sun::tools::sjavac::CompileChunk* c);
	int32_t numPackages = 0;
	int32_t numDependents = 0;
	::java::util::Set* srcs = nullptr;
	::java::lang::StringBuilder* pkgNames = nullptr;
	$String* pkgFromTos = nullptr;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_CompileChunk_h_