#ifndef _com_sun_tools_sjavac_comp_PathAndPackageVerifier$ParentIterator_h_
#define _com_sun_tools_sjavac_comp_PathAndPackageVerifier$ParentIterator_h_
//$ class com.sun.tools.sjavac.comp.PathAndPackageVerifier$ParentIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class PathAndPackageVerifier$ParentIterator : public ::java::util::Iterator {
	$class(PathAndPackageVerifier$ParentIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PathAndPackageVerifier$ParentIterator();
	void init$(::java::nio::file::Path* initial);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::nio::file::Path* next$ = nullptr;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_PathAndPackageVerifier$ParentIterator_h_