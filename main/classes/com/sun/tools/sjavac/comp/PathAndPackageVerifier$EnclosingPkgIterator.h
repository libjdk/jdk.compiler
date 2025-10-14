#ifndef _com_sun_tools_sjavac_comp_PathAndPackageVerifier$EnclosingPkgIterator_h_
#define _com_sun_tools_sjavac_comp_PathAndPackageVerifier$EnclosingPkgIterator_h_
//$ class com.sun.tools.sjavac.comp.PathAndPackageVerifier$EnclosingPkgIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class PathAndPackageVerifier$EnclosingPkgIterator : public ::java::util::Iterator {
	$class(PathAndPackageVerifier$EnclosingPkgIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PathAndPackageVerifier$EnclosingPkgIterator();
	void init$(::com::sun::tools::javac::tree::JCTree* initial);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::com::sun::tools::javac::tree::JCTree* next$ = nullptr;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_PathAndPackageVerifier$EnclosingPkgIterator_h_